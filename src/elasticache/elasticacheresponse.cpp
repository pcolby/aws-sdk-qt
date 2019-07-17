/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
