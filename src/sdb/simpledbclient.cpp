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

#include "simpledbclient.h"
#include "simpledbclient_p.h"

#include "core/awssignaturev4.h"
#include "batchdeleteattributesrequest.h"
#include "batchdeleteattributesresponse.h"
#include "batchputattributesrequest.h"
#include "batchputattributesresponse.h"
#include "createdomainrequest.h"
#include "createdomainresponse.h"
#include "deleteattributesrequest.h"
#include "deleteattributesresponse.h"
#include "deletedomainrequest.h"
#include "deletedomainresponse.h"
#include "domainmetadatarequest.h"
#include "domainmetadataresponse.h"
#include "getattributesrequest.h"
#include "getattributesresponse.h"
#include "listdomainsrequest.h"
#include "listdomainsresponse.h"
#include "putattributesrequest.h"
#include "putattributesresponse.h"
#include "selectrequest.h"
#include "selectresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::SimpleDB
 * \brief The QtAws::SimpleDB contains stuff...
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace SimpleDB {

/*!
 * \class QtAws::SimpleDB::SimpleDBClient
 *
 * \brief The SimpleDBClient class provides access the Amazon SimpleDB service.
 *
 * \ingroup SimpleDB
 *
 *  Amazon SimpleDB is a web service providing the core database functions of data indexing and querying in the cloud. By
 *  offloading the time and effort associated with building and operating a web-scale database, SimpleDB provides developers
 *  the freedom to focus on application development.
 * 
 *  A traditional, clustered relational database requires a sizable upfront capital outlay, is complex to design, and often
 *  requires extensive and repetitive database administration. Amazon SimpleDB is dramatically simpler, requiring no schema,
 *  automatically indexing your data and providing a simple API for storage and access. This approach eliminates the
 *  administrative burden of data modeling, index maintenance, and performance tuning. Developers gain access to this
 *  functionality within Amazon's proven computing environment, are able to scale instantly, and pay only for what they use.
 * 
 *  </p
 * 
 *  Visit <a href="http://aws.amazon.com/simpledb/">http://aws.amazon.com/simpledb/</a> for more information.
 */

/*!
 * \brief Constructs a SimpleDBClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
SimpleDBClient::SimpleDBClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new SimpleDBClientPrivate(this), parent)
{
    Q_D(SimpleDBClient);
    d->apiVersion = QStringLiteral("2009-04-15");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("sdb");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon SimpleDB");
    d->serviceName = QStringLiteral("sdb");
}

/*!
 * \overload SimpleDBClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \a  AwsEndpoint::getEndpoint()
 */
SimpleDBClient::SimpleDBClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new SimpleDBClientPrivate(this), parent)
{
    Q_D(SimpleDBClient);
    d->apiVersion = QStringLiteral("2009-04-15");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("sdb");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon SimpleDB");
    d->serviceName = QStringLiteral("sdb");
}

