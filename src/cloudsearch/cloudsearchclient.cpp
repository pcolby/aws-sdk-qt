/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "cloudsearchclient.h"
#include "cloudsearchclient_p.h"

#include "core/awssignaturev4.h"
#include "buildsuggestersrequest.h"
#include "buildsuggestersresponse.h"
#include "createdomainrequest.h"
#include "createdomainresponse.h"
#include "defineanalysisschemerequest.h"
#include "defineanalysisschemeresponse.h"
#include "defineexpressionrequest.h"
#include "defineexpressionresponse.h"
#include "defineindexfieldrequest.h"
#include "defineindexfieldresponse.h"
#include "definesuggesterrequest.h"
#include "definesuggesterresponse.h"
#include "deleteanalysisschemerequest.h"
#include "deleteanalysisschemeresponse.h"
#include "deletedomainrequest.h"
#include "deletedomainresponse.h"
#include "deleteexpressionrequest.h"
#include "deleteexpressionresponse.h"
#include "deleteindexfieldrequest.h"
#include "deleteindexfieldresponse.h"
#include "deletesuggesterrequest.h"
#include "deletesuggesterresponse.h"
#include "describeanalysisschemesrequest.h"
#include "describeanalysisschemesresponse.h"
#include "describeavailabilityoptionsrequest.h"
#include "describeavailabilityoptionsresponse.h"
#include "describedomainsrequest.h"
#include "describedomainsresponse.h"
#include "describeexpressionsrequest.h"
#include "describeexpressionsresponse.h"
#include "describeindexfieldsrequest.h"
#include "describeindexfieldsresponse.h"
#include "describescalingparametersrequest.h"
#include "describescalingparametersresponse.h"
#include "describeserviceaccesspoliciesrequest.h"
#include "describeserviceaccesspoliciesresponse.h"
#include "describesuggestersrequest.h"
#include "describesuggestersresponse.h"
#include "indexdocumentsrequest.h"
#include "indexdocumentsresponse.h"
#include "listdomainnamesresponse.h"
#include "updateavailabilityoptionsrequest.h"
#include "updateavailabilityoptionsresponse.h"
#include "updatescalingparametersrequest.h"
#include "updatescalingparametersresponse.h"
#include "updateserviceaccesspoliciesrequest.h"
#include "updateserviceaccesspoliciesresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::CloudSearch
 * \brief The QtAws::CloudSearch contains stuff...
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace CloudSearch {

/*!
 * \class QtAws::CloudSearch::CloudSearchClient
 *
 * \brief The CloudSearchClient class provides access to the Amazon CloudSearch service.
 *
 * \ingroup CloudSearch
 *
 *  <fullname>Amazon CloudSearch Configuration Service</fullname>
 * 
 *  You use the Amazon CloudSearch configuration service to create, configure, and manage search domains. Configuration
 *  service requests are submitted using the AWS Query protocol. AWS Query requests are HTTP or HTTPS requests submitted via
 *  HTTP GET or POST with a query parameter named
 * 
 *  Action>
 * 
 *  The endpoint for configuration service requests is region-specific: cloudsearch.<i>region</i>.amazonaws.com. For
 *  example, cloudsearch.us-east-1.amazonaws.com. For a current list of supported regions and endpoints, see <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/rande.html#cloudsearch_region" target="_blank">Regions and
 */

/*!
 * \brief Constructs a CloudSearchClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
CloudSearchClient::CloudSearchClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new CloudSearchClientPrivate(this), parent)
{
    Q_D(CloudSearchClient);
    d->apiVersion = QStringLiteral("2013-01-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("cloudsearch");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon CloudSearch");
    d->serviceName = QStringLiteral("cloudsearch");
}

/*!
 * \overload CloudSearchClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \a  AwsEndpoint::getEndpoint()
 */
CloudSearchClient::CloudSearchClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new CloudSearchClientPrivate(this), parent)
{
    Q_D(CloudSearchClient);
    d->apiVersion = QStringLiteral("2013-01-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("cloudsearch");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon CloudSearch");
    d->serviceName = QStringLiteral("cloudsearch");
}

