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
 *  <fullname>AWS Well-Architected Tool</fullname>
 * 
 *  This is the <i>AWS Well-Architected Tool API Reference</i>. The AWS Well-Architected Tool API provides programmatic
 *  access to the <a href="http://aws.amazon.com/well-architected-tool">AWS Well-Architected Tool</a> in the <a
 *  href="https://console.aws.amazon.com/wellarchitected">AWS Management Console</a>. For information about the AWS
 *  Well-Architected Tool, see the <a href="https://docs.aws.amazon.com/wellarchitected/latest/userguide/intro.html">AWS
 *  Well-Architected Tool User
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
    return static_cast<const ListNotificationsRequest *>(WellArchitectedResponse::request());
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
