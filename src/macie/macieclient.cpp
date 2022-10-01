// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon Macie Classic has been discontinued and is no longer
 * 
 *  available>
 * 
 *  A new Amazon Macie is now available with significant design improvements and additional features, at a lower price and
 *  in most Amazon Web Services Regions. We encourage you to take advantage of the new and improved features, and benefit
 *  from the reduced cost. To learn about features and pricing for the new Macie, see <a
 *  href="http://aws.amazon.com/macie/">Amazon Macie</a>. To learn how to use the new Macie, see the <a
 *  href="https://docs.aws.amazon.com/macie/latest/user/what-is-macie.html">Amazon Macie User
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
 * (Discontinued) Associates a specified Amazon Web Services account with Amazon Macie Classic as a member
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
 * (Discontinued) Associates specified S3 resources with Amazon Macie Classic for monitoring and data classification. If
 * <code>memberAccountId</code> isn't specified, the action associates specified S3 resources with Macie Classic for the
 * current Macie Classic administrator account. If <code>memberAccountId</code> is specified, the action associates
 * specified S3 resources with Macie Classic for the specified member
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
 * (Discontinued) Removes the specified member account from Amazon Macie
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
 * (Discontinued) Removes specified S3 resources from being monitored by Amazon Macie Classic. If
 * <code>memberAccountId</code> isn't specified, the action removes specified S3 resources from Macie Classic for the
 * current Macie Classic administrator account. If <code>memberAccountId</code> is specified, the action removes specified
 * S3 resources from Macie Classic for the specified member
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
 * (Discontinued) Lists all Amazon Macie Classic member accounts for the current Macie Classic administrator
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
 * (Discontinued) Lists all the S3 resources associated with Amazon Macie Classic. If <code>memberAccountId</code> isn't
 * specified, the action lists the S3 resources associated with Macie Classic for the current Macie Classic administrator
 * account. If <code>memberAccountId</code> is specified, the action lists the S3 resources associated with Macie Classic
 * for the specified member account.
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
 * (Discontinued) Updates the classification types for the specified S3 resources. If <code>memberAccountId</code> isn't
 * specified, the action updates the classification types of the S3 resources associated with Amazon Macie Classic for the
 * current Macie Classic administrator account. If <code>memberAccountId</code> is specified, the action updates the
 * classification types of the S3 resources associated with Macie Classic for the specified member
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
