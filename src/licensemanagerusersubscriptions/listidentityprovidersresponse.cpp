// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listidentityprovidersresponse.h"
#include "listidentityprovidersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

/*!
 * \class QtAws::LicenseManagerUserSubscriptions::ListIdentityProvidersResponse
 * \brief The ListIdentityProvidersResponse class provides an interace for LicenseManagerUserSubscriptions ListIdentityProviders responses.
 *
 * \inmodule QtAwsLicenseManagerUserSubscriptions
 *
 *  With License Manager, you can create user-based subscriptions to utilize licensed software with a per user subscription
 *  fee on Amazon EC2
 *
 * \sa LicenseManagerUserSubscriptionsClient::listIdentityProviders
 */

/*!
 * Constructs a ListIdentityProvidersResponse object for \a reply to \a request, with parent \a parent.
 */
ListIdentityProvidersResponse::ListIdentityProvidersResponse(
        const ListIdentityProvidersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerUserSubscriptionsResponse(new ListIdentityProvidersResponsePrivate(this), parent)
{
    setRequest(new ListIdentityProvidersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListIdentityProvidersRequest * ListIdentityProvidersResponse::request() const
{
    Q_D(const ListIdentityProvidersResponse);
    return static_cast<const ListIdentityProvidersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManagerUserSubscriptions ListIdentityProviders \a response.
 */
void ListIdentityProvidersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListIdentityProvidersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManagerUserSubscriptions::ListIdentityProvidersResponsePrivate
 * \brief The ListIdentityProvidersResponsePrivate class provides private implementation for ListIdentityProvidersResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManagerUserSubscriptions
 */

/*!
 * Constructs a ListIdentityProvidersResponsePrivate object with public implementation \a q.
 */
ListIdentityProvidersResponsePrivate::ListIdentityProvidersResponsePrivate(
    ListIdentityProvidersResponse * const q) : LicenseManagerUserSubscriptionsResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManagerUserSubscriptions ListIdentityProviders response element from \a xml.
 */
void ListIdentityProvidersResponsePrivate::parseListIdentityProvidersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListIdentityProvidersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws
