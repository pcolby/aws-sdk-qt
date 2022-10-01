// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONNECTCONTACTLENSCLIENT_H
#define QTAWS_CONNECTCONTACTLENSCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsconnectcontactlensglobal.h"

class QNetworkReply;

namespace QtAws {
namespace ConnectContactLens {

class ConnectContactLensClientPrivate;
class ListRealtimeContactAnalysisSegmentsRequest;
class ListRealtimeContactAnalysisSegmentsResponse;

class QTAWSCONNECTCONTACTLENS_EXPORT ConnectContactLensClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    ConnectContactLensClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit ConnectContactLensClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    ListRealtimeContactAnalysisSegmentsResponse * listRealtimeContactAnalysisSegments(const ListRealtimeContactAnalysisSegmentsRequest &request);

private:
    Q_DECLARE_PRIVATE(ConnectContactLensClient)
    Q_DISABLE_COPY(ConnectContactLensClient)

};

} // namespace ConnectContactLens
} // namespace QtAws

#endif
