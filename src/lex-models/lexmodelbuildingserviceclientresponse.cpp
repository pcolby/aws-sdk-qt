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

#include "lexmodelbuildingserviceclientresponse.h"
#include "lexmodelbuildingserviceclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace  {

/**
 * @class  LexModelBuildingServiceClientResponse
 *
 * @brief  Handles  LexModelBuildingServiceClient responses.
 *
 * @see    Client::lexModelBuildingServiceClient
 */

/**
 * @brief  Constructs a new LexModelBuildingServiceClientResponse object.
 *
 * @param  parent   This object's parent.
 */
LexModelBuildingServiceClientResponse::LexModelBuildingServiceClientResponse(QObject * const parent)
    : AwsAbstractResponse(new LexModelBuildingServiceClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  LexModelBuildingServiceClientResponsePrivate
 *
 * @brief  Private implementation for LexModelBuildingServiceClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new LexModelBuildingServiceClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public LexModelBuildingServiceClientResponse instance.
 */
LexModelBuildingServiceClientResponsePrivate::LexModelBuildingServiceClientResponsePrivate(
    LexModelBuildingServiceClientQueueResponse * const q) : LexModelBuildingServiceClientPrivate(q)
{

}

} // namespace 
} // namespace AWS
