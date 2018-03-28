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

#include "stsclientresponse.h"
#include "stsclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace STS {

/**
 * @class  StsClientResponse
 *
 * @brief  Handles  StsClient responses.
 *
 * @see    Client::stsClient
 */

/**
 * @brief  Constructs a new StsClientResponse object.
 *
 * @param  parent   This object's parent.
 */
StsClientResponse::StsClientResponse(QObject * const parent)
    : AwsAbstractResponse(new StsClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  StsClientResponsePrivate
 *
 * @brief  Private implementation for StsClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StsClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StsClientResponse instance.
 */
StsClientResponsePrivate::StsClientResponsePrivate(
    StsClientQueueResponse * const q) : StsClientPrivate(q)
{

}

} // namespace STS
} // namespace AWS
