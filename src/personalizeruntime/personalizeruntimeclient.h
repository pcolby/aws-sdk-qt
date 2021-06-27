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

#ifndef QTAWS_PERSONALIZERUNTIMECLIENT_H
#define QTAWS_PERSONALIZERUNTIMECLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace PersonalizeRuntime {

class PersonalizeRuntimeClientPrivate;
class GetPersonalizedRankingRequest;
class GetPersonalizedRankingResponse;
class GetRecommendationsRequest;
class GetRecommendationsResponse;

class QTAWS_EXPORT PersonalizeRuntimeClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    PersonalizeRuntimeClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    PersonalizeRuntimeClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    GetPersonalizedRankingResponse * getPersonalizedRanking(const GetPersonalizedRankingRequest &request);
    GetRecommendationsResponse * getRecommendations(const GetRecommendationsRequest &request);

protected:
    /// @cond internal
    PersonalizeRuntimeClientPrivate * const d_ptr; ///< Internal d-pointer.
    PersonalizeRuntimeClient(PersonalizeRuntimeClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(PersonalizeRuntimeClient)
    Q_DISABLE_COPY(PersonalizeRuntimeClient)

};

} // namespace PersonalizeRuntime
} // namespace QtAws

#endif
