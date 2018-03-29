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

#include "cloudhsmv2clientresponse.h"
#include "cloudhsmv2clientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHSMV2 {

/**
 * @class  CloudHSMV2ClientResponse
 *
 * @brief  Handles CloudHSMV2 CloudHSMV2Client responses.
 *
 * @see    CloudHSMV2Client::cloudHSMV2Client
 */

/**
 * @brief  Constructs a new CloudHSMV2ClientResponse object.
 *
 * @param  parent   This object's parent.
 */
CloudHSMV2ClientResponse::CloudHSMV2ClientResponse(QObject * const parent)
    : AwsAbstractResponse(new CloudHSMV2ClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  CloudHSMV2ClientResponsePrivate
 *
 * @brief  Private implementation for CloudHSMV2ClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CloudHSMV2ClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CloudHSMV2ClientResponse instance.
 */
CloudHSMV2ClientResponsePrivate::CloudHSMV2ClientResponsePrivate(
    CloudHSMV2ClientQueueResponse * const q) : CloudHSMV2ClientPrivate(q)
{

}

} // namespace CloudHSMV2
} // namespace QtAws
