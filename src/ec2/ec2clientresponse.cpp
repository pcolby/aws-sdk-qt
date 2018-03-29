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

#include "ec2clientresponse.h"
#include "ec2clientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  Ec2ClientResponse
 *
 * @brief  Handles EC2 Ec2Client responses.
 *
 * @see    EC2Client::ec2Client
 */

/**
 * @brief  Constructs a new Ec2ClientResponse object.
 *
 * @param  parent   This object's parent.
 */
Ec2ClientResponse::Ec2ClientResponse(QObject * const parent)
    : AwsAbstractResponse(new Ec2ClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  Ec2ClientResponsePrivate
 *
 * @brief  Private implementation for Ec2ClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new Ec2ClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public Ec2ClientResponse instance.
 */
Ec2ClientResponsePrivate::Ec2ClientResponsePrivate(
    Ec2ClientQueueResponse * const q) : Ec2ClientPrivate(q)
{

}

} // namespace EC2
} // namespace QtAws
