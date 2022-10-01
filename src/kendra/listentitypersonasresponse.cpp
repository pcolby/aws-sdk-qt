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

#include "listentitypersonasresponse.h"
#include "listentitypersonasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::ListEntityPersonasResponse
 * \brief The ListEntityPersonasResponse class provides an interace for Kendra ListEntityPersonas responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::listEntityPersonas
 */

/*!
 * Constructs a ListEntityPersonasResponse object for \a reply to \a request, with parent \a parent.
 */
ListEntityPersonasResponse::ListEntityPersonasResponse(
        const ListEntityPersonasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new ListEntityPersonasResponsePrivate(this), parent)
{
    setRequest(new ListEntityPersonasRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListEntityPersonasRequest * ListEntityPersonasResponse::request() const
{
    Q_D(const ListEntityPersonasResponse);
    return static_cast<const ListEntityPersonasRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra ListEntityPersonas \a response.
 */
void ListEntityPersonasResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListEntityPersonasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::ListEntityPersonasResponsePrivate
 * \brief The ListEntityPersonasResponsePrivate class provides private implementation for ListEntityPersonasResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a ListEntityPersonasResponsePrivate object with public implementation \a q.
 */
ListEntityPersonasResponsePrivate::ListEntityPersonasResponsePrivate(
    ListEntityPersonasResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra ListEntityPersonas response element from \a xml.
 */
void ListEntityPersonasResponsePrivate::parseListEntityPersonasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListEntityPersonasResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
