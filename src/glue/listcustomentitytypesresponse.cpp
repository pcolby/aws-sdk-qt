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

#include "listcustomentitytypesresponse.h"
#include "listcustomentitytypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::ListCustomEntityTypesResponse
 * \brief The ListCustomEntityTypesResponse class provides an interace for Glue ListCustomEntityTypes responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::listCustomEntityTypes
 */

/*!
 * Constructs a ListCustomEntityTypesResponse object for \a reply to \a request, with parent \a parent.
 */
ListCustomEntityTypesResponse::ListCustomEntityTypesResponse(
        const ListCustomEntityTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new ListCustomEntityTypesResponsePrivate(this), parent)
{
    setRequest(new ListCustomEntityTypesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListCustomEntityTypesRequest * ListCustomEntityTypesResponse::request() const
{
    Q_D(const ListCustomEntityTypesResponse);
    return static_cast<const ListCustomEntityTypesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue ListCustomEntityTypes \a response.
 */
void ListCustomEntityTypesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListCustomEntityTypesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::ListCustomEntityTypesResponsePrivate
 * \brief The ListCustomEntityTypesResponsePrivate class provides private implementation for ListCustomEntityTypesResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a ListCustomEntityTypesResponsePrivate object with public implementation \a q.
 */
ListCustomEntityTypesResponsePrivate::ListCustomEntityTypesResponsePrivate(
    ListCustomEntityTypesResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue ListCustomEntityTypes response element from \a xml.
 */
void ListCustomEntityTypesResponsePrivate::parseListCustomEntityTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCustomEntityTypesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
