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

#include "listregistriesresponse.h"
#include "listregistriesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::ListRegistriesResponse
 * \brief The ListRegistriesResponse class provides an interace for Schemas ListRegistries responses.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::listRegistries
 */

/*!
 * Constructs a ListRegistriesResponse object for \a reply to \a request, with parent \a parent.
 */
ListRegistriesResponse::ListRegistriesResponse(
        const ListRegistriesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SchemasResponse(new ListRegistriesResponsePrivate(this), parent)
{
    setRequest(new ListRegistriesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListRegistriesRequest * ListRegistriesResponse::request() const
{
    return static_cast<const ListRegistriesRequest *>(SchemasResponse::request());
}

/*!
 * \reimp
 * Parses a successful Schemas ListRegistries \a response.
 */
void ListRegistriesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListRegistriesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Schemas::ListRegistriesResponsePrivate
 * \brief The ListRegistriesResponsePrivate class provides private implementation for ListRegistriesResponse.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a ListRegistriesResponsePrivate object with public implementation \a q.
 */
ListRegistriesResponsePrivate::ListRegistriesResponsePrivate(
    ListRegistriesResponse * const q) : SchemasResponsePrivate(q)
{

}

/*!
 * Parses a Schemas ListRegistries response element from \a xml.
 */
void ListRegistriesResponsePrivate::parseListRegistriesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRegistriesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Schemas
} // namespace QtAws
