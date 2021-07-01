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

#include "listpagesbyengagementresponse.h"
#include "listpagesbyengagementresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSMContacts {

/*!
 * \class QtAws::SSMContacts::ListPagesByEngagementResponse
 * \brief The ListPagesByEngagementResponse class provides an interace for SSMContacts ListPagesByEngagement responses.
 *
 * \inmodule QtAwsSSMContacts
 *
 *
 * \sa SSMContactsClient::listPagesByEngagement
 */

/*!
 * Constructs a ListPagesByEngagementResponse object for \a reply to \a request, with parent \a parent.
 */
ListPagesByEngagementResponse::ListPagesByEngagementResponse(
        const ListPagesByEngagementRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMContactsResponse(new ListPagesByEngagementResponsePrivate(this), parent)
{
    setRequest(new ListPagesByEngagementRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPagesByEngagementRequest * ListPagesByEngagementResponse::request() const
{
    Q_D(const ListPagesByEngagementResponse);
    return static_cast<const ListPagesByEngagementRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SSMContacts ListPagesByEngagement \a response.
 */
void ListPagesByEngagementResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPagesByEngagementResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SSMContacts::ListPagesByEngagementResponsePrivate
 * \brief The ListPagesByEngagementResponsePrivate class provides private implementation for ListPagesByEngagementResponse.
 * \internal
 *
 * \inmodule QtAwsSSMContacts
 */

/*!
 * Constructs a ListPagesByEngagementResponsePrivate object with public implementation \a q.
 */
ListPagesByEngagementResponsePrivate::ListPagesByEngagementResponsePrivate(
    ListPagesByEngagementResponse * const q) : SSMContactsResponsePrivate(q)
{

}

/*!
 * Parses a SSMContacts ListPagesByEngagement response element from \a xml.
 */
void ListPagesByEngagementResponsePrivate::parseListPagesByEngagementResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPagesByEngagementResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SSMContacts
} // namespace QtAws
