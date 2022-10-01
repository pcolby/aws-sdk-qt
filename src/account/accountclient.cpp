// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "accountclient.h"
#include "accountclient_p.h"

#include "core/awssignaturev4.h"
#include "deletealternatecontactrequest.h"
#include "deletealternatecontactresponse.h"
#include "getalternatecontactrequest.h"
#include "getalternatecontactresponse.h"
#include "getcontactinformationrequest.h"
#include "getcontactinformationresponse.h"
#include "putalternatecontactrequest.h"
#include "putalternatecontactresponse.h"
#include "putcontactinformationrequest.h"
#include "putcontactinformationresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Account
 * \brief Contains classess for accessing AWS Account.
 *
 * \inmodule QtAwsAccount
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Account {

/*!
 * \class QtAws::Account::AccountClient
 * \brief The AccountClient class provides access to the AWS Account service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsAccount
 *
 *  Operations for Amazon Web Services Account
 */

/*!
 * \brief Constructs a AccountClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
AccountClient::AccountClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new AccountClientPrivate(this), parent)
{
    Q_D(AccountClient);
    d->apiVersion = QStringLiteral("2021-02-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Account");
    d->serviceName = QStringLiteral("account");
}

/*!
 * \overload AccountClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
AccountClient::AccountClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new AccountClientPrivate(this), parent)
{
    Q_D(AccountClient);
    d->apiVersion = QStringLiteral("2021-02-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Account");
    d->serviceName = QStringLiteral("account");
}

/*!
 * Sends \a request to the AccountClient service, and returns a pointer to an
 * DeleteAlternateContactResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified alternate contact from an Amazon Web Services
 *
 * account>
 *
 * For complete details about how to use the alternate contact operations, see <a
 * href="https://docs.aws.amazon.com/accounts/latest/reference/manage-acct-update-contact.html">Access or updating the
 * alternate
 *
 * contacts</a>> <note>
 *
 * Before you can update the alternate contact information for an Amazon Web Services account that is managed by
 * Organizations, you must first enable integration between Amazon Web Services Account Management and Organizations. For
 * more information, see <a
 * href="https://docs.aws.amazon.com/accounts/latest/reference/using-orgs-trusted-access.html">Enabling trusted access for
 * Amazon Web Services Account
 */
DeleteAlternateContactResponse * AccountClient::deleteAlternateContact(const DeleteAlternateContactRequest &request)
{
    return qobject_cast<DeleteAlternateContactResponse *>(send(request));
}

/*!
 * Sends \a request to the AccountClient service, and returns a pointer to an
 * GetAlternateContactResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the specified alternate contact attached to an Amazon Web Services
 *
 * account>
 *
 * For complete details about how to use the alternate contact operations, see <a
 * href="https://docs.aws.amazon.com/accounts/latest/reference/manage-acct-update-contact.html">Access or updating the
 * alternate
 *
 * contacts</a>> <note>
 *
 * Before you can update the alternate contact information for an Amazon Web Services account that is managed by
 * Organizations, you must first enable integration between Amazon Web Services Account Management and Organizations. For
 * more information, see <a
 * href="https://docs.aws.amazon.com/accounts/latest/reference/using-orgs-trusted-access.html">Enabling trusted access for
 * Amazon Web Services Account
 */
GetAlternateContactResponse * AccountClient::getAlternateContact(const GetAlternateContactRequest &request)
{
    return qobject_cast<GetAlternateContactResponse *>(send(request));
}

/*!
 * Sends \a request to the AccountClient service, and returns a pointer to an
 * GetContactInformationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the primary contact information of an Amazon Web Services
 *
 * account>
 *
 * For complete details about how to use the primary contact operations, see <a
 * href="https://docs.aws.amazon.com/accounts/latest/reference/manage-acct-update-contact.html">Update the primary and
 * alternate contact
 */
GetContactInformationResponse * AccountClient::getContactInformation(const GetContactInformationRequest &request)
{
    return qobject_cast<GetContactInformationResponse *>(send(request));
}

/*!
 * Sends \a request to the AccountClient service, and returns a pointer to an
 * PutAlternateContactResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the specified alternate contact attached to an Amazon Web Services
 *
 * account>
 *
 * For complete details about how to use the alternate contact operations, see <a
 * href="https://docs.aws.amazon.com/accounts/latest/reference/manage-acct-update-contact.html">Access or updating the
 * alternate
 *
 * contacts</a>> <note>
 *
 * Before you can update the alternate contact information for an Amazon Web Services account that is managed by
 * Organizations, you must first enable integration between Amazon Web Services Account Management and Organizations. For
 * more information, see <a
 * href="https://docs.aws.amazon.com/accounts/latest/reference/using-orgs-trusted-access.html">Enabling trusted access for
 * Amazon Web Services Account
 */
PutAlternateContactResponse * AccountClient::putAlternateContact(const PutAlternateContactRequest &request)
{
    return qobject_cast<PutAlternateContactResponse *>(send(request));
}

/*!
 * Sends \a request to the AccountClient service, and returns a pointer to an
 * PutContactInformationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the primary contact information of an Amazon Web Services
 *
 * account>
 *
 * For complete details about how to use the primary contact operations, see <a
 * href="https://docs.aws.amazon.com/accounts/latest/reference/manage-acct-update-contact.html">Update the primary and
 * alternate contact
 */
PutContactInformationResponse * AccountClient::putContactInformation(const PutContactInformationRequest &request)
{
    return qobject_cast<PutContactInformationResponse *>(send(request));
}

/*!
 * \class QtAws::Account::AccountClientPrivate
 * \brief The AccountClientPrivate class provides private implementation for AccountClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsAccount
 */

/*!
 * Constructs a AccountClientPrivate object with public implementation \a q.
 */
AccountClientPrivate::AccountClientPrivate(AccountClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Account
} // namespace QtAws
