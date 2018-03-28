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

#include "cloud9clientresponse.h"
#include "cloud9clientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace Cloud9 {

/**
 * @class  Cloud9ClientResponse
 *
 * @brief  Handles  Cloud9Client responses.
 *
 * @see    Client::cloud9Client
 */

/**
 * @brief  Constructs a new Cloud9ClientResponse object.
 *
 * @param  parent   This object's parent.
 */
Cloud9ClientResponse::Cloud9ClientResponse(QObject * const parent)
    : AwsAbstractResponse(new Cloud9ClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  Cloud9ClientResponsePrivate
 *
 * @brief  Private implementation for Cloud9ClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new Cloud9ClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public Cloud9ClientResponse instance.
 */
Cloud9ClientResponsePrivate::Cloud9ClientResponsePrivate(
    Cloud9ClientQueueResponse * const q) : Cloud9ClientPrivate(q)
{

}

} // namespace Cloud9
} // namespace AWS
