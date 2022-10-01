// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listnotificationsresponse.h"
#include "listnotificationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::ListNotificationsResponse
 * \brief The ListNotificationsResponse class provides an interace for WellArchitected ListNotifications responses.
 *
 * \inmodule QtAwsWellArchitected
 *
 *  <fullname>Well-Architected Tool</fullname>
 * 
 *  This is the <i>Well-Architected Tool API Reference</i>. The WA Tool API provides programmatic access to the <a
 *  href="http://aws.amazon.com/well-architected-tool">Well-Architected Tool</a> in the <a
 *  href="https://console.aws.amazon.com/wellarchitected">Amazon Web Services Management Console</a>. For information about
 *  the Well-Architected Tool, see the <a
 *  href="https://docs.aws.amazon.com/wellarchitected/latest/userguide/intro.html">Well-Architected Tool User
 *
 * \sa WellArchitectedClient::listNotifications
 */

/*!
 * Constructs a ListNotificationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListNotificationsResponse::ListNotificationsResponse(
        const ListNotificationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WellArchitectedResponse(new ListNotificationsResponsePrivate(this), parent)
{
    setRequest(new ListNotificationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListNotificationsRequest * ListNotificationsResponse::request() const
{
    Q_D(const ListNotificationsResponse);
    return static_cast<const ListNotificationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WellArchitected ListNotifications \a response.
 */
void ListNotificationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListNotificationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WellArchitected::ListNotificationsResponsePrivate
 * \brief The ListNotificationsResponsePrivate class provides private implementation for ListNotificationsResponse.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a ListNotificationsResponsePrivate object with public implementation \a q.
 */
ListNotificationsResponsePrivate::ListNotificationsResponsePrivate(
    ListNotificationsResponse * const q) : WellArchitectedResponsePrivate(q)
{

}

/*!
 * Parses a WellArchitected ListNotifications response element from \a xml.
 */
void ListNotificationsResponsePrivate::parseListNotificationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListNotificationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WellArchitected
} // namespace QtAws
