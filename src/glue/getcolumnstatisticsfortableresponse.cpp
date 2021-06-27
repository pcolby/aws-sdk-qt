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

#include "getcolumnstatisticsfortableresponse.h"
#include "getcolumnstatisticsfortableresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetColumnStatisticsForTableResponse
 * \brief The GetColumnStatisticsForTableResponse class provides an interace for Glue GetColumnStatisticsForTable responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getColumnStatisticsForTable
 */

/*!
 * Constructs a GetColumnStatisticsForTableResponse object for \a reply to \a request, with parent \a parent.
 */
GetColumnStatisticsForTableResponse::GetColumnStatisticsForTableResponse(
        const GetColumnStatisticsForTableRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetColumnStatisticsForTableResponsePrivate(this), parent)
{
    setRequest(new GetColumnStatisticsForTableRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetColumnStatisticsForTableRequest * GetColumnStatisticsForTableResponse::request() const
{
    return static_cast<const GetColumnStatisticsForTableRequest *>(GlueResponse::request());
}

/*!
 * \reimp
 * Parses a successful Glue GetColumnStatisticsForTable \a response.
 */
void GetColumnStatisticsForTableResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetColumnStatisticsForTableResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetColumnStatisticsForTableResponsePrivate
 * \brief The GetColumnStatisticsForTableResponsePrivate class provides private implementation for GetColumnStatisticsForTableResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetColumnStatisticsForTableResponsePrivate object with public implementation \a q.
 */
GetColumnStatisticsForTableResponsePrivate::GetColumnStatisticsForTableResponsePrivate(
    GetColumnStatisticsForTableResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetColumnStatisticsForTable response element from \a xml.
 */
void GetColumnStatisticsForTableResponsePrivate::parseGetColumnStatisticsForTableResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetColumnStatisticsForTableResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
