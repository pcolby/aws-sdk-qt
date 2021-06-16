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

#include "deletecolumnstatisticsfortableresponse.h"
#include "deletecolumnstatisticsfortableresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeleteColumnStatisticsForTableResponse
 * \brief The DeleteColumnStatisticsForTableResponse class provides an interace for Glue DeleteColumnStatisticsForTable responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::deleteColumnStatisticsForTable
 */

/*!
 * Constructs a DeleteColumnStatisticsForTableResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteColumnStatisticsForTableResponse::DeleteColumnStatisticsForTableResponse(
        const DeleteColumnStatisticsForTableRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new DeleteColumnStatisticsForTableResponsePrivate(this), parent)
{
    setRequest(new DeleteColumnStatisticsForTableRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteColumnStatisticsForTableRequest * DeleteColumnStatisticsForTableResponse::request() const
{
    Q_D(const DeleteColumnStatisticsForTableResponse);
    return static_cast<const DeleteColumnStatisticsForTableRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue DeleteColumnStatisticsForTable \a response.
 */
void DeleteColumnStatisticsForTableResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteColumnStatisticsForTableResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::DeleteColumnStatisticsForTableResponsePrivate
 * \brief The DeleteColumnStatisticsForTableResponsePrivate class provides private implementation for DeleteColumnStatisticsForTableResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a DeleteColumnStatisticsForTableResponsePrivate object with public implementation \a q.
 */
DeleteColumnStatisticsForTableResponsePrivate::DeleteColumnStatisticsForTableResponsePrivate(
    DeleteColumnStatisticsForTableResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue DeleteColumnStatisticsForTable response element from \a xml.
 */
void DeleteColumnStatisticsForTableResponsePrivate::parseDeleteColumnStatisticsForTableResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteColumnStatisticsForTableResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
