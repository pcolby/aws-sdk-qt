// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateclusterresponse.h"
#include "updateclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Dax {

/*!
 * \class QtAws::Dax::UpdateClusterResponse
 * \brief The UpdateClusterResponse class provides an interace for Dax UpdateCluster responses.
 *
 * \inmodule QtAwsDax
 *
 *  DAX is a managed caching service engineered for Amazon DynamoDB. DAX dramatically speeds up database reads by caching
 *  frequently-accessed data from DynamoDB, so applications can access that data with sub-millisecond latency. You can
 *  create a DAX cluster easily, using the AWS Management Console. With a few simple modifications to your code, your
 *  application can begin taking advantage of the DAX cluster and realize significant improvements in read
 *
 * \sa DaxClient::updateCluster
 */

/*!
 * Constructs a UpdateClusterResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateClusterResponse::UpdateClusterResponse(
        const UpdateClusterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DaxResponse(new UpdateClusterResponsePrivate(this), parent)
{
    setRequest(new UpdateClusterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateClusterRequest * UpdateClusterResponse::request() const
{
    Q_D(const UpdateClusterResponse);
    return static_cast<const UpdateClusterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Dax UpdateCluster \a response.
 */
void UpdateClusterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateClusterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Dax::UpdateClusterResponsePrivate
 * \brief The UpdateClusterResponsePrivate class provides private implementation for UpdateClusterResponse.
 * \internal
 *
 * \inmodule QtAwsDax
 */

/*!
 * Constructs a UpdateClusterResponsePrivate object with public implementation \a q.
 */
UpdateClusterResponsePrivate::UpdateClusterResponsePrivate(
    UpdateClusterResponse * const q) : DaxResponsePrivate(q)
{

}

/*!
 * Parses a Dax UpdateCluster response element from \a xml.
 */
void UpdateClusterResponsePrivate::parseUpdateClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateClusterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Dax
} // namespace QtAws
