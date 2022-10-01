// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "elasticacheresponse.h"
#include "elasticacheresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::ElastiCacheResponse
 * \brief The ElastiCacheResponse class provides an interface for ElastiCache responses.
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a ElastiCacheResponse object with parent \a parent.
 */
ElastiCacheResponse::ElastiCacheResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ElastiCacheResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a ElastiCacheResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ElastiCacheResponsePrivate.
 */
ElastiCacheResponse::ElastiCacheResponse(ElastiCacheResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void ElastiCacheResponse::parseFailure(QIODevice &response)
{
    //Q_D(ElastiCacheResponse);
    Q_UNUSED(response);
    /*QXmlStreamReader xml(&response);
    if (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("ErrorResponse")) {
            d->parseErrorResponse(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
    setXmlError(xml);*/
}

/*!
 * \class QtAws::ElastiCache::ElastiCacheResponsePrivate
 * \brief The ElastiCacheResponsePrivate class provides private implementation for ElastiCacheResponse.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a ElastiCacheResponsePrivate object with public implementation \a q.
 */
ElastiCacheResponsePrivate::ElastiCacheResponsePrivate(
    ElastiCacheResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace ElastiCache
} // namespace QtAws
