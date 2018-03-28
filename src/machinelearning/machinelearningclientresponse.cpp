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

#include "machinelearningclientresponse.h"
#include "machinelearningclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace MachineLearning {

/**
 * @class  MachineLearningClientResponse
 *
 * @brief  Handles MachineLearning MachineLearningClient responses.
 *
 * @see    MachineLearningClient::machineLearningClient
 */

/**
 * @brief  Constructs a new MachineLearningClientResponse object.
 *
 * @param  parent   This object's parent.
 */
MachineLearningClientResponse::MachineLearningClientResponse(QObject * const parent)
    : AwsAbstractResponse(new MachineLearningClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  MachineLearningClientResponsePrivate
 *
 * @brief  Private implementation for MachineLearningClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new MachineLearningClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public MachineLearningClientResponse instance.
 */
MachineLearningClientResponsePrivate::MachineLearningClientResponsePrivate(
    MachineLearningClientQueueResponse * const q) : MachineLearningClientPrivate(q)
{

}

} // namespace MachineLearning
} // namespace AWS
