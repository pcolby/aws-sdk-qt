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

#include "createhsmresponse.h"
#include "createhsmresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudHSM {

/**
 * @class  CreateHsmResponse
 *
 * @brief  Handles CloudHSM CreateHsm responses.
 *
 * @see    CloudHSMClient::createHsm
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateHsmResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHSMResponse(new CreateHsmResponsePrivate(this), parent)
{
    setRequest(new CreateHsmRequest(request));
    setReply(reply);
}

const CreateHsmRequest * CreateHsmResponse::request() const
{
    Q_D(const CreateHsmResponse);
    return static_cast<const CreateHsmRequest *>(d->request);
}

/**
 * @brief  Parse a CloudHSM CreateHsm response.
 *
 * @param  response  Response to parse.
 */
void CreateHsmResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateHsmResponsePrivate
 *
 * @brief  Private implementation for CreateHsmResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateHsmResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateHsmResponse instance.
 */
CreateHsmResponsePrivate::CreateHsmResponsePrivate(
    CreateHsmQueueResponse * const q) : CreateHsmPrivate(q)
{

}

/**
 * @brief  Parse an CloudHSM CreateHsmResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateHsmResponsePrivate::CreateHsmResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateHsmResponse"));
    /// @todo
}