/*!
 * Performs multiple DeleteAttributes operations in a single call, which reduces round trips and latencies. This enables
 * Amazon SimpleDB to optimize requests, which generally yields better throughput.
 *
 * </p
 *
 * The following limitations are enforced for this operation: <ul> <li>1 MB request size</li> <li>25 item limit per
 * BatchDeleteAttributes operation</li> </ul>
 *
 * @param  request Request to send to Amazon SimpleDB.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
BatchDeleteAttributesResponse * SimpleDBClient::batchDeleteAttributes(const BatchDeleteAttributesRequest &request)
{
    return qobject_cast<BatchDeleteAttributesResponse *>(send(request));
}

/*!
 * The <code>BatchPutAttributes</code> operation creates or replaces attributes within one or more items. By using this
 * operation, the client can perform multiple <a>PutAttribute</a> operation with a single call. This helps yield savings in
 * round trips and latencies, enabling Amazon SimpleDB to optimize requests and generally produce better throughput.
 *
 * </p
 *
 * The client may specify the item name with the <code>Item.X.ItemName</code> parameter. The client may specify new
 * attributes using a combination of the <code>Item.X.Attribute.Y.Name</code> and <code>Item.X.Attribute.Y.Value</code>
 * parameters. The client may specify the first attribute for the first item using the parameters
 * <code>Item.0.Attribute.0.Name</code> and <code>Item.0.Attribute.0.Value</code>, and for the second attribute for the
 * first item by the parameters <code>Item.0.Attribute.1.Name</code> and <code>Item.0.Attribute.1.Value</code>, and so on.
 *
 * </p
 *
 * Attributes are uniquely identified within an item by their name/value combination. For example, a single item can have
 * the attributes <code>{ "first_name", "first_value" }</code> and <code>{ "first_name", "second_value" }</code>. However,
 * it cannot have two attribute instances where both the <code>Item.X.Attribute.Y.Name</code> and
 * <code>Item.X.Attribute.Y.Value</code> are the same.
 *
 * </p
 *
 * Optionally, the requester can supply the <code>Replace</code> parameter for each individual value. Setting this value to
 * <code>true</code> will cause the new attribute values to replace the existing attribute values. For example, if an item
 * <code>I</code> has the attributes <code>{ 'a', '1' }, { 'b', '2'}</code> and <code>{ 'b', '3' }</code> and the requester
 * does a BatchPutAttributes of <code>{'I', 'b', '4' }</code> with the Replace parameter set to true, the final attributes
 * of the item will be <code>{ 'a', '1' }</code> and <code>{ 'b', '4' }</code>, replacing the previous values of the 'b'
 * attribute with the new value.
 *
 * </p <b> This operation is vulnerable to exceeding the maximum URL size when making a REST request using the HTTP GET
 * method. This operation does not support conditions using <code>Expected.X.Name</code>, <code>Expected.X.Value</code>, or
 * <code>Expected.X.Exists</code>. </b>
 *
 * You can execute multiple <code>BatchPutAttributes</code> operations and other operations in parallel. However, large
 * numbers of concurrent <code>BatchPutAttributes</code> calls can result in Service Unavailable (503) responses.
 *
 * </p
 *
 * The following limitations are enforced for this operation: <ul> <li>256 attribute name-value pairs per item</li> <li>1
 * MB request size</li> <li>1 billion attributes per domain</li> <li>10 GB of total user data storage per domain</li>
 * <li>25 item limit per <code>BatchPutAttributes</code> operation</li> </ul>
 *
 * @param  request Request to send to Amazon SimpleDB.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
BatchPutAttributesResponse * SimpleDBClient::batchPutAttributes(const BatchPutAttributesRequest &request)
{
    return qobject_cast<BatchPutAttributesResponse *>(send(request));
}

/*!
 * The <code>CreateDomain</code> operation creates a new domain. The domain name should be unique among the domains
 * associated with the Access Key ID provided in the request. The <code>CreateDomain</code> operation may take 10 or more
 * seconds to complete.
 *
 * </p
 *
 * The client can create up to 100 domains per account.
 *
 * </p
 *
 * If the client requires additional domains, go to <a href="http://aws.amazon.com/contact-us/simpledb-limit-request/">
 * http://aws.amazon.com/contact-us/simpledb-limit-request/</a>.
 *
 * @param  request Request to send to Amazon SimpleDB.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateDomainResponse * SimpleDBClient::createDomain(const CreateDomainRequest &request)
{
    return qobject_cast<CreateDomainResponse *>(send(request));
}

/*!
 * Deletes one or more attributes associated with an item. If all attributes of the item are deleted, the item is deleted.
 *
 * </p
 *
 * <code>DeleteAttributes</code> is an idempotent operation; running it multiple times on the same item or attribute does
 * not result in an error response.
 *
 * </p
 *
 * Because Amazon SimpleDB makes multiple copies of item data and uses an eventual consistency update model, performing a
 * <a>GetAttributes</a> or <a>Select</a> operation (read) immediately after a <code>DeleteAttributes</code> or
 * <a>PutAttributes</a> operation (write) might not return updated item data.
 *
 * @param  request Request to send to Amazon SimpleDB.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteAttributesResponse * SimpleDBClient::deleteAttributes(const DeleteAttributesRequest &request)
{
    return qobject_cast<DeleteAttributesResponse *>(send(request));
}

/*!
 * The <code>DeleteDomain</code> operation deletes a domain. Any items (and their attributes) in the domain are deleted as
 * well. The <code>DeleteDomain</code> operation might take 10 or more seconds to complete.
 *
 * @param  request Request to send to Amazon SimpleDB.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteDomainResponse * SimpleDBClient::deleteDomain(const DeleteDomainRequest &request)
{
    return qobject_cast<DeleteDomainResponse *>(send(request));
}

/*!
 * Returns information about the domain, including when the domain was created, the number of items and attributes in the
 * domain, and the size of the attribute names and values.
 *
 * @param  request Request to send to Amazon SimpleDB.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DomainMetadataResponse * SimpleDBClient::domainMetadata(const DomainMetadataRequest &request)
{
    return qobject_cast<DomainMetadataResponse *>(send(request));
}

/*!
 * Returns all of the attributes associated with the specified item. Optionally, the attributes returned can be limited to
 * one or more attributes by specifying an attribute name parameter.
 *
 * </p
 *
 * If the item does not exist on the replica that was accessed for this operation, an empty set is returned. The system
 * does not return an error as it cannot guarantee the item does not exist on other replicas.
 *
 * @param  request Request to send to Amazon SimpleDB.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetAttributesResponse * SimpleDBClient::getAttributes(const GetAttributesRequest &request)
{
    return qobject_cast<GetAttributesResponse *>(send(request));
}

/*!
 * The <code>ListDomains</code> operation lists all domains associated with the Access Key ID. It returns domain names up
 * to the limit set by <a href="#MaxNumberOfDomains">MaxNumberOfDomains</a>. A <a href="#NextToken">NextToken</a> is
 * returned if there are more than <code>MaxNumberOfDomains</code> domains. Calling <code>ListDomains</code> successive
 * times with the <code>NextToken</code> provided by the operation returns up to <code>MaxNumberOfDomains</code> more
 * domain names with each successive operation call.
 *
 * @param  request Request to send to Amazon SimpleDB.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListDomainsResponse * SimpleDBClient::listDomains(const ListDomainsRequest &request)
{
    return qobject_cast<ListDomainsResponse *>(send(request));
}

/*!
 * The PutAttributes operation creates or replaces attributes in an item. The client may specify new attributes using a
 * combination of the <code>Attribute.X.Name</code> and <code>Attribute.X.Value</code> parameters. The client specifies the
 * first attribute by the parameters <code>Attribute.0.Name</code> and <code>Attribute.0.Value</code>, the second attribute
 * by the parameters <code>Attribute.1.Name</code> and <code>Attribute.1.Value</code>, and so on.
 *
 * </p
 *
 * Attributes are uniquely identified in an item by their name/value combination. For example, a single item can have the
 * attributes <code>{ "first_name", "first_value" }</code> and <code>{ "first_name", second_value" }</code>. However, it
 * cannot have two attribute instances where both the <code>Attribute.X.Name</code> and <code>Attribute.X.Value</code> are
 * the same.
 *
 * </p
 *
 * Optionally, the requestor can supply the <code>Replace</code> parameter for each individual attribute. Setting this
 * value to <code>true</code> causes the new attribute value to replace the existing attribute value(s). For example, if an
 * item has the attributes <code>{ 'a', '1' }</code>, <code>{ 'b', '2'}</code> and <code>{ 'b', '3' }</code> and the
 * requestor calls <code>PutAttributes</code> using the attributes <code>{ 'b', '4' }</code> with the <code>Replace</code>
 * parameter set to true, the final attributes of the item are changed to <code>{ 'a', '1' }</code> and <code>{ 'b', '4'
 * }</code>, which replaces the previous values of the 'b' attribute with the new value.
 *
 * </p
 *
 * You cannot specify an empty string as an attribute name.
 *
 * </p
 *
 * Because Amazon SimpleDB makes multiple copies of client data and uses an eventual consistency update model, an immediate
 * <a>GetAttributes</a> or <a>Select</a> operation (read) immediately after a <a>PutAttributes</a> or
 * <a>DeleteAttributes</a> operation (write) might not return the updated data.
 *
 * </p
 *
 * The following limitations are enforced for this operation: <ul> <li>256 total attribute name-value pairs per item</li>
 * <li>One billion attributes per domain</li> <li>10 GB of total user data storage per domain</li> </ul>
 *
 * @param  request Request to send to Amazon SimpleDB.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutAttributesResponse * SimpleDBClient::putAttributes(const PutAttributesRequest &request)
{
    return qobject_cast<PutAttributesResponse *>(send(request));
}

/*!
 * The <code>Select</code> operation returns a set of attributes for <code>ItemNames</code> that match the select
 * expression. <code>Select</code> is similar to the standard SQL SELECT statement.
 *
 * </p
 *
 * The total size of the response cannot exceed 1 MB in total size. Amazon SimpleDB automatically adjusts the number of
 * items returned per page to enforce this limit. For example, if the client asks to retrieve 2500 items, but each
 * individual item is 10 kB in size, the system returns 100 items and an appropriate <code>NextToken</code> so the client
 * can access the next page of results.
 *
 * </p
 *
 * For information on how to construct select expressions, see Using Select to Create Amazon SimpleDB Queries in the
 * Developer Guide.
 *
 * @param  request Request to send to Amazon SimpleDB.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SelectResponse * SimpleDBClient::select(const SelectRequest &request)
{
    return qobject_cast<SelectResponse *>(send(request));
}

/*!
 * @internal
 *
 * @class  SimpleDBClientPrivate
 *
 * @brief  Private implementation for SimpleDBClient.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new SimpleDBClientPrivate object.
 *
 * @param  q  Pointer to this object's public SimpleDBClient instance.
 */
SimpleDBClientPrivate::SimpleDBClientPrivate(SimpleDBClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV2();
}

} // namespace SimpleDB
} // namespace QtAws
