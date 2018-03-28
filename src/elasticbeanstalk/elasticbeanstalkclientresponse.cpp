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

#include "elasticbeanstalkclientresponse.h"
#include "elasticbeanstalkclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace ElasticBeanstalk {

/**
 * @class  ElasticBeanstalkClientResponse
 *
 * @brief  Handles  ElasticBeanstalkClient responses.
 *
 * @see    Client::elasticBeanstalkClient
 */

/**
 * @brief  Constructs a new ElasticBeanstalkClientResponse object.
 *
 * @param  parent   This object's parent.
 */
ElasticBeanstalkClientResponse::ElasticBeanstalkClientResponse(QObject * const parent)
    : AwsAbstractResponse(new ElasticBeanstalkClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  ElasticBeanstalkClientResponsePrivate
 *
 * @brief  Private implementation for ElasticBeanstalkClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ElasticBeanstalkClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ElasticBeanstalkClientResponse instance.
 */
ElasticBeanstalkClientResponsePrivate::ElasticBeanstalkClientResponsePrivate(
    ElasticBeanstalkClientQueueResponse * const q) : ElasticBeanstalkClientPrivate(q)
{

}

} // namespace ElasticBeanstalk
} // namespace AWS
