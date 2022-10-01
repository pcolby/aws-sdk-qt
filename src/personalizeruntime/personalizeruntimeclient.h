// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PERSONALIZERUNTIMECLIENT_H
#define QTAWS_PERSONALIZERUNTIMECLIENT_H

#include "core/awsabstractclient.h"

#include "qtawspersonalizeruntimeglobal.h"

class QNetworkReply;

namespace QtAws {
namespace PersonalizeRuntime {

class PersonalizeRuntimeClientPrivate;
class GetPersonalizedRankingRequest;
class GetPersonalizedRankingResponse;
class GetRecommendationsRequest;
class GetRecommendationsResponse;

class QTAWSPERSONALIZERUNTIME_EXPORT PersonalizeRuntimeClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    PersonalizeRuntimeClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit PersonalizeRuntimeClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    GetPersonalizedRankingResponse * getPersonalizedRanking(const GetPersonalizedRankingRequest &request);
    GetRecommendationsResponse * getRecommendations(const GetRecommendationsRequest &request);

private:
    Q_DECLARE_PRIVATE(PersonalizeRuntimeClient)
    Q_DISABLE_COPY(PersonalizeRuntimeClient)

};

} // namespace PersonalizeRuntime
} // namespace QtAws

#endif
