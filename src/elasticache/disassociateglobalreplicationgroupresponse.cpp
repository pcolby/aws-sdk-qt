// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociateglobalreplicationgroupresponse.h"
#include "disassociateglobalreplicationgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::DisassociateGlobalReplicationGroupResponse
 * \brief The DisassociateGlobalReplicationGroupResponse class provides an interace for ElastiCache DisassociateGlobalReplicationGroup responses.
 *
 * \inmodule QtAwsElastiCache
 *
 *  <fullname>Amazon ElastiCache</fullname>
 * 
 *  Amazon ElastiCache is a web service that makes it easier to set up, operate, and scale a distributed cache in the
 * 
 *  cloud>
 * 
 *  With ElastiCache, customers get all of the benefits of a high-performance, in-memory cache with less of the
 *  administrative burden involved in launching and managing a distributed cache. The service makes setup, scaling, and
 *  cluster failure handling much simpler than in a self-managed cache
 * 
 *  deployment>
 * 
 *  In addition, through integration with Amazon CloudWatch, customers get enhanced visibility into the key performance
 *  statistics associated with their cache and can receive alarms if a part of their cache runs
 *
 * \sa ElastiCacheClient::disassociateGlobalReplicationGroup
 */

/*!
 * Constructs a DisassociateGlobalReplicationGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateGlobalReplicationGroupResponse::DisassociateGlobalReplicationGroupResponse(
        const DisassociateGlobalReplicationGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new DisassociateGlobalReplicationGroupResponsePrivate(this), parent)
{
    setRequest(new DisassociateGlobalReplicationGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateGlobalReplicationGroupRequest * DisassociateGlobalReplicationGroupResponse::request() const
{
    Q_D(const DisassociateGlobalReplicationGroupResponse);
    return static_cast<const DisassociateGlobalReplicationGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElastiCache DisassociateGlobalReplicationGroup \a response.
 */
void DisassociateGlobalReplicationGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateGlobalReplicationGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElastiCache::DisassociateGlobalReplicationGroupResponsePrivate
 * \brief The DisassociateGlobalReplicationGroupResponsePrivate class provides private implementation for DisassociateGlobalReplicationGroupResponse.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a DisassociateGlobalReplicationGroupResponsePrivate object with public implementation \a q.
 */
DisassociateGlobalReplicationGroupResponsePrivate::DisassociateGlobalReplicationGroupResponsePrivate(
    DisassociateGlobalReplicationGroupResponse * const q) : ElastiCacheResponsePrivate(q)
{

}

/*!
 * Parses a ElastiCache DisassociateGlobalReplicationGroup response element from \a xml.
 */
void DisassociateGlobalReplicationGroupResponsePrivate::parseDisassociateGlobalReplicationGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateGlobalReplicationGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElastiCache
} // namespace QtAws
