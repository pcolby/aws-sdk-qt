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

#include "batchgetblueprintsresponse.h"
#include "batchgetblueprintsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::BatchGetBlueprintsResponse
 * \brief The BatchGetBlueprintsResponse class provides an interace for Glue BatchGetBlueprints responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::batchGetBlueprints
 */

/*!
 * Constructs a BatchGetBlueprintsResponse object for \a reply to \a request, with parent \a parent.
 */
BatchGetBlueprintsResponse::BatchGetBlueprintsResponse(
        const BatchGetBlueprintsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new BatchGetBlueprintsResponsePrivate(this), parent)
{
    setRequest(new BatchGetBlueprintsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchGetBlueprintsRequest * BatchGetBlueprintsResponse::request() const
{
    Q_D(const BatchGetBlueprintsResponse);
    return static_cast<const BatchGetBlueprintsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue BatchGetBlueprints \a response.
 */
void BatchGetBlueprintsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchGetBlueprintsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::BatchGetBlueprintsResponsePrivate
 * \brief The BatchGetBlueprintsResponsePrivate class provides private implementation for BatchGetBlueprintsResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a BatchGetBlueprintsResponsePrivate object with public implementation \a q.
 */
BatchGetBlueprintsResponsePrivate::BatchGetBlueprintsResponsePrivate(
    BatchGetBlueprintsResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue BatchGetBlueprints response element from \a xml.
 */
void BatchGetBlueprintsResponsePrivate::parseBatchGetBlueprintsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchGetBlueprintsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
