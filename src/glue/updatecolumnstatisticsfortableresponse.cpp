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

#include "updatecolumnstatisticsfortableresponse.h"
#include "updatecolumnstatisticsfortableresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::UpdateColumnStatisticsForTableResponse
 * \brief The UpdateColumnStatisticsForTableResponse class provides an interace for Glue UpdateColumnStatisticsForTable responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::updateColumnStatisticsForTable
 */

/*!
 * Constructs a UpdateColumnStatisticsForTableResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateColumnStatisticsForTableResponse::UpdateColumnStatisticsForTableResponse(
        const UpdateColumnStatisticsForTableRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new UpdateColumnStatisticsForTableResponsePrivate(this), parent)
{
    setRequest(new UpdateColumnStatisticsForTableRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateColumnStatisticsForTableRequest * UpdateColumnStatisticsForTableResponse::request() const
{
    return static_cast<const UpdateColumnStatisticsForTableRequest *>(GlueResponse::request());
}

/*!
 * \reimp
 * Parses a successful Glue UpdateColumnStatisticsForTable \a response.
 */
void UpdateColumnStatisticsForTableResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateColumnStatisticsForTableResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::UpdateColumnStatisticsForTableResponsePrivate
 * \brief The UpdateColumnStatisticsForTableResponsePrivate class provides private implementation for UpdateColumnStatisticsForTableResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a UpdateColumnStatisticsForTableResponsePrivate object with public implementation \a q.
 */
UpdateColumnStatisticsForTableResponsePrivate::UpdateColumnStatisticsForTableResponsePrivate(
    UpdateColumnStatisticsForTableResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue UpdateColumnStatisticsForTable response element from \a xml.
 */
void UpdateColumnStatisticsForTableResponsePrivate::parseUpdateColumnStatisticsForTableResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateColumnStatisticsForTableResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
