// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createglobalclusterresponse.h"
#include "createglobalclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::CreateGlobalClusterResponse
 * \brief The CreateGlobalClusterResponse class provides an interace for DocDb CreateGlobalCluster responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::createGlobalCluster
 */

/*!
 * Constructs a CreateGlobalClusterResponse object for \a reply to \a request, with parent \a parent.
 */
CreateGlobalClusterResponse::CreateGlobalClusterResponse(
        const CreateGlobalClusterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new CreateGlobalClusterResponsePrivate(this), parent)
{
    setRequest(new CreateGlobalClusterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateGlobalClusterRequest * CreateGlobalClusterResponse::request() const
{
    Q_D(const CreateGlobalClusterResponse);
    return static_cast<const CreateGlobalClusterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDb CreateGlobalCluster \a response.
 */
void CreateGlobalClusterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateGlobalClusterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::CreateGlobalClusterResponsePrivate
 * \brief The CreateGlobalClusterResponsePrivate class provides private implementation for CreateGlobalClusterResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a CreateGlobalClusterResponsePrivate object with public implementation \a q.
 */
CreateGlobalClusterResponsePrivate::CreateGlobalClusterResponsePrivate(
    CreateGlobalClusterResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb CreateGlobalCluster response element from \a xml.
 */
void CreateGlobalClusterResponsePrivate::parseCreateGlobalClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateGlobalClusterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
