// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedbclusterresponse.h"
#include "deletedbclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::DeleteDBClusterResponse
 * \brief The DeleteDBClusterResponse class provides an interace for DocDb DeleteDBCluster responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::deleteDBCluster
 */

/*!
 * Constructs a DeleteDBClusterResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDBClusterResponse::DeleteDBClusterResponse(
        const DeleteDBClusterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new DeleteDBClusterResponsePrivate(this), parent)
{
    setRequest(new DeleteDBClusterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDBClusterRequest * DeleteDBClusterResponse::request() const
{
    Q_D(const DeleteDBClusterResponse);
    return static_cast<const DeleteDBClusterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDb DeleteDBCluster \a response.
 */
void DeleteDBClusterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDBClusterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::DeleteDBClusterResponsePrivate
 * \brief The DeleteDBClusterResponsePrivate class provides private implementation for DeleteDBClusterResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a DeleteDBClusterResponsePrivate object with public implementation \a q.
 */
DeleteDBClusterResponsePrivate::DeleteDBClusterResponsePrivate(
    DeleteDBClusterResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb DeleteDBCluster response element from \a xml.
 */
void DeleteDBClusterResponsePrivate::parseDeleteDBClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDBClusterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
