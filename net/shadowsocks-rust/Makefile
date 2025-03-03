PORTNAME=	shadowsocks-rust
DISTVERSIONPREFIX=	v
DISTVERSION=	1.19.0
CATEGORIES=	net

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Rust port of shadowsocks
WWW=		https://shadowsocks.org/

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		cargo
USE_RC_SUBR=	sslocal-rust \
		ssserver-rust

USE_GITHUB=	yes
GH_ACCOUNT=	shadowsocks

CARGO_CRATES=	addr2line-0.21.0 \
		adler-1.0.2 \
		aead-0.5.2 \
		aes-0.8.4 \
		aes-gcm-0.10.3 \
		aes-gcm-siv-0.11.1 \
		ahash-0.8.11 \
		aho-corasick-1.1.3 \
		android-tzdata-0.1.1 \
		android_system_properties-0.1.5 \
		anstream-0.6.14 \
		anstyle-1.0.7 \
		anstyle-parse-0.2.4 \
		anstyle-query-1.0.3 \
		anstyle-wincon-3.0.3 \
		anyhow-1.0.86 \
		arc-swap-1.7.1 \
		arrayref-0.3.7 \
		arrayvec-0.7.4 \
		async-trait-0.1.80 \
		atomic-waker-1.1.2 \
		autocfg-1.3.0 \
		aws-lc-rs-1.7.2 \
		aws-lc-sys-0.17.0 \
		backtrace-0.3.71 \
		base16ct-0.2.0 \
		base64-0.13.1 \
		base64-0.21.7 \
		base64-0.22.1 \
		base64ct-1.6.0 \
		bindgen-0.69.4 \
		bit-vec-0.6.3 \
		bitflags-1.3.2 \
		bitflags-2.5.0 \
		bitvec-1.0.1 \
		blake3-1.5.1 \
		block-buffer-0.10.4 \
		bloomfilter-1.0.13 \
		bson-2.10.0 \
		build-time-0.1.3 \
		bumpalo-3.16.0 \
		byte_string-1.0.0 \
		byteorder-1.5.0 \
		bytes-1.6.0 \
		c2rust-bitfields-0.18.0 \
		c2rust-bitfields-derive-0.18.0 \
		camellia-0.1.0 \
		cc-1.0.98 \
		ccm-0.5.0 \
		cexpr-0.6.0 \
		cfg-if-1.0.0 \
		cfg_aliases-0.2.1 \
		chacha20-0.9.1 \
		chacha20poly1305-0.10.1 \
		chrono-0.4.38 \
		cipher-0.4.4 \
		clang-sys-1.7.0 \
		clap-4.5.4 \
		clap_builder-4.5.2 \
		clap_lex-0.7.0 \
		cmake-0.1.50 \
		colorchoice-1.0.1 \
		const-oid-0.9.6 \
		constant_time_eq-0.3.0 \
		core-foundation-0.9.4 \
		core-foundation-sys-0.8.6 \
		cpufeatures-0.2.12 \
		crc32fast-1.4.2 \
		crossbeam-channel-0.5.13 \
		crossbeam-epoch-0.9.18 \
		crossbeam-utils-0.8.20 \
		crypto-bigint-0.5.5 \
		crypto-common-0.1.6 \
		ctr-0.9.2 \
		daemonize-0.5.0 \
		data-encoding-2.6.0 \
		defmt-0.3.8 \
		defmt-macros-0.3.9 \
		defmt-parser-0.3.4 \
		der-0.7.9 \
		deranged-0.3.11 \
		derivative-2.2.0 \
		destructure_traitobject-0.2.0 \
		digest-0.10.7 \
		directories-5.0.1 \
		dirs-sys-0.4.1 \
		dunce-1.0.4 \
		ecdsa-0.16.9 \
		ed25519-2.2.3 \
		either-1.12.0 \
		elliptic-curve-0.13.8 \
		encoding_rs-0.8.34 \
		enum-as-inner-0.6.0 \
		env_filter-0.1.0 \
		env_logger-0.11.3 \
		equivalent-1.0.1 \
		errno-0.3.9 \
		etherparse-0.14.3 \
		fastrand-1.9.0 \
		fastrand-2.1.0 \
		ff-0.13.0 \
		filetime-0.2.23 \
		fnv-1.0.7 \
		foreign-types-0.3.2 \
		foreign-types-shared-0.1.1 \
		form_urlencoded-1.2.1 \
		fs2-0.4.3 \
		fs_extra-1.3.0 \
		fsevent-sys-4.1.0 \
		funty-2.0.0 \
		futures-0.3.30 \
		futures-channel-0.3.30 \
		futures-core-0.3.30 \
		futures-executor-0.3.30 \
		futures-io-0.3.30 \
		futures-macro-0.3.30 \
		futures-sink-0.3.30 \
		futures-task-0.3.30 \
		futures-util-0.3.30 \
		fxhash-0.2.1 \
		generic-array-0.14.7 \
		getrandom-0.2.15 \
		ghash-0.5.1 \
		gimli-0.28.1 \
		glob-0.3.1 \
		group-0.13.0 \
		h2-0.3.26 \
		h2-0.4.5 \
		h3-0.0.2 \
		h3-quinn-0.0.3 \
		hash32-0.3.1 \
		hashbrown-0.14.5 \
		heapless-0.8.0 \
		heck-0.4.1 \
		hermit-abi-0.3.9 \
		hex-0.4.3 \
		hickory-proto-0.24.1 \
		hickory-resolver-0.24.1 \
		hkdf-0.12.4 \
		hmac-0.12.1 \
		home-0.5.9 \
		hostname-0.3.1 \
		http-0.2.12 \
		http-1.1.0 \
		http-body-1.0.0 \
		http-body-util-0.1.1 \
		httparse-1.8.0 \
		httpdate-1.0.3 \
		humantime-2.1.0 \
		hyper-1.3.1 \
		hyper-rustls-0.26.0 \
		hyper-tls-0.6.0 \
		hyper-util-0.1.4 \
		iana-time-zone-0.1.60 \
		iana-time-zone-haiku-0.1.2 \
		idna-0.4.0 \
		idna-0.5.0 \
		indexmap-2.2.6 \
		inotify-0.9.6 \
		inotify-sys-0.1.5 \
		inout-0.1.3 \
		instant-0.1.13 \
		ioctl-sys-0.8.0 \
		ipconfig-0.3.2 \
		ipnet-2.9.0 \
		iprange-0.6.7 \
		is_terminal_polyfill-1.70.0 \
		itertools-0.12.1 \
		itoa-1.0.11 \
		jemalloc-sys-0.5.4+5.3.0-patched \
		jemallocator-0.5.4 \
		jobserver-0.1.31 \
		js-sys-0.3.69 \
		json5-0.4.1 \
		kqueue-1.0.8 \
		kqueue-sys-1.0.4 \
		lazy_static-1.4.0 \
		lazycell-1.3.0 \
		libc-0.2.155 \
		libloading-0.8.3 \
		libmimalloc-sys-0.1.38 \
		libredox-0.1.3 \
		linked-hash-map-0.5.6 \
		linux-raw-sys-0.4.14 \
		lock_api-0.4.12 \
		log-0.4.21 \
		log-mdc-0.1.0 \
		log4rs-1.3.0 \
		lru-cache-0.1.2 \
		lru_time_cache-0.11.11 \
		managed-0.8.0 \
		match_cfg-0.1.0 \
		matchers-0.1.0 \
		md-5-0.10.6 \
		memchr-2.7.2 \
		mimalloc-0.1.42 \
		mime-0.3.17 \
		minimal-lexical-0.2.1 \
		miniz_oxide-0.7.3 \
		mio-0.8.11 \
		mirai-annotations-1.12.0 \
		native-tls-0.2.11 \
		nix-0.29.0 \
		nom-7.1.3 \
		notify-6.1.1 \
		nu-ansi-term-0.46.0 \
		num-conv-0.1.0 \
		num-traits-0.2.19 \
		num_cpus-1.16.0 \
		num_threads-0.1.7 \
		object-0.32.2 \
		once_cell-1.19.0 \
		opaque-debug-0.3.1 \
		openssl-0.10.64 \
		openssl-macros-0.1.1 \
		openssl-probe-0.1.5 \
		openssl-src-300.3.0+3.3.0 \
		openssl-sys-0.9.102 \
		option-ext-0.2.0 \
		ordered-float-2.10.1 \
		overload-0.1.1 \
		p256-0.13.2 \
		p384-0.13.0 \
		parking_lot-0.11.2 \
		parking_lot-0.12.3 \
		parking_lot_core-0.8.6 \
		parking_lot_core-0.9.10 \
		paste-1.0.15 \
		percent-encoding-2.3.1 \
		pest-2.7.10 \
		pest_derive-2.7.10 \
		pest_generator-2.7.10 \
		pest_meta-2.7.10 \
		pin-project-1.1.5 \
		pin-project-internal-1.1.5 \
		pin-project-lite-0.2.14 \
		pin-utils-0.1.0 \
		pkcs8-0.10.2 \
		pkg-config-0.3.30 \
		poly1305-0.8.0 \
		polyval-0.6.2 \
		powerfmt-0.2.0 \
		ppv-lite86-0.2.17 \
		prettyplease-0.2.20 \
		primeorder-0.13.6 \
		proc-macro-error-1.0.4 \
		proc-macro-error-attr-1.0.4 \
		proc-macro2-1.0.83 \
		qrcode-0.14.0 \
		quick-error-1.2.3 \
		quinn-0.10.2 \
		quinn-proto-0.10.6 \
		quinn-udp-0.4.1 \
		quote-1.0.36 \
		radium-0.7.0 \
		rand-0.8.5 \
		rand_chacha-0.3.1 \
		rand_core-0.6.4 \
		redox_syscall-0.2.16 \
		redox_syscall-0.4.1 \
		redox_syscall-0.5.1 \
		redox_users-0.4.5 \
		regex-1.10.4 \
		regex-automata-0.1.10 \
		regex-automata-0.4.6 \
		regex-syntax-0.6.29 \
		regex-syntax-0.8.3 \
		reqwest-0.12.4 \
		resolv-conf-0.7.0 \
		ring-0.16.20 \
		ring-0.17.8 \
		ring-compat-0.8.0 \
		rpassword-7.3.1 \
		rpmalloc-0.2.2 \
		rpmalloc-sys-0.2.3+b097fd0 \
		rtoolbox-0.0.2 \
		rustc-demangle-0.1.24 \
		rustc-hash-1.1.0 \
		rustix-0.38.34 \
		rustls-0.21.12 \
		rustls-0.22.4 \
		rustls-0.23.8 \
		rustls-native-certs-0.6.3 \
		rustls-native-certs-0.7.0 \
		rustls-pemfile-1.0.4 \
		rustls-pemfile-2.1.2 \
		rustls-pki-types-1.7.0 \
		rustls-webpki-0.101.7 \
		rustls-webpki-0.102.4 \
		ryu-1.0.18 \
		same-file-1.0.6 \
		schannel-0.1.23 \
		scopeguard-1.2.0 \
		sct-0.7.1 \
		sec1-0.7.3 \
		security-framework-2.11.0 \
		security-framework-sys-2.11.0 \
		sendfd-0.4.3 \
		serde-1.0.202 \
		serde-value-0.7.0 \
		serde_bytes-0.11.14 \
		serde_derive-1.0.202 \
		serde_json-1.0.117 \
		serde_urlencoded-0.7.1 \
		serde_yaml-0.9.34+deprecated \
		sha1-0.10.6 \
		sha2-0.10.8 \
		shadowsocks-crypto-0.5.4 \
		sharded-slab-0.1.7 \
		shlex-1.3.0 \
		signal-hook-registry-1.4.2 \
		signature-2.2.0 \
		siphasher-1.0.1 \
		slab-0.4.9 \
		sled-0.34.7 \
		sm4-0.5.1 \
		smallvec-1.13.2 \
		smoltcp-0.11.0 \
		snmalloc-rs-0.3.5 \
		snmalloc-sys-0.3.5 \
		socket2-0.5.7 \
		spin-0.5.2 \
		spin-0.9.8 \
		spki-0.7.3 \
		stable_deref_trait-1.2.0 \
		strsim-0.11.1 \
		subtle-2.5.0 \
		syn-1.0.109 \
		syn-2.0.66 \
		sync_wrapper-0.1.2 \
		sysexits-0.7.14 \
		system-configuration-0.5.1 \
		system-configuration-sys-0.5.0 \
		tap-1.0.1 \
		tcmalloc-0.3.0 \
		tcmalloc-sys-0.3.0 \
		tempfile-3.10.1 \
		terminal_size-0.3.0 \
		thiserror-1.0.61 \
		thiserror-impl-1.0.61 \
		thread-id-4.2.1 \
		thread_local-1.1.8 \
		time-0.3.36 \
		time-core-0.1.2 \
		time-macros-0.2.18 \
		tinyvec-1.6.0 \
		tinyvec_macros-0.1.1 \
		tokio-1.37.0 \
		tokio-macros-2.2.0 \
		tokio-native-tls-0.3.1 \
		tokio-rustls-0.24.1 \
		tokio-rustls-0.25.0 \
		tokio-rustls-0.26.0 \
		tokio-tfo-0.3.1 \
		tokio-util-0.7.11 \
		tower-0.4.13 \
		tower-layer-0.3.2 \
		tower-service-0.3.2 \
		tracing-0.1.40 \
		tracing-attributes-0.1.27 \
		tracing-core-0.1.32 \
		tracing-log-0.2.0 \
		tracing-subscriber-0.3.18 \
		try-lock-0.2.5 \
		tun-0.6.1 \
		typemap-ors-1.0.0 \
		typenum-1.17.0 \
		ucd-trie-0.1.6 \
		unicode-bidi-0.3.15 \
		unicode-ident-1.0.12 \
		unicode-normalization-0.1.23 \
		universal-hash-0.5.1 \
		unsafe-any-ors-1.0.0 \
		unsafe-libyaml-0.2.11 \
		untrusted-0.7.1 \
		untrusted-0.9.0 \
		url-2.5.0 \
		utf8parse-0.2.1 \
		uuid-1.8.0 \
		valuable-0.1.0 \
		vcpkg-0.2.15 \
		version_check-0.9.4 \
		walkdir-2.5.0 \
		want-0.3.1 \
		wasi-0.11.0+wasi-snapshot-preview1 \
		wasm-bindgen-0.2.92 \
		wasm-bindgen-backend-0.2.92 \
		wasm-bindgen-futures-0.4.42 \
		wasm-bindgen-macro-0.2.92 \
		wasm-bindgen-macro-support-0.2.92 \
		wasm-bindgen-shared-0.2.92 \
		web-sys-0.3.69 \
		webpki-roots-0.25.4 \
		webpki-roots-0.26.1 \
		which-4.4.2 \
		widestring-1.1.0 \
		winapi-0.3.9 \
		winapi-i686-pc-windows-gnu-0.4.0 \
		winapi-util-0.1.8 \
		winapi-x86_64-pc-windows-gnu-0.4.0 \
		windows-0.51.1 \
		windows-core-0.51.1 \
		windows-core-0.52.0 \
		windows-service-0.7.0 \
		windows-sys-0.48.0 \
		windows-sys-0.52.0 \
		windows-targets-0.48.5 \
		windows-targets-0.52.5 \
		windows_aarch64_gnullvm-0.48.5 \
		windows_aarch64_gnullvm-0.52.5 \
		windows_aarch64_msvc-0.48.5 \
		windows_aarch64_msvc-0.52.5 \
		windows_i686_gnu-0.48.5 \
		windows_i686_gnu-0.52.5 \
		windows_i686_gnullvm-0.52.5 \
		windows_i686_msvc-0.48.5 \
		windows_i686_msvc-0.52.5 \
		windows_x86_64_gnu-0.48.5 \
		windows_x86_64_gnu-0.52.5 \
		windows_x86_64_gnullvm-0.48.5 \
		windows_x86_64_gnullvm-0.52.5 \
		windows_x86_64_msvc-0.48.5 \
		windows_x86_64_msvc-0.52.5 \
		winreg-0.50.0 \
		winreg-0.52.0 \
		wintun-0.3.2 \
		wyz-0.5.1 \
		xdg-2.5.2 \
		zerocopy-0.7.34 \
		zerocopy-derive-0.7.34 \
		zeroize-1.7.0 \
		zeroize_derive-1.4.2 \
		zstd-0.9.2+zstd.1.5.1 \
		zstd-safe-4.1.3+zstd.1.5.1 \
		zstd-sys-1.6.2+zstd.1.5.1

OPENSSLINC=	/usr/include
OPENSSLLIB=	/usr/lib

EXECUTABLES=	sslocal ssmanager ssserver ssservice ssurl

post-install:
	# strip binaries
.for e in ${EXECUTABLES}
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/${e}
.endfor
	# install config file
	${MKDIR} ${STAGEDIR}${ETCDIR}
	${INSTALL_DATA} ${WRKSRC}/examples/config.json ${STAGEDIR}${ETCDIR}/config.json.sample

.include <bsd.port.mk>
