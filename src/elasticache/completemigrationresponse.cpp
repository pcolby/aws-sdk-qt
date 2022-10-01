// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "completemigrationresponse.h"
#include "completemigrationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::CompleteMigrationResponse
 * \brief The CompleteMigrationResponse class provides an interace for ElastiCache CompleteMigration responses.
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
 * \sa ElastiCacheClient::completeMigration
 */

/*!
 * Constructs a CompleteMigrationResponse object for \a reply to \a request, with parent \a parent.
 */
CompleteMigrationResponse::CompleteMigrationResponse(
        const CompleteMigrationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new CompleteMigrationResponsePrivate(this), parent)
{
    setRequest(new CompleteMigrationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CompleteMigrationRequest * CompleteMigrationResponse::request() const
{
    Q_D(const CompleteMigrationResponse);
    return static_cast<const CompleteMigrationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElastiCache CompleteMigration \a response.
 */
void CompleteMigrationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CompleteMigrationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElastiCache::CompleteMigrationResponsePrivate
 * \brief The CompleteMigrationResponsePrivate class provides private implementation for CompleteMigrationResponse.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a CompleteMigrationResponsePrivate object with public implementation \a q.
 */
CompleteMigrationResponsePrivate::CompleteMigrationResponsePrivate(
    CompleteMigrationResponse * const q) : ElastiCacheResponsePrivate(q)
{

}

/*!
 * Parses a ElastiCache CompleteMigration response element from \a xml.
 */
void CompleteMigrationResponsePrivate::parseCompleteMigrationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CompleteMigrationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElastiCache
} // namespace QtAws
