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

#include "macieclient.h"
#include "macieclient_p.h"

#include "core/awssignaturev4.h"
#include "associatememberaccountrequest.h"
#include "associatememberaccountresponse.h"
#include "associates3resourcesrequest.h"
#include "associates3resourcesresponse.h"
#include "disassociatememberaccountrequest.h"
#include "disassociatememberaccountresponse.h"
#include "disassociates3resourcesrequest.h"
#include "disassociates3resourcesresponse.h"
#include "listmemberaccountsrequest.h"
#include "listmemberaccountsresponse.h"
#include "lists3resourcesrequest.h"
#include "lists3resourcesresponse.h"
#include "updates3resourcesrequest.h"
#include "updates3resourcesresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Macie
 * \brief Contains classess for accessing Amazon Macie.
 *
 * \inmodule QtAwsMacie
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Macie {

/*!
 * \class QtAws::Macie::MacieClient
 * \brief The MacieClient class provides access to the Amazon Macie service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsMacie
 *
 *  <fullname>Amazon Macie Classic</fullname>
 * 
 *  Amazon Macie Classic is a security service that uses machine learning to automatically discover, classify, and protect
 *  sensitive data in AWS. Macie Classic recognizes sensitive data such as personally identifiable information (PII) or
 *  intellectual property, and provides you with dashboards and alerts that give visibility into how this data is being
 *  accessed or moved. For more information, see the <a
 *  href="https://docs.aws.amazon.com/macie/latest/userguide/what-is-macie.html">Amazon Macie Classic User Guide</a>.
 */

/*!
 * \brief Constructs a MacieClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
MacieClient::MacieClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new MacieClientPrivate(this), parent)
{
    Q_D(MacieClient);
    d->apiVersion = QStringLiteral("2017-12-19");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("macie");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Macie");
    d->serviceName = QStringLiteral("macie");
}

/*!
 * \overload MacieClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
MacieClient::MacieClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new MacieClientPrivate(this), parent)
{
    Q_D(MacieClient);
    d->apiVersion = QStringLiteral("2017-12-19");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("macie");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Macie");
    d->serviceName = QStringLiteral("macie");
}

/*!
 * Sends \a request to the MacieClient service, and returns a pointer to an
 * AssociateMemberAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a specified AWS account with Amazon Macie Classic as a member
 */
AssociateMemberAccountResponse * MacieClient::associateMemberAccount(const AssociateMemberAccountRequest &request)
{
    return qobject_cast<AssociateMemberAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the MacieClient service, and returns a pointer to an
 * AssociateS3ResourcesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates specified S3 resources with Amazon Macie Classic for monitoring and data classification. If memberAccountId
 * isn't specified, the action associates specified S3 resources with Macie Classic for the current Macie Classic
 * administrator account. If memberAccountId is specified, the action associates specified S3 resources with Macie Classic
 * for the specified member account.
 */
AssociateS3ResourcesResponse * MacieClient::associateS3Resources(const AssociateS3ResourcesRequest &request)
{
    return qobject_cast<AssociateS3ResourcesResponse *>(send(request));
}

/*!
 * Sends \a request to the MacieClient service, and returns a pointer to an
 * DisassociateMemberAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified member account from Amazon Macie
 */
DisassociateMemberAccountResponse * MacieClient::disassociateMemberAccount(const DisassociateMemberAccountRequest &request)
{
    return qobject_cast<DisassociateMemberAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the MacieClient service, and returns a pointer to an
 * DisassociateS3ResourcesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes specified S3 resources from being monitored by Amazon Macie Classic. If memberAccountId isn't specified, the
 * action removes specified S3 resources from Macie Classic for the current Macie Classic administrator account. If
 * memberAccountId is specified, the action removes specified S3 resources from Macie Classic for the specified member
 */
DisassociateS3ResourcesResponse * MacieClient::disassociateS3Resources(const DisassociateS3ResourcesRequest &request)
{
    return qobject_cast<DisassociateS3ResourcesResponse *>(send(request));
}

/*!
 * Sends \a request to the MacieClient service, and returns a pointer to an
 * ListMemberAccountsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all Amazon Macie Classic member accounts for the current Macie Classic administrator
 */
ListMemberAccountsResponse * MacieClient::listMemberAccounts(const ListMemberAccountsRequest &request)
{
    return qobject_cast<ListMemberAccountsResponse *>(send(request));
}

/*!
 * Sends \a request to the MacieClient service, and returns a pointer to an
 * ListS3ResourcesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all the S3 resources associated with Amazon Macie Classic. If memberAccountId isn't specified, the action lists
 * the S3 resources associated with Macie Classic for the current Macie Classic administrator account. If memberAccountId
 * is specified, the action lists the S3 resources associated with Macie Classic for the specified member account.
 */
ListS3ResourcesResponse * MacieClient::listS3Resources(const ListS3ResourcesRequest &request)
{
    return qobject_cast<ListS3ResourcesResponse *>(send(request));
}

/*!
 * Sends \a request to the MacieClient service, and returns a pointer to an
 * UpdateS3ResourcesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the classification types for the specified S3 resources. If memberAccountId isn't specified, the action updates
 * the classification types of the S3 resources associated with Amazon Macie Classic for the current Macie Classic
 * administrator account. If memberAccountId is specified, the action updates the classification types of the S3 resources
 * associated with Macie Classic for the specified member account.
 */
UpdateS3ResourcesResponse * MacieClient::updateS3Resources(const UpdateS3ResourcesRequest &request)
{
    return qobject_cast<UpdateS3ResourcesResponse *>(send(request));
}

/*!
 * \class QtAws::Macie::MacieClientPrivate
 * \brief The MacieClientPrivate class provides private implementation for MacieClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsMacie
 */

/*!
 * Constructs a MacieClientPrivate object with public implementation \a q.
 */
MacieClientPrivate::MacieClientPrivate(MacieClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Macie
} // namespace QtAws
