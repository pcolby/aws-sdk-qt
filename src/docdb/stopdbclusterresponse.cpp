// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopdbclusterresponse.h"
#include "stopdbclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::StopDBClusterResponse
 * \brief The StopDBClusterResponse class provides an interace for DocDb StopDBCluster responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::stopDBCluster
 */

/*!
 * Constructs a StopDBClusterResponse object for \a reply to \a request, with parent \a parent.
 */
StopDBClusterResponse::StopDBClusterResponse(
        const StopDBClusterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new StopDBClusterResponsePrivate(this), parent)
{
    setRequest(new StopDBClusterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopDBClusterRequest * StopDBClusterResponse::request() const
{
    Q_D(const StopDBClusterResponse);
    return static_cast<const StopDBClusterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDb StopDBCluster \a response.
 */
void StopDBClusterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopDBClusterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::StopDBClusterResponsePrivate
 * \brief The StopDBClusterResponsePrivate class provides private implementation for StopDBClusterResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a StopDBClusterResponsePrivate object with public implementation \a q.
 */
StopDBClusterResponsePrivate::StopDBClusterResponsePrivate(
    StopDBClusterResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb StopDBCluster response element from \a xml.
 */
void StopDBClusterResponsePrivate::parseStopDBClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopDBClusterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
