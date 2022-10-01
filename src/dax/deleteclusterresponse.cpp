// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteclusterresponse.h"
#include "deleteclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Dax {

/*!
 * \class QtAws::Dax::DeleteClusterResponse
 * \brief The DeleteClusterResponse class provides an interace for Dax DeleteCluster responses.
 *
 * \inmodule QtAwsDax
 *
 *  DAX is a managed caching service engineered for Amazon DynamoDB. DAX dramatically speeds up database reads by caching
 *  frequently-accessed data from DynamoDB, so applications can access that data with sub-millisecond latency. You can
 *  create a DAX cluster easily, using the AWS Management Console. With a few simple modifications to your code, your
 *  application can begin taking advantage of the DAX cluster and realize significant improvements in read
 *
 * \sa DaxClient::deleteCluster
 */

/*!
 * Constructs a DeleteClusterResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteClusterResponse::DeleteClusterResponse(
        const DeleteClusterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DaxResponse(new DeleteClusterResponsePrivate(this), parent)
{
    setRequest(new DeleteClusterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteClusterRequest * DeleteClusterResponse::request() const
{
    Q_D(const DeleteClusterResponse);
    return static_cast<const DeleteClusterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Dax DeleteCluster \a response.
 */
void DeleteClusterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteClusterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Dax::DeleteClusterResponsePrivate
 * \brief The DeleteClusterResponsePrivate class provides private implementation for DeleteClusterResponse.
 * \internal
 *
 * \inmodule QtAwsDax
 */

/*!
 * Constructs a DeleteClusterResponsePrivate object with public implementation \a q.
 */
DeleteClusterResponsePrivate::DeleteClusterResponsePrivate(
    DeleteClusterResponse * const q) : DaxResponsePrivate(q)
{

}

/*!
 * Parses a Dax DeleteCluster response element from \a xml.
 */
void DeleteClusterResponsePrivate::parseDeleteClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteClusterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Dax
} // namespace QtAws
