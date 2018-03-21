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

#include "route53clientresponse.h"
#include "route53clientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace  {

/**
 * @class  Route53ClientResponse
 *
 * @brief  Handles  Route53Client responses.
 *
 * @see    Client::route53Client
 */

/**
 * @brief  Constructs a new Route53ClientResponse object.
 *
 * @param  parent   This object's parent.
 */
Route53ClientResponse::Route53ClientResponse(QObject * const parent)
    : AwsAbstractResponse(new Route53ClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  Route53ClientResponsePrivate
 *
 * @brief  Private implementation for Route53ClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new Route53ClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public Route53ClientResponse instance.
 */
Route53ClientResponsePrivate::Route53ClientResponsePrivate(
    Route53ClientQueueResponse * const q) : Route53ClientPrivate(q)
{

}

} // namespace 
} // namespace AWS
