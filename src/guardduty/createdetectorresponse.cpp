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

#include "createdetectorresponse.h"
#include "createdetectorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace GuardDuty {

/**
 * @class  CreateDetectorResponse
 *
 * @brief  Handles GuardDuty CreateDetector responses.
 *
 * @see    GuardDutyClient::createDetector
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateDetectorResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new CreateDetectorResponsePrivate(this), parent)
{
    setRequest(new CreateDetectorRequest(request));
    setReply(reply);
}

const CreateDetectorRequest * CreateDetectorResponse::request() const
{
    Q_D(const CreateDetectorResponse);
    return static_cast<const CreateDetectorRequest *>(d->request);
}

/**
 * @brief  Parse a GuardDuty CreateDetector response.
 *
 * @param  response  Response to parse.
 */
void CreateDetectorResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateDetectorResponsePrivate
 *
 * @brief  Private implementation for CreateDetectorResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDetectorResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateDetectorResponse instance.
 */
CreateDetectorResponsePrivate::CreateDetectorResponsePrivate(
    CreateDetectorQueueResponse * const q) : CreateDetectorPrivate(q)
{

}

/**
 * @brief  Parse an GuardDuty CreateDetectorResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateDetectorResponsePrivate::CreateDetectorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDetectorResponse"));
    /// @todo
}
