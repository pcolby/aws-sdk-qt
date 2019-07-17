/*
    Copyright 2013-2019 Paul Colby

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

#ifndef QTAWS_APPLICATIONINSIGHTSCLIENT_H
#define QTAWS_APPLICATIONINSIGHTSCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace ApplicationInsights {

class ApplicationInsightsClientPrivate;
class CreateApplicationRequest;
class CreateApplicationResponse;
class CreateComponentRequest;
class CreateComponentResponse;
class DeleteApplicationRequest;
class DeleteApplicationResponse;
class DeleteComponentRequest;
class DeleteComponentResponse;
class DescribeApplicationRequest;
class DescribeApplicationResponse;
class DescribeComponentRequest;
class DescribeComponentResponse;
class DescribeComponentConfigurationRequest;
class DescribeComponentConfigurationResponse;
class DescribeComponentConfigurationRecommendationRequest;
class DescribeComponentConfigurationRecommendationResponse;
class DescribeObservationRequest;
class DescribeObservationResponse;
class DescribeProblemRequest;
class DescribeProblemResponse;
class DescribeProblemObservationsRequest;
class DescribeProblemObservationsResponse;
class ListApplicationsRequest;
class ListApplicationsResponse;
class ListComponentsRequest;
class ListComponentsResponse;
class ListProblemsRequest;
class ListProblemsResponse;
class UpdateComponentRequest;
class UpdateComponentResponse;
class UpdateComponentConfigurationRequest;
class UpdateComponentConfigurationResponse;

class QTAWS_EXPORT ApplicationInsightsClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    ApplicationInsightsClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    ApplicationInsightsClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateApplicationResponse * createApplication(const CreateApplicationRequest &request);
    CreateComponentResponse * createComponent(const CreateComponentRequest &request);
    DeleteApplicationResponse * deleteApplication(const DeleteApplicationRequest &request);
    DeleteComponentResponse * deleteComponent(const DeleteComponentRequest &request);
    DescribeApplicationResponse * describeApplication(const DescribeApplicationRequest &request);
    DescribeComponentResponse * describeComponent(const DescribeComponentRequest &request);
    DescribeComponentConfigurationResponse * describeComponentConfiguration(const DescribeComponentConfigurationRequest &request);
    DescribeComponentConfigurationRecommendationResponse * describeComponentConfigurationRecommendation(const DescribeComponentConfigurationRecommendationRequest &request);
    DescribeObservationResponse * describeObservation(const DescribeObservationRequest &request);
    DescribeProblemResponse * describeProblem(const DescribeProblemRequest &request);
    DescribeProblemObservationsResponse * describeProblemObservations(const DescribeProblemObservationsRequest &request);
    ListApplicationsResponse * listApplications(const ListApplicationsRequest &request);
    ListComponentsResponse * listComponents(const ListComponentsRequest &request);
    ListProblemsResponse * listProblems(const ListProblemsRequest &request);
    UpdateComponentResponse * updateComponent(const UpdateComponentRequest &request);
    UpdateComponentConfigurationResponse * updateComponentConfiguration(const UpdateComponentConfigurationRequest &request);

private:
    Q_DECLARE_PRIVATE(ApplicationInsightsClient)
    Q_DISABLE_COPY(ApplicationInsightsClient)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
