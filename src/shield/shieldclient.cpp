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

#include "shieldclient.h"
#include "shieldclient_p.h"

#include "core/awssignaturev4.h"
#include "createprotectionrequest.h"
#include "createprotectionresponse.h"
#include "createsubscriptionrequest.h"
#include "createsubscriptionresponse.h"
#include "deleteprotectionrequest.h"
#include "deleteprotectionresponse.h"
#include "deletesubscriptionrequest.h"
#include "deletesubscriptionresponse.h"
#include "describeattackrequest.h"
#include "describeattackresponse.h"
#include "describeprotectionrequest.h"
#include "describeprotectionresponse.h"
#include "describesubscriptionrequest.h"
#include "describesubscriptionresponse.h"
#include "getsubscriptionstaterequest.h"
#include "getsubscriptionstateresponse.h"
#include "listattacksrequest.h"
#include "listattacksresponse.h"
#include "listprotectionsrequest.h"
#include "listprotectionsresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Shield
 * \brief The QtAws::Shield contains stuff...
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::ShieldClient
 *
 * \brief The ShieldClient class provides access to the AWS Shield service.
 *
 * \ingroup Shield
 *
 *  <fullname>AWS Shield Advanced</fullname>
 * 
 *  This is the <i>AWS Shield Advanced API Reference</i>. This guide is for developers who need detailed information about
 *  the AWS Shield Advanced API actions, data types, and errors. For detailed information about AWS WAF and AWS Shield
 *  Advanced features and an overview of how to use the AWS WAF and AWS Shield Advanced APIs, see the <a
 *  href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF and AWS Shield Developer
 */

/*!
 * \brief Constructs a ShieldClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
ShieldClient::ShieldClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ShieldClientPrivate(this), parent)
{
    Q_D(ShieldClient);
    d->apiVersion = QStringLiteral("2016-06-02");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("shield");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Shield");
    d->serviceName = QStringLiteral("shield");
}

/*!
 * \overload ShieldClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \a  AwsEndpoint::getEndpoint()
 */
ShieldClient::ShieldClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ShieldClientPrivate(this), parent)
{
    Q_D(ShieldClient);
    d->apiVersion = QStringLiteral("2016-06-02");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("shield");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Shield");
    d->serviceName = QStringLiteral("shield");
}

/*!
 * Enables AWS Shield Advanced for a specific AWS resource. The resource can be an Amazon CloudFront distribution, Elastic
 * Load Balancing load balancer, Elastic IP Address, or an Amazon Route 53 hosted
 *
 * @param  request Request to send to AWS Shield.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateProtectionResponse * ShieldClient::createProtection(const CreateProtectionRequest &request)
{
    return qobject_cast<CreateProtectionResponse *>(send(request));
}

/*!
 * Activates AWS Shield Advanced for an
 *
 * @param  request Request to send to AWS Shield.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateSubscriptionResponse * ShieldClient::createSubscription(const CreateSubscriptionRequest &request)
{
    return qobject_cast<CreateSubscriptionResponse *>(send(request));
}

/*!
 * Deletes an AWS Shield Advanced
 *
 * @param  request Request to send to AWS Shield.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteProtectionResponse * ShieldClient::deleteProtection(const DeleteProtectionRequest &request)
{
    return qobject_cast<DeleteProtectionResponse *>(send(request));
}

/*!
 * Removes AWS Shield Advanced from an account. AWS Shield Advanced requires a 1-year subscription commitment. You cannot
 * delete a subscription prior to the completion of that commitment.
 *
 * @param  request Request to send to AWS Shield.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteSubscriptionResponse * ShieldClient::deleteSubscription(const DeleteSubscriptionRequest &request)
{
    return qobject_cast<DeleteSubscriptionResponse *>(send(request));
}

/*!
 * Describes the details of a DDoS attack.
 *
 * @param  request Request to send to AWS Shield.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeAttackResponse * ShieldClient::describeAttack(const DescribeAttackRequest &request)
{
    return qobject_cast<DescribeAttackResponse *>(send(request));
}

/*!
 * Lists the details of a <a>Protection</a>
 *
 * @param  request Request to send to AWS Shield.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeProtectionResponse * ShieldClient::describeProtection(const DescribeProtectionRequest &request)
{
    return qobject_cast<DescribeProtectionResponse *>(send(request));
}

/*!
 * Provides details about the AWS Shield Advanced subscription for an
 *
 * @param  request Request to send to AWS Shield.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeSubscriptionResponse * ShieldClient::describeSubscription(const DescribeSubscriptionRequest &request)
{
    return qobject_cast<DescribeSubscriptionResponse *>(send(request));
}

/*!
 * Returns the <code>SubscriptionState</code>, either <code>Active</code> or
 *
 * @param  request Request to send to AWS Shield.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetSubscriptionStateResponse * ShieldClient::getSubscriptionState(const GetSubscriptionStateRequest &request)
{
    return qobject_cast<GetSubscriptionStateResponse *>(send(request));
}

/*!
 * Returns all ongoing DDoS attacks or all DDoS attacks during a specified time
 *
 * @param  request Request to send to AWS Shield.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListAttacksResponse * ShieldClient::listAttacks(const ListAttacksRequest &request)
{
    return qobject_cast<ListAttacksResponse *>(send(request));
}

/*!
 * Lists all <a>Protection</a> objects for the
 *
 * @param  request Request to send to AWS Shield.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListProtectionsResponse * ShieldClient::listProtections(const ListProtectionsRequest &request)
{
    return qobject_cast<ListProtectionsResponse *>(send(request));
}

/*!
 * @internal
 *
 * @class  ShieldClientPrivate
 *
 * @brief  Private implementation for ShieldClient.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ShieldClientPrivate object.
 *
 * @param  q  Pointer to this object's public ShieldClient instance.
 */
ShieldClientPrivate::ShieldClientPrivate(ShieldClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Shield
} // namespace QtAws
