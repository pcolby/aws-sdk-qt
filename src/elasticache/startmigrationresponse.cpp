// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startmigrationresponse.h"
#include "startmigrationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::StartMigrationResponse
 * \brief The StartMigrationResponse class provides an interace for ElastiCache StartMigration responses.
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
 * \sa ElastiCacheClient::startMigration
 */

/*!
 * Constructs a StartMigrationResponse object for \a reply to \a request, with parent \a parent.
 */
StartMigrationResponse::StartMigrationResponse(
        const StartMigrationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new StartMigrationResponsePrivate(this), parent)
{
    setRequest(new StartMigrationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartMigrationRequest * StartMigrationResponse::request() const
{
    Q_D(const StartMigrationResponse);
    return static_cast<const StartMigrationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElastiCache StartMigration \a response.
 */
void StartMigrationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartMigrationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElastiCache::StartMigrationResponsePrivate
 * \brief The StartMigrationResponsePrivate class provides private implementation for StartMigrationResponse.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a StartMigrationResponsePrivate object with public implementation \a q.
 */
StartMigrationResponsePrivate::StartMigrationResponsePrivate(
    StartMigrationResponse * const q) : ElastiCacheResponsePrivate(q)
{

}

/*!
 * Parses a ElastiCache StartMigration response element from \a xml.
 */
void StartMigrationResponsePrivate::parseStartMigrationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartMigrationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElastiCache
} // namespace QtAws
