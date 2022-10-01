// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "modifyglobalclusterresponse.h"
#include "modifyglobalclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::ModifyGlobalClusterResponse
 * \brief The ModifyGlobalClusterResponse class provides an interace for DocDb ModifyGlobalCluster responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::modifyGlobalCluster
 */

/*!
 * Constructs a ModifyGlobalClusterResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyGlobalClusterResponse::ModifyGlobalClusterResponse(
        const ModifyGlobalClusterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new ModifyGlobalClusterResponsePrivate(this), parent)
{
    setRequest(new ModifyGlobalClusterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyGlobalClusterRequest * ModifyGlobalClusterResponse::request() const
{
    Q_D(const ModifyGlobalClusterResponse);
    return static_cast<const ModifyGlobalClusterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDb ModifyGlobalCluster \a response.
 */
void ModifyGlobalClusterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ModifyGlobalClusterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::ModifyGlobalClusterResponsePrivate
 * \brief The ModifyGlobalClusterResponsePrivate class provides private implementation for ModifyGlobalClusterResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a ModifyGlobalClusterResponsePrivate object with public implementation \a q.
 */
ModifyGlobalClusterResponsePrivate::ModifyGlobalClusterResponsePrivate(
    ModifyGlobalClusterResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb ModifyGlobalCluster response element from \a xml.
 */
void ModifyGlobalClusterResponsePrivate::parseModifyGlobalClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyGlobalClusterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
