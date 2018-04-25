/*
    Copyright 2013-2018 Paul Colby

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

#include "elasticsearchserviceresponse.h"
#include "elasticsearchserviceresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticsearchService {

/*!
 * \class QtAws::ElasticsearchService::ElasticsearchServiceResponse
 * \brief The ElasticsearchServiceResponse class provides an interface for ElasticsearchService responses.
 *
 * \inmodule QtAwsElasticsearchService
 */

/*!
 * Constructs a ElasticsearchServiceResponse object with parent \a parent.
 */
ElasticsearchServiceResponse::ElasticsearchServiceResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ElasticsearchServiceResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a ElasticsearchServiceResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ElasticsearchServiceResponsePrivate.
 */
ElasticsearchServiceResponse::ElasticsearchServiceResponse(ElasticsearchServiceResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void ElasticsearchServiceResponse::parseFailure(QIODevice &response)
{
    Q_D(ElasticsearchServiceResponse);
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
 * \class QtAws::ElasticsearchService::ElasticsearchServiceResponsePrivate
 * \brief The ElasticsearchServiceResponsePrivate class provides private implementation for ElasticsearchServiceResponse.
 * \internal
 *
 * \inmodule QtAwsElasticsearchService
 */

/*!
 * Constructs a ElasticsearchServiceResponsePrivate object with public implementation \a q.
 */
ElasticsearchServiceResponsePrivate::ElasticsearchServiceResponsePrivate(
    ElasticsearchServiceResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace ElasticsearchService
} // namespace QtAws
