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

#include "createdefaultsubnetresponse.h"
#include "createdefaultsubnetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  CreateDefaultSubnetResponse
 *
 * @brief  Handles EC2 CreateDefaultSubnet responses.
 *
 * @see    EC2Client::createDefaultSubnet
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateDefaultSubnetResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new CreateDefaultSubnetResponsePrivate(this), parent)
{
    setRequest(new CreateDefaultSubnetRequest(request));
    setReply(reply);
}

const CreateDefaultSubnetRequest * CreateDefaultSubnetResponse::request() const
{
    Q_D(const CreateDefaultSubnetResponse);
    return static_cast<const CreateDefaultSubnetRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 CreateDefaultSubnet response.
 *
 * @param  response  Response to parse.
 */
void CreateDefaultSubnetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateDefaultSubnetResponsePrivate
 *
 * @brief  Private implementation for CreateDefaultSubnetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDefaultSubnetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateDefaultSubnetResponse instance.
 */
CreateDefaultSubnetResponsePrivate::CreateDefaultSubnetResponsePrivate(
    CreateDefaultSubnetQueueResponse * const q) : CreateDefaultSubnetPrivate(q)
{

}

/**
 * @brief  Parse an EC2 CreateDefaultSubnetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateDefaultSubnetResponsePrivate::CreateDefaultSubnetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDefaultSubnetResponse"));
    /// @todo
}
