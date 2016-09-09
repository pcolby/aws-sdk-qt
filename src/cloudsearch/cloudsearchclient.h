/*
    Copyright 2013-2016 Paul Colby

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

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
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
    CloudSearchBuildSuggestersResponse * buildSuggesters(const CloudSearchBuildSuggestersRequest &request);
    CloudSearchCreateDomainResponse * createDomain(const CloudSearchCreateDomainRequest &request);
    CloudSearchDefineAnalysisSchemeResponse * defineAnalysisScheme(const CloudSearchDefineAnalysisSchemeRequest &request);
    CloudSearchDefineExpressionResponse * defineExpression(const CloudSearchDefineExpressionRequest &request);
    CloudSearchDefineIndexFieldResponse * defineIndexField(const CloudSearchDefineIndexFieldRequest &request);
    CloudSearchDefineSuggesterResponse * defineSuggester(const CloudSearchDefineSuggesterRequest &request);
    CloudSearchDeleteAnalysisSchemeResponse * deleteAnalysisScheme(const CloudSearchDeleteAnalysisSchemeRequest &request);
    CloudSearchDeleteDomainResponse * deleteDomain(const CloudSearchDeleteDomainRequest &request);
    CloudSearchDeleteExpressionResponse * deleteExpression(const CloudSearchDeleteExpressionRequest &request);
    CloudSearchDeleteIndexFieldResponse * deleteIndexField(const CloudSearchDeleteIndexFieldRequest &request);
    CloudSearchDeleteSuggesterResponse * deleteSuggester(const CloudSearchDeleteSuggesterRequest &request);
    CloudSearchDescribeAnalysisSchemesResponse * describeAnalysisSchemes(const CloudSearchDescribeAnalysisSchemesRequest &request);
    CloudSearchDescribeAvailabilityOptionsResponse * describeAvailabilityOptions(const CloudSearchDescribeAvailabilityOptionsRequest &request);
    CloudSearchDescribeDomainsResponse * describeDomains(const CloudSearchDescribeDomainsRequest &request);
    CloudSearchDescribeExpressionsResponse * describeExpressions(const CloudSearchDescribeExpressionsRequest &request);
    CloudSearchDescribeIndexFieldsResponse * describeIndexFields(const CloudSearchDescribeIndexFieldsRequest &request);
    CloudSearchDescribeScalingParametersResponse * describeScalingParameters(const CloudSearchDescribeScalingParametersRequest &request);
    CloudSearchDescribeServiceAccessPoliciesResponse * describeServiceAccessPolicies(const CloudSearchDescribeServiceAccessPoliciesRequest &request);
    CloudSearchDescribeSuggestersResponse * describeSuggesters(const CloudSearchDescribeSuggestersRequest &request);
    CloudSearchIndexDocumentsResponse * indexDocuments(const CloudSearchIndexDocumentsRequest &request);
    CloudSearchListDomainNamesResponse * listDomainNames();
    CloudSearchUpdateAvailabilityOptionsResponse * updateAvailabilityOptions(const CloudSearchUpdateAvailabilityOptionsRequest &request);
    CloudSearchUpdateScalingParametersResponse * updateScalingParameters(const CloudSearchUpdateScalingParametersRequest &request);
    CloudSearchUpdateServiceAccessPoliciesResponse * updateServiceAccessPolicies(const CloudSearchUpdateServiceAccessPoliciesRequest &request);

private:
    Q_DECLARE_PRIVATE(CloudSearchClient)
    Q_DISABLE_COPY(CloudSearchClient)

};

QTAWS_END_NAMESPACE

#endif
