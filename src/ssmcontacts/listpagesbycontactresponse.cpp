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

#include "listpagesbycontactresponse.h"
#include "listpagesbycontactresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSMContacts {

/*!
 * \class QtAws::SSMContacts::ListPagesByContactResponse
 * \brief The ListPagesByContactResponse class provides an interace for SSMContacts ListPagesByContact responses.
 *
 * \inmodule QtAwsSSMContacts
 *
 *
 * \sa SSMContactsClient::listPagesByContact
 */

/*!
 * Constructs a ListPagesByContactResponse object for \a reply to \a request, with parent \a parent.
 */
ListPagesByContactResponse::ListPagesByContactResponse(
        const ListPagesByContactRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMContactsResponse(new ListPagesByContactResponsePrivate(this), parent)
{
    setRequest(new ListPagesByContactRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPagesByContactRequest * ListPagesByContactResponse::request() const
{
    Q_D(const ListPagesByContactResponse);
    return static_cast<const ListPagesByContactRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SSMContacts ListPagesByContact \a response.
 */
void ListPagesByContactResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPagesByContactResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SSMContacts::ListPagesByContactResponsePrivate
 * \brief The ListPagesByContactResponsePrivate class provides private implementation for ListPagesByContactResponse.
 * \internal
 *
 * \inmodule QtAwsSSMContacts
 */

/*!
 * Constructs a ListPagesByContactResponsePrivate object with public implementation \a q.
 */
ListPagesByContactResponsePrivate::ListPagesByContactResponsePrivate(
    ListPagesByContactResponse * const q) : SSMContactsResponsePrivate(q)
{

}

/*!
 * Parses a SSMContacts ListPagesByContact response element from \a xml.
 */
void ListPagesByContactResponsePrivate::parseListPagesByContactResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPagesByContactResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SSMContacts
} // namespace QtAws
