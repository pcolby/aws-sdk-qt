// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const BatchDeleteWorldsResponse);
    return static_cast<const BatchDeleteWorldsRequest *>(d->request);
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
