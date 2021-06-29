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

#ifndef QTAWS_KINESISVIDEOSIGNALINGCHANNELSCLIENT_H
#define QTAWS_KINESISVIDEOSIGNALINGCHANNELSCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawskinesisvideosignalingchannelsglobal.h"

class QNetworkReply;

namespace QtAws {
namespace KinesisVideoSignalingChannels {

class KinesisVideoSignalingChannelsClientPrivate;
class GetIceServerConfigRequest;
class GetIceServerConfigResponse;
class SendAlexaOfferToMasterRequest;
class SendAlexaOfferToMasterResponse;

class QTAWSKINESISVIDEOSIGNALINGCHANNELS_EXPORT KinesisVideoSignalingChannelsClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    KinesisVideoSignalingChannelsClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit KinesisVideoSignalingChannelsClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    GetIceServerConfigResponse * getIceServerConfig(const GetIceServerConfigRequest &request);
    SendAlexaOfferToMasterResponse * sendAlexaOfferToMaster(const SendAlexaOfferToMasterRequest &request);

protected:
    /// @cond internal
    KinesisVideoSignalingChannelsClientPrivate * const d_ptr; ///< Internal d-pointer.
    explicit KinesisVideoSignalingChannelsClient(KinesisVideoSignalingChannelsClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(KinesisVideoSignalingChannelsClient)
    Q_DISABLE_COPY(KinesisVideoSignalingChannelsClient)

};

} // namespace KinesisVideoSignalingChannels
} // namespace QtAws

#endif
