// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "removefromglobalclusterresponse.h"
#include "removefromglobalclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::RemoveFromGlobalClusterResponse
 * \brief The RemoveFromGlobalClusterResponse class provides an interace for DocDb RemoveFromGlobalCluster responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::removeFromGlobalCluster
 */

/*!
 * Constructs a RemoveFromGlobalClusterResponse object for \a reply to \a request, with parent \a parent.
 */
RemoveFromGlobalClusterResponse::RemoveFromGlobalClusterResponse(
        const RemoveFromGlobalClusterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new RemoveFromGlobalClusterResponsePrivate(this), parent)
{
    setRequest(new RemoveFromGlobalClusterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RemoveFromGlobalClusterRequest * RemoveFromGlobalClusterResponse::request() const
{
    Q_D(const RemoveFromGlobalClusterResponse);
    return static_cast<const RemoveFromGlobalClusterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDb RemoveFromGlobalCluster \a response.
 */
void RemoveFromGlobalClusterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RemoveFromGlobalClusterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::RemoveFromGlobalClusterResponsePrivate
 * \brief The RemoveFromGlobalClusterResponsePrivate class provides private implementation for RemoveFromGlobalClusterResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a RemoveFromGlobalClusterResponsePrivate object with public implementation \a q.
 */
RemoveFromGlobalClusterResponsePrivate::RemoveFromGlobalClusterResponsePrivate(
    RemoveFromGlobalClusterResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb RemoveFromGlobalCluster response element from \a xml.
 */
void RemoveFromGlobalClusterResponsePrivate::parseRemoveFromGlobalClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveFromGlobalClusterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
