// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KINESISVIDEOSIGNALINGCLIENT_H
#define QTAWS_KINESISVIDEOSIGNALINGCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawskinesisvideosignalingglobal.h"

class QNetworkReply;

namespace QtAws {
namespace KinesisVideoSignaling {

class KinesisVideoSignalingClientPrivate;
class GetIceServerConfigRequest;
class GetIceServerConfigResponse;
class SendAlexaOfferToMasterRequest;
class SendAlexaOfferToMasterResponse;

class QTAWSKINESISVIDEOSIGNALING_EXPORT KinesisVideoSignalingClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    KinesisVideoSignalingClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit KinesisVideoSignalingClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    GetIceServerConfigResponse * getIceServerConfig(const GetIceServerConfigRequest &request);
    SendAlexaOfferToMasterResponse * sendAlexaOfferToMaster(const SendAlexaOfferToMasterRequest &request);

private:
    Q_DECLARE_PRIVATE(KinesisVideoSignalingClient)
    Q_DISABLE_COPY(KinesisVideoSignalingClient)

};

} // namespace KinesisVideoSignaling
} // namespace QtAws

#endif
