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

#include "inspectorclientresponse.h"
#include "inspectorclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace Inspector {

/**
 * @class  InspectorClientResponse
 *
 * @brief  Handles Inspector InspectorClient responses.
 *
 * @see    InspectorClient::inspectorClient
 */

/**
 * @brief  Constructs a new InspectorClientResponse object.
 *
 * @param  parent   This object's parent.
 */
InspectorClientResponse::InspectorClientResponse(QObject * const parent)
    : AwsAbstractResponse(new InspectorClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  InspectorClientResponsePrivate
 *
 * @brief  Private implementation for InspectorClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new InspectorClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public InspectorClientResponse instance.
 */
InspectorClientResponsePrivate::InspectorClientResponsePrivate(
    InspectorClientQueueResponse * const q) : InspectorClientPrivate(q)
{

}

} // namespace Inspector
} // namespace AWS
