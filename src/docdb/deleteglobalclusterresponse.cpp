// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteglobalclusterresponse.h"
#include "deleteglobalclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::DeleteGlobalClusterResponse
 * \brief The DeleteGlobalClusterResponse class provides an interace for DocDb DeleteGlobalCluster responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::deleteGlobalCluster
 */

/*!
 * Constructs a DeleteGlobalClusterResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteGlobalClusterResponse::DeleteGlobalClusterResponse(
        const DeleteGlobalClusterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new DeleteGlobalClusterResponsePrivate(this), parent)
{
    setRequest(new DeleteGlobalClusterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteGlobalClusterRequest * DeleteGlobalClusterResponse::request() const
{
    Q_D(const DeleteGlobalClusterResponse);
    return static_cast<const DeleteGlobalClusterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDb DeleteGlobalCluster \a response.
 */
void DeleteGlobalClusterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteGlobalClusterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::DeleteGlobalClusterResponsePrivate
 * \brief The DeleteGlobalClusterResponsePrivate class provides private implementation for DeleteGlobalClusterResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a DeleteGlobalClusterResponsePrivate object with public implementation \a q.
 */
DeleteGlobalClusterResponsePrivate::DeleteGlobalClusterResponsePrivate(
    DeleteGlobalClusterResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb DeleteGlobalCluster response element from \a xml.
 */
void DeleteGlobalClusterResponsePrivate::parseDeleteGlobalClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteGlobalClusterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
