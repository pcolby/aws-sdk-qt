// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTSECURETUNNELINGCLIENT_H
#define QTAWS_IOTSECURETUNNELINGCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsiotsecuretunnelingglobal.h"

class QNetworkReply;

namespace QtAws {
namespace IoTSecureTunneling {

class IoTSecureTunnelingClientPrivate;
class CloseTunnelRequest;
class CloseTunnelResponse;
class DescribeTunnelRequest;
class DescribeTunnelResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ListTunnelsRequest;
class ListTunnelsResponse;
class OpenTunnelRequest;
class OpenTunnelResponse;
class RotateTunnelAccessTokenRequest;
class RotateTunnelAccessTokenResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;

class QTAWSIOTSECURETUNNELING_EXPORT IoTSecureTunnelingClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    IoTSecureTunnelingClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit IoTSecureTunnelingClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CloseTunnelResponse * closeTunnel(const CloseTunnelRequest &request);
    DescribeTunnelResponse * describeTunnel(const DescribeTunnelRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListTunnelsResponse * listTunnels(const ListTunnelsRequest &request);
    OpenTunnelResponse * openTunnel(const OpenTunnelRequest &request);
    RotateTunnelAccessTokenResponse * rotateTunnelAccessToken(const RotateTunnelAccessTokenRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);

private:
    Q_DECLARE_PRIVATE(IoTSecureTunnelingClient)
    Q_DISABLE_COPY(IoTSecureTunnelingClient)

};

} // namespace IoTSecureTunneling
} // namespace QtAws

#endif
