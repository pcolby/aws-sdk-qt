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

#include "redshiftclientresponse.h"
#include "redshiftclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace Redshift {

/**
 * @class  RedshiftClientResponse
 *
 * @brief  Handles Redshift RedshiftClient responses.
 *
 * @see    RedshiftClient::redshiftClient
 */

/**
 * @brief  Constructs a new RedshiftClientResponse object.
 *
 * @param  parent   This object's parent.
 */
RedshiftClientResponse::RedshiftClientResponse(QObject * const parent)
    : AwsAbstractResponse(new RedshiftClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  RedshiftClientResponsePrivate
 *
 * @brief  Private implementation for RedshiftClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RedshiftClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RedshiftClientResponse instance.
 */
RedshiftClientResponsePrivate::RedshiftClientResponsePrivate(
    RedshiftClientQueueResponse * const q) : RedshiftClientPrivate(q)
{

}

} // namespace Redshift
} // namespace AWS
