/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "elasticsearchserviceclientresponse.h"
#include "elasticsearchserviceclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace  {

/**
 * @class  ElasticsearchServiceClientResponse
 *
 * @brief  Handles  ElasticsearchServiceClient responses.
 *
 * @see    Client::elasticsearchServiceClient
 */

/**
 * @brief  Constructs a new ElasticsearchServiceClientResponse object.
 *
 * @param  parent   This object's parent.
 */
ElasticsearchServiceClientResponse::ElasticsearchServiceClientResponse(QObject * const parent)
    : AwsAbstractResponse(new ElasticsearchServiceClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  ElasticsearchServiceClientResponsePrivate
 *
 * @brief  Private implementation for ElasticsearchServiceClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ElasticsearchServiceClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ElasticsearchServiceClientResponse instance.
 */
ElasticsearchServiceClientResponsePrivate::ElasticsearchServiceClientResponsePrivate(
    ElasticsearchServiceClientQueueResponse * const q) : ElasticsearchServiceClientPrivate(q)
{

}

} // namespace 
} // namespace AWS
