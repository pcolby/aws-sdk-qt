// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startdbclusterresponse.h"
#include "startdbclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::StartDBClusterResponse
 * \brief The StartDBClusterResponse class provides an interace for DocDb StartDBCluster responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::startDBCluster
 */

/*!
 * Constructs a StartDBClusterResponse object for \a reply to \a request, with parent \a parent.
 */
StartDBClusterResponse::StartDBClusterResponse(
        const StartDBClusterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new StartDBClusterResponsePrivate(this), parent)
{
    setRequest(new StartDBClusterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartDBClusterRequest * StartDBClusterResponse::request() const
{
    Q_D(const StartDBClusterResponse);
    return static_cast<const StartDBClusterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDb StartDBCluster \a response.
 */
void StartDBClusterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartDBClusterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::StartDBClusterResponsePrivate
 * \brief The StartDBClusterResponsePrivate class provides private implementation for StartDBClusterResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a StartDBClusterResponsePrivate object with public implementation \a q.
 */
StartDBClusterResponsePrivate::StartDBClusterResponsePrivate(
    StartDBClusterResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb StartDBCluster response element from \a xml.
 */
void StartDBClusterResponsePrivate::parseStartDBClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartDBClusterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
