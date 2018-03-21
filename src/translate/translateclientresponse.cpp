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

#include "translateclientresponse.h"
#include "translateclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace  {

/**
 * @class  TranslateClientResponse
 *
 * @brief  Handles  TranslateClient responses.
 *
 * @see    Client::translateClient
 */

/**
 * @brief  Constructs a new TranslateClientResponse object.
 *
 * @param  parent   This object's parent.
 */
TranslateClientResponse::TranslateClientResponse(QObject * const parent)
    : AwsAbstractResponse(new TranslateClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  TranslateClientResponsePrivate
 *
 * @brief  Private implementation for TranslateClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new TranslateClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public TranslateClientResponse instance.
 */
TranslateClientResponsePrivate::TranslateClientResponsePrivate(
    TranslateClientQueueResponse * const q) : TranslateClientPrivate(q)
{

}

} // namespace 
} // namespace AWS
