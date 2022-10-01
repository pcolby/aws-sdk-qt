/*
    Copyright 2013-2021 Paul Colby

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

#include "elasticsearchresponse.h"
#include "elasticsearchresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::ElasticsearchResponse
 * \brief The ElasticsearchResponse class provides an interface for Elasticsearch responses.
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a ElasticsearchResponse object with parent \a parent.
 */
ElasticsearchResponse::ElasticsearchResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ElasticsearchResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a ElasticsearchResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ElasticsearchResponsePrivate.
 */
ElasticsearchResponse::ElasticsearchResponse(ElasticsearchResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void ElasticsearchResponse::parseFailure(QIODevice &response)
{
    //Q_D(ElasticsearchResponse);
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
 * \class QtAws::Elasticsearch::ElasticsearchResponsePrivate
 * \brief The ElasticsearchResponsePrivate class provides private implementation for ElasticsearchResponse.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a ElasticsearchResponsePrivate object with public implementation \a q.
 */
ElasticsearchResponsePrivate::ElasticsearchResponsePrivate(
    ElasticsearchResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Elasticsearch
} // namespace QtAws
