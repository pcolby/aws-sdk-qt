/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_CLOUDSEARCHCLIENT_H
#define QTAWS_CLOUDSEARCHCLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace CloudSearch {

class CloudSearchClientPrivate;

class QTAWS_EXPORT CloudSearchClient : public AwsAbstractClient {
    Q_OBJECT

public:
    CloudSearchClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    CloudSearchClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    BuildSuggestersResponse * buildSuggesters(const BuildSuggestersRequest &request);
    CreateDomainResponse * createDomain(const CreateDomainRequest &request);
    DefineAnalysisSchemeResponse * defineAnalysisScheme(const DefineAnalysisSchemeRequest &request);
    DefineExpressionResponse * defineExpression(const DefineExpressionRequest &request);
    DefineIndexFieldResponse * defineIndexField(const DefineIndexFieldRequest &request);
    DefineSuggesterResponse * defineSuggester(const DefineSuggesterRequest &request);
    DeleteAnalysisSchemeResponse * deleteAnalysisScheme(const DeleteAnalysisSchemeRequest &request);
    DeleteDomainResponse * deleteDomain(const DeleteDomainRequest &request);
    DeleteExpressionResponse * deleteExpression(const DeleteExpressionRequest &request);
    DeleteIndexFieldResponse * deleteIndexField(const DeleteIndexFieldRequest &request);
    DeleteSuggesterResponse * deleteSuggester(const DeleteSuggesterRequest &request);
    DescribeAnalysisSchemesResponse * describeAnalysisSchemes(const DescribeAnalysisSchemesRequest &request);
    DescribeAvailabilityOptionsResponse * describeAvailabilityOptions(const DescribeAvailabilityOptionsRequest &request);
    DescribeDomainsResponse * describeDomains(const DescribeDomainsRequest &request);
    DescribeExpressionsResponse * describeExpressions(const DescribeExpressionsRequest &request);
    DescribeIndexFieldsResponse * describeIndexFields(const DescribeIndexFieldsRequest &request);
    DescribeScalingParametersResponse * describeScalingParameters(const DescribeScalingParametersRequest &request);
    DescribeServiceAccessPoliciesResponse * describeServiceAccessPolicies(const DescribeServiceAccessPoliciesRequest &request);
    DescribeSuggestersResponse * describeSuggesters(const DescribeSuggestersRequest &request);
    IndexDocumentsResponse * indexDocuments(const IndexDocumentsRequest &request);
    ListDomainNamesResponse * listDomainNames();
    UpdateAvailabilityOptionsResponse * updateAvailabilityOptions(const UpdateAvailabilityOptionsRequest &request);
    UpdateScalingParametersResponse * updateScalingParameters(const UpdateScalingParametersRequest &request);
    UpdateServiceAccessPoliciesResponse * updateServiceAccessPolicies(const UpdateServiceAccessPoliciesRequest &request);

private:
    Q_DECLARE_PRIVATE(CloudSearchClient)
    Q_DISABLE_COPY(CloudSearchClient)

};

} // namespace CloudSearch
} // namespace AWS

#endif