/*!
 * Indexes the search suggestions. For more information, see <a
 * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/getting-suggestions.html#configuring-suggesters">Configuring
 * Suggesters</a> in the <i>Amazon CloudSearch Developer
 *
 * @param  request Request to send to Amazon CloudSearch.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
BuildSuggestersResponse * CloudSearchClient::buildSuggesters(const BuildSuggestersRequest &request)
{
    return qobject_cast<BuildSuggestersResponse *>(send(request));
}

/*!
 * Creates a new search domain. For more information, see <a
 * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/creating-domains.html" target="_blank">Creating a
 * Search Domain</a> in the <i>Amazon CloudSearch Developer
 *
 * @param  request Request to send to Amazon CloudSearch.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateDomainResponse * CloudSearchClient::createDomain(const CreateDomainRequest &request)
{
    return qobject_cast<CreateDomainResponse *>(send(request));
}

/*!
 * Configures an analysis scheme that can be applied to a <code>text</code> or <code>text-array</code> field to define
 * language-specific text processing options. For more information, see <a
 * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-analysis-schemes.html"
 * target="_blank">Configuring Analysis Schemes</a> in the <i>Amazon CloudSearch Developer
 *
 * @param  request Request to send to Amazon CloudSearch.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DefineAnalysisSchemeResponse * CloudSearchClient::defineAnalysisScheme(const DefineAnalysisSchemeRequest &request)
{
    return qobject_cast<DefineAnalysisSchemeResponse *>(send(request));
}

/*!
 * Configures an <code><a>Expression</a></code> for the search domain. Used to create new expressions and modify existing
 * ones. If the expression exists, the new configuration replaces the old one. For more information, see <a
 * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-expressions.html"
 * target="_blank">Configuring Expressions</a> in the <i>Amazon CloudSearch Developer
 *
 * @param  request Request to send to Amazon CloudSearch.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DefineExpressionResponse * CloudSearchClient::defineExpression(const DefineExpressionRequest &request)
{
    return qobject_cast<DefineExpressionResponse *>(send(request));
}

/*!
 * Configures an <code><a>IndexField</a></code> for the search domain. Used to create new fields and modify existing ones.
 * You must specify the name of the domain you are configuring and an index field configuration. The index field
 * configuration specifies a unique name, the index field type, and the options you want to configure for the field. The
 * options you can specify depend on the <code><a>IndexFieldType</a></code>. If the field exists, the new configuration
 * replaces the old one. For more information, see <a
 * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-index-fields.html"
 * target="_blank">Configuring Index Fields</a> in the <i>Amazon CloudSearch Developer Guide</i>.
 *
 * @param  request Request to send to Amazon CloudSearch.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DefineIndexFieldResponse * CloudSearchClient::defineIndexField(const DefineIndexFieldRequest &request)
{
    return qobject_cast<DefineIndexFieldResponse *>(send(request));
}

/*!
 * Configures a suggester for a domain. A suggester enables you to display possible matches before users finish typing
 * their queries. When you configure a suggester, you must specify the name of the text field you want to search for
 * possible matches and a unique name for the suggester. For more information, see <a
 * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/getting-suggestions.html" target="_blank">Getting
 * Search Suggestions</a> in the <i>Amazon CloudSearch Developer
 *
 * @param  request Request to send to Amazon CloudSearch.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DefineSuggesterResponse * CloudSearchClient::defineSuggester(const DefineSuggesterRequest &request)
{
    return qobject_cast<DefineSuggesterResponse *>(send(request));
}

/*!
 * Deletes an analysis scheme. For more information, see <a
 * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-analysis-schemes.html"
 * target="_blank">Configuring Analysis Schemes</a> in the <i>Amazon CloudSearch Developer Guide</i>.
 *
 * @param  request Request to send to Amazon CloudSearch.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteAnalysisSchemeResponse * CloudSearchClient::deleteAnalysisScheme(const DeleteAnalysisSchemeRequest &request)
{
    return qobject_cast<DeleteAnalysisSchemeResponse *>(send(request));
}

/*!
 * Permanently deletes a search domain and all of its data. Once a domain has been deleted, it cannot be recovered. For
 * more information, see <a href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/deleting-domains.html"
 * target="_blank">Deleting a Search Domain</a> in the <i>Amazon CloudSearch Developer Guide</i>.
 *
 * @param  request Request to send to Amazon CloudSearch.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteDomainResponse * CloudSearchClient::deleteDomain(const DeleteDomainRequest &request)
{
    return qobject_cast<DeleteDomainResponse *>(send(request));
}

/*!
 * Removes an <code><a>Expression</a></code> from the search domain. For more information, see <a
 * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-expressions.html"
 * target="_blank">Configuring Expressions</a> in the <i>Amazon CloudSearch Developer
 *
 * @param  request Request to send to Amazon CloudSearch.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteExpressionResponse * CloudSearchClient::deleteExpression(const DeleteExpressionRequest &request)
{
    return qobject_cast<DeleteExpressionResponse *>(send(request));
}

/*!
 * Removes an <code><a>IndexField</a></code> from the search domain. For more information, see <a
 * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-index-fields.html"
 * target="_blank">Configuring Index Fields</a> in the <i>Amazon CloudSearch Developer
 *
 * @param  request Request to send to Amazon CloudSearch.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteIndexFieldResponse * CloudSearchClient::deleteIndexField(const DeleteIndexFieldRequest &request)
{
    return qobject_cast<DeleteIndexFieldResponse *>(send(request));
}

/*!
 * Deletes a suggester. For more information, see <a
 * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/getting-suggestions.html" target="_blank">Getting
 * Search Suggestions</a> in the <i>Amazon CloudSearch Developer
 *
 * @param  request Request to send to Amazon CloudSearch.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteSuggesterResponse * CloudSearchClient::deleteSuggester(const DeleteSuggesterRequest &request)
{
    return qobject_cast<DeleteSuggesterResponse *>(send(request));
}

/*!
 * Gets the analysis schemes configured for a domain. An analysis scheme defines language-specific text processing options
 * for a <code>text</code> field. Can be limited to specific analysis schemes by name. By default, shows all analysis
 * schemes and includes any pending changes to the configuration. Set the <code>Deployed</code> option to <code>true</code>
 * to show the active configuration and exclude pending changes. For more information, see <a
 * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-analysis-schemes.html"
 * target="_blank">Configuring Analysis Schemes</a> in the <i>Amazon CloudSearch Developer
 *
 * @param  request Request to send to Amazon CloudSearch.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeAnalysisSchemesResponse * CloudSearchClient::describeAnalysisSchemes(const DescribeAnalysisSchemesRequest &request)
{
    return qobject_cast<DescribeAnalysisSchemesResponse *>(send(request));
}

/*!
 * Gets the availability options configured for a domain. By default, shows the configuration with any pending changes. Set
 * the <code>Deployed</code> option to <code>true</code> to show the active configuration and exclude pending changes. For
 * more information, see <a
 * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-availability-options.html"
 * target="_blank">Configuring Availability Options</a> in the <i>Amazon CloudSearch Developer
 *
 * @param  request Request to send to Amazon CloudSearch.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeAvailabilityOptionsResponse * CloudSearchClient::describeAvailabilityOptions(const DescribeAvailabilityOptionsRequest &request)
{
    return qobject_cast<DescribeAvailabilityOptionsResponse *>(send(request));
}

/*!
 * Gets information about the search domains owned by this account. Can be limited to specific domains. Shows all domains
 * by default. To get the number of searchable documents in a domain, use the console or submit a <code>matchall</code>
 * request to your domain's search endpoint: <code>q=matchall&amp;amp;q.parser=structured&amp;amp;size=0</code>. For more
 * information, see <a href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/getting-domain-info.html"
 * target="_blank">Getting Information about a Search Domain</a> in the <i>Amazon CloudSearch Developer
 *
 * @param  request Request to send to Amazon CloudSearch.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeDomainsResponse * CloudSearchClient::describeDomains(const DescribeDomainsRequest &request)
{
    return qobject_cast<DescribeDomainsResponse *>(send(request));
}

/*!
 * Gets the expressions configured for the search domain. Can be limited to specific expressions by name. By default, shows
 * all expressions and includes any pending changes to the configuration. Set the <code>Deployed</code> option to
 * <code>true</code> to show the active configuration and exclude pending changes. For more information, see <a
 * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-expressions.html"
 * target="_blank">Configuring Expressions</a> in the <i>Amazon CloudSearch Developer
 *
 * @param  request Request to send to Amazon CloudSearch.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeExpressionsResponse * CloudSearchClient::describeExpressions(const DescribeExpressionsRequest &request)
{
    return qobject_cast<DescribeExpressionsResponse *>(send(request));
}

/*!
 * Gets information about the index fields configured for the search domain. Can be limited to specific fields by name. By
 * default, shows all fields and includes any pending changes to the configuration. Set the <code>Deployed</code> option to
 * <code>true</code> to show the active configuration and exclude pending changes. For more information, see <a
 * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/getting-domain-info.html" target="_blank">Getting
 * Domain Information</a> in the <i>Amazon CloudSearch Developer
 *
 * @param  request Request to send to Amazon CloudSearch.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeIndexFieldsResponse * CloudSearchClient::describeIndexFields(const DescribeIndexFieldsRequest &request)
{
    return qobject_cast<DescribeIndexFieldsResponse *>(send(request));
}

/*!
 * Gets the scaling parameters configured for a domain. A domain's scaling parameters specify the desired search instance
 * type and replication count. For more information, see <a
 * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-scaling-options.html"
 * target="_blank">Configuring Scaling Options</a> in the <i>Amazon CloudSearch Developer
 *
 * @param  request Request to send to Amazon CloudSearch.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeScalingParametersResponse * CloudSearchClient::describeScalingParameters(const DescribeScalingParametersRequest &request)
{
    return qobject_cast<DescribeScalingParametersResponse *>(send(request));
}

/*!
 * Gets information about the access policies that control access to the domain's document and search endpoints. By
 * default, shows the configuration with any pending changes. Set the <code>Deployed</code> option to <code>true</code> to
 * show the active configuration and exclude pending changes. For more information, see <a
 * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-access.html" target="_blank">Configuring
 * Access for a Search Domain</a> in the <i>Amazon CloudSearch Developer
 *
 * @param  request Request to send to Amazon CloudSearch.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeServiceAccessPoliciesResponse * CloudSearchClient::describeServiceAccessPolicies(const DescribeServiceAccessPoliciesRequest &request)
{
    return qobject_cast<DescribeServiceAccessPoliciesResponse *>(send(request));
}

/*!
 * Gets the suggesters configured for a domain. A suggester enables you to display possible matches before users finish
 * typing their queries. Can be limited to specific suggesters by name. By default, shows all suggesters and includes any
 * pending changes to the configuration. Set the <code>Deployed</code> option to <code>true</code> to show the active
 * configuration and exclude pending changes. For more information, see <a
 * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/getting-suggestions.html" target="_blank">Getting
 * Search Suggestions</a> in the <i>Amazon CloudSearch Developer
 *
 * @param  request Request to send to Amazon CloudSearch.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeSuggestersResponse * CloudSearchClient::describeSuggesters(const DescribeSuggestersRequest &request)
{
    return qobject_cast<DescribeSuggestersResponse *>(send(request));
}

/*!
 * Tells the search domain to start indexing its documents using the latest indexing options. This operation must be
 * invoked to activate options whose <a>OptionStatus</a> is
 *
 * @param  request Request to send to Amazon CloudSearch.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
IndexDocumentsResponse * CloudSearchClient::indexDocuments(const IndexDocumentsRequest &request)
{
    return qobject_cast<IndexDocumentsResponse *>(send(request));
}

/*!
 * Lists all search domains owned by an
 *
 * @param  request Request to send to Amazon CloudSearch.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListDomainNamesResponse * CloudSearchClient::listDomainNames()
{
    return qobject_cast<ListDomainNamesResponse *>(send(request));
}

/*!
 * Configures the availability options for a domain. Enabling the Multi-AZ option expands an Amazon CloudSearch domain to
 * an additional Availability Zone in the same Region to increase fault tolerance in the event of a service disruption.
 * Changes to the Multi-AZ option can take about half an hour to become active. For more information, see <a
 * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-availability-options.html"
 * target="_blank">Configuring Availability Options</a> in the <i>Amazon CloudSearch Developer
 *
 * @param  request Request to send to Amazon CloudSearch.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateAvailabilityOptionsResponse * CloudSearchClient::updateAvailabilityOptions(const UpdateAvailabilityOptionsRequest &request)
{
    return qobject_cast<UpdateAvailabilityOptionsResponse *>(send(request));
}

/*!
 * Configures scaling parameters for a domain. A domain's scaling parameters specify the desired search instance type and
 * replication count. Amazon CloudSearch will still automatically scale your domain based on the volume of data and
 * traffic, but not below the desired instance type and replication count. If the Multi-AZ option is enabled, these values
 * control the resources used per Availability Zone. For more information, see <a
 * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-scaling-options.html"
 * target="_blank">Configuring Scaling Options</a> in the <i>Amazon CloudSearch Developer Guide</i>.
 *
 * @param  request Request to send to Amazon CloudSearch.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateScalingParametersResponse * CloudSearchClient::updateScalingParameters(const UpdateScalingParametersRequest &request)
{
    return qobject_cast<UpdateScalingParametersResponse *>(send(request));
}

/*!
 * Configures the access rules that control access to the domain's document and search endpoints. For more information, see
 * <a href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-access.html" target="_blank">
 * Configuring Access for an Amazon CloudSearch
 *
 * @param  request Request to send to Amazon CloudSearch.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateServiceAccessPoliciesResponse * CloudSearchClient::updateServiceAccessPolicies(const UpdateServiceAccessPoliciesRequest &request)
{
    return qobject_cast<UpdateServiceAccessPoliciesResponse *>(send(request));
}

/*!
 * @internal
 *
 * @class  CloudSearchClientPrivate
 *
 * @brief  Private implementation for CloudSearchClient.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CloudSearchClientPrivate object.
 *
 * @param  q  Pointer to this object's public CloudSearchClient instance.
 */
CloudSearchClientPrivate::CloudSearchClientPrivate(CloudSearchClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace CloudSearch
} // namespace QtAws
