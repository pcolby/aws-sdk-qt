/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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

    IoTSecureTunnelingClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CloseTunnelResponse * closeTunnel(const CloseTunnelRequest &request);
    DescribeTunnelResponse * describeTunnel(const DescribeTunnelRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListTunnelsResponse * listTunnels(const ListTunnelsRequest &request);
    OpenTunnelResponse * openTunnel(const OpenTunnelRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);

protected:
    /// @cond internal
    IoTSecureTunnelingClientPrivate * const d_ptr; ///< Internal d-pointer.
    IoTSecureTunnelingClient(IoTSecureTunnelingClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(IoTSecureTunnelingClient)
    Q_DISABLE_COPY(IoTSecureTunnelingClient)

};

} // namespace IoTSecureTunneling
} // namespace QtAws

#endif
