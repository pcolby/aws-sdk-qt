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

#include "modifyinstancecreditspecificationresponse.h"
#include "modifyinstancecreditspecificationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  ModifyInstanceCreditSpecificationResponse
 *
 * @brief  Handles EC2 ModifyInstanceCreditSpecification responses.
 *
 * @see    EC2Client::modifyInstanceCreditSpecification
 */

/**
 * @brief  Constructs a new ModifyInstanceCreditSpecificationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyInstanceCreditSpecificationResponse::ModifyInstanceCreditSpecificationResponse(
        const ModifyInstanceCreditSpecificationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new ModifyInstanceCreditSpecificationResponsePrivate(this), parent)
{
    setRequest(new ModifyInstanceCreditSpecificationRequest(request));
    setReply(reply);
}

const ModifyInstanceCreditSpecificationRequest * ModifyInstanceCreditSpecificationResponse::request() const
{
    Q_D(const ModifyInstanceCreditSpecificationResponse);
    return static_cast<const ModifyInstanceCreditSpecificationRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 ModifyInstanceCreditSpecification response.
 *
 * @param  response  Response to parse.
 */
void ModifyInstanceCreditSpecificationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ModifyInstanceCreditSpecificationResponsePrivate
 *
 * @brief  Private implementation for ModifyInstanceCreditSpecificationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyInstanceCreditSpecificationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ModifyInstanceCreditSpecificationResponse instance.
 */
ModifyInstanceCreditSpecificationResponsePrivate::ModifyInstanceCreditSpecificationResponsePrivate(
    ModifyInstanceCreditSpecificationQueueResponse * const q) : ModifyInstanceCreditSpecificationPrivate(q)
{

}

/**
 * @brief  Parse an EC2 ModifyInstanceCreditSpecificationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifyInstanceCreditSpecificationResponsePrivate::ModifyInstanceCreditSpecificationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyInstanceCreditSpecificationResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
