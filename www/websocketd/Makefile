PORTNAME=	websocketd
DISTVERSIONPREFIX=	v
DISTVERSION=	0.4.1
PORTREVISION=	19
CATEGORIES=	www

MAINTAINER=	ygy@FreeBSD.org
COMMENT=	Access any command-line tool via a WebSocket
WWW=		http://websocketd.com/

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		go:modules
USE_GITHUB=	yes
GH_ACCOUNT=	joewalnes
GH_TUPLE=	gorilla:websocket:v1.4.0:gorilla_websocket/vendor/github.com/gorilla/websocket

PLIST_FILES=	bin/${PORTNAME}

.include <bsd.port.mk>
