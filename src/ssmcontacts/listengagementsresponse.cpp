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

#include "listengagementsresponse.h"
#include "listengagementsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSMContacts {

/*!
 * \class QtAws::SSMContacts::ListEngagementsResponse
 * \brief The ListEngagementsResponse class provides an interace for SSMContacts ListEngagements responses.
 *
 * \inmodule QtAwsSSMContacts
 *
 *
 * \sa SSMContactsClient::listEngagements
 */

/*!
 * Constructs a ListEngagementsResponse object for \a reply to \a request, with parent \a parent.
 */
ListEngagementsResponse::ListEngagementsResponse(
        const ListEngagementsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMContactsResponse(new ListEngagementsResponsePrivate(this), parent)
{
    setRequest(new ListEngagementsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListEngagementsRequest * ListEngagementsResponse::request() const
{
    return static_cast<const ListEngagementsRequest *>(SSMContactsResponse::request());
}

/*!
 * \reimp
 * Parses a successful SSMContacts ListEngagements \a response.
 */
void ListEngagementsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListEngagementsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SSMContacts::ListEngagementsResponsePrivate
 * \brief The ListEngagementsResponsePrivate class provides private implementation for ListEngagementsResponse.
 * \internal
 *
 * \inmodule QtAwsSSMContacts
 */

/*!
 * Constructs a ListEngagementsResponsePrivate object with public implementation \a q.
 */
ListEngagementsResponsePrivate::ListEngagementsResponsePrivate(
    ListEngagementsResponse * const q) : SSMContactsResponsePrivate(q)
{

}

/*!
 * Parses a SSMContacts ListEngagements response element from \a xml.
 */
void ListEngagementsResponsePrivate::parseListEngagementsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListEngagementsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SSMContacts
} // namespace QtAws
