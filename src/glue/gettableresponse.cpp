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

#include "gettableresponse.h"
#include "gettableresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetTableResponse
 * \brief The GetTableResponse class provides an interace for Glue GetTable responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getTable
 */

/*!
 * Constructs a GetTableResponse object for \a reply to \a request, with parent \a parent.
 */
GetTableResponse::GetTableResponse(
        const GetTableRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetTableResponsePrivate(this), parent)
{
    setRequest(new GetTableRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetTableRequest * GetTableResponse::request() const
{
    Q_D(const GetTableResponse);
    return static_cast<const GetTableRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetTable \a response.
 */
void GetTableResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetTableResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetTableResponsePrivate
 * \brief The GetTableResponsePrivate class provides private implementation for GetTableResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetTableResponsePrivate object with public implementation \a q.
 */
GetTableResponsePrivate::GetTableResponsePrivate(
    GetTableResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetTable response element from \a xml.
 */
void GetTableResponsePrivate::parseGetTableResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTableResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
