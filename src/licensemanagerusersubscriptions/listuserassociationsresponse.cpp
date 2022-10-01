// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listuserassociationsresponse.h"
#include "listuserassociationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

/*!
 * \class QtAws::LicenseManagerUserSubscriptions::ListUserAssociationsResponse
 * \brief The ListUserAssociationsResponse class provides an interace for LicenseManagerUserSubscriptions ListUserAssociations responses.
 *
 * \inmodule QtAwsLicenseManagerUserSubscriptions
 *
 *  With License Manager, you can create user-based subscriptions to utilize licensed software with a per user subscription
 *  fee on Amazon EC2
 *
 * \sa LicenseManagerUserSubscriptionsClient::listUserAssociations
 */

/*!
 * Constructs a ListUserAssociationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListUserAssociationsResponse::ListUserAssociationsResponse(
        const ListUserAssociationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerUserSubscriptionsResponse(new ListUserAssociationsResponsePrivate(this), parent)
{
    setRequest(new ListUserAssociationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListUserAssociationsRequest * ListUserAssociationsResponse::request() const
{
    Q_D(const ListUserAssociationsResponse);
    return static_cast<const ListUserAssociationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManagerUserSubscriptions ListUserAssociations \a response.
 */
void ListUserAssociationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListUserAssociationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManagerUserSubscriptions::ListUserAssociationsResponsePrivate
 * \brief The ListUserAssociationsResponsePrivate class provides private implementation for ListUserAssociationsResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManagerUserSubscriptions
 */

/*!
 * Constructs a ListUserAssociationsResponsePrivate object with public implementation \a q.
 */
ListUserAssociationsResponsePrivate::ListUserAssociationsResponsePrivate(
    ListUserAssociationsResponse * const q) : LicenseManagerUserSubscriptionsResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManagerUserSubscriptions ListUserAssociations response element from \a xml.
 */
void ListUserAssociationsResponsePrivate::parseListUserAssociationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListUserAssociationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws
