/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "elasticsearchserviceresponse.h"
#include "elasticsearchserviceresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticsearchService {

/**
 * @class  ElasticsearchServiceResponse
 *
 * @brief  Handles ElasticsearchService ElasticsearchService responses.
 *
 * @see    ElasticsearchServiceClient::elasticsearchService
 */

/**
 * @brief  Constructs a new ElasticsearchServiceResponse object.
 *
 * @param  parent   This object's parent.
 */
ElasticsearchServiceResponse::ElasticsearchServiceResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ElasticsearchServiceResponsePrivate(this), parent)
{

}

/**
 * @brief  Parse a failure response.
 *
 * @param  response  Response to parse.
 */
void ElasticsearchServiceResponse::parseFailure(QIODevice &response)
{
    Q_D(SqsResponse);
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

/**
 * @internal
 *
 * @class  ElasticsearchServiceResponsePrivate
 *
 * @brief  Private implementation for ElasticsearchServiceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ElasticsearchServiceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ElasticsearchServiceResponse instance.
 */
ElasticsearchServiceResponsePrivate::ElasticsearchServiceResponsePrivate(
    ElasticsearchServiceQueueResponse * const q) : ElasticsearchServicePrivate(q)
{

}

} // namespace ElasticsearchService
} // namespace QtAws
