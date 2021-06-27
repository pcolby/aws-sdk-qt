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

#include "batchdeleteworldsresponse.h"
#include "batchdeleteworldsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::BatchDeleteWorldsResponse
 * \brief The BatchDeleteWorldsResponse class provides an interace for RoboMaker BatchDeleteWorlds responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::batchDeleteWorlds
 */

/*!
 * Constructs a BatchDeleteWorldsResponse object for \a reply to \a request, with parent \a parent.
 */
BatchDeleteWorldsResponse::BatchDeleteWorldsResponse(
        const BatchDeleteWorldsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new BatchDeleteWorldsResponsePrivate(this), parent)
{
    setRequest(new BatchDeleteWorldsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchDeleteWorldsRequest * BatchDeleteWorldsResponse::request() const
{
    return static_cast<const BatchDeleteWorldsRequest *>(RoboMakerResponse::request());
}

/*!
 * \reimp
 * Parses a successful RoboMaker BatchDeleteWorlds \a response.
 */
void BatchDeleteWorldsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchDeleteWorldsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::BatchDeleteWorldsResponsePrivate
 * \brief The BatchDeleteWorldsResponsePrivate class provides private implementation for BatchDeleteWorldsResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a BatchDeleteWorldsResponsePrivate object with public implementation \a q.
 */
BatchDeleteWorldsResponsePrivate::BatchDeleteWorldsResponsePrivate(
    BatchDeleteWorldsResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker BatchDeleteWorlds response element from \a xml.
 */
void BatchDeleteWorldsResponsePrivate::parseBatchDeleteWorldsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchDeleteWorldsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
