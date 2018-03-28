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

#include "cloudformationclientresponse.h"
#include "cloudformationclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudFormation {

/**
 * @class  CloudFormationClientResponse
 *
 * @brief  Handles CloudFormation CloudFormationClient responses.
 *
 * @see    CloudFormationClient::cloudFormationClient
 */

/**
 * @brief  Constructs a new CloudFormationClientResponse object.
 *
 * @param  parent   This object's parent.
 */
CloudFormationClientResponse::CloudFormationClientResponse(QObject * const parent)
    : AwsAbstractResponse(new CloudFormationClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  CloudFormationClientResponsePrivate
 *
 * @brief  Private implementation for CloudFormationClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CloudFormationClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CloudFormationClientResponse instance.
 */
CloudFormationClientResponsePrivate::CloudFormationClientResponsePrivate(
    CloudFormationClientQueueResponse * const q) : CloudFormationClientPrivate(q)
{

}

} // namespace CloudFormation
} // namespace AWS
