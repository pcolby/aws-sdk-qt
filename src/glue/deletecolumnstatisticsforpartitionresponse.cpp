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

#include "deletecolumnstatisticsforpartitionresponse.h"
#include "deletecolumnstatisticsforpartitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeleteColumnStatisticsForPartitionResponse
 * \brief The DeleteColumnStatisticsForPartitionResponse class provides an interace for Glue DeleteColumnStatisticsForPartition responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::deleteColumnStatisticsForPartition
 */

/*!
 * Constructs a DeleteColumnStatisticsForPartitionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteColumnStatisticsForPartitionResponse::DeleteColumnStatisticsForPartitionResponse(
        const DeleteColumnStatisticsForPartitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new DeleteColumnStatisticsForPartitionResponsePrivate(this), parent)
{
    setRequest(new DeleteColumnStatisticsForPartitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteColumnStatisticsForPartitionRequest * DeleteColumnStatisticsForPartitionResponse::request() const
{
    return static_cast<const DeleteColumnStatisticsForPartitionRequest *>(GlueResponse::request());
}

/*!
 * \reimp
 * Parses a successful Glue DeleteColumnStatisticsForPartition \a response.
 */
void DeleteColumnStatisticsForPartitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteColumnStatisticsForPartitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::DeleteColumnStatisticsForPartitionResponsePrivate
 * \brief The DeleteColumnStatisticsForPartitionResponsePrivate class provides private implementation for DeleteColumnStatisticsForPartitionResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a DeleteColumnStatisticsForPartitionResponsePrivate object with public implementation \a q.
 */
DeleteColumnStatisticsForPartitionResponsePrivate::DeleteColumnStatisticsForPartitionResponsePrivate(
    DeleteColumnStatisticsForPartitionResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue DeleteColumnStatisticsForPartition response element from \a xml.
 */
void DeleteColumnStatisticsForPartitionResponsePrivate::parseDeleteColumnStatisticsForPartitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteColumnStatisticsForPartitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
