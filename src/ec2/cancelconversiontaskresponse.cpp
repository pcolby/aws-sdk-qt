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

#include "cancelconversiontaskresponse.h"
#include "cancelconversiontaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  CancelConversionTaskResponse
 *
 * @brief  Handles EC2 CancelConversionTask responses.
 *
 * @see    EC2Client::cancelConversionTask
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CancelConversionTaskResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new CancelConversionTaskResponsePrivate(this), parent)
{
    setRequest(new CancelConversionTaskRequest(request));
    setReply(reply);
}

const CancelConversionTaskRequest * CancelConversionTaskResponse::request() const
{
    Q_D(const CancelConversionTaskResponse);
    return static_cast<const CancelConversionTaskRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 CancelConversionTask response.
 *
 * @param  response  Response to parse.
 */
void CancelConversionTaskResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CancelConversionTaskResponsePrivate
 *
 * @brief  Private implementation for CancelConversionTaskResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CancelConversionTaskResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CancelConversionTaskResponse instance.
 */
CancelConversionTaskResponsePrivate::CancelConversionTaskResponsePrivate(
    CancelConversionTaskQueueResponse * const q) : CancelConversionTaskPrivate(q)
{

}

/**
 * @brief  Parse an EC2 CancelConversionTaskResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CancelConversionTaskResponsePrivate::CancelConversionTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelConversionTaskResponse"));
    /// @todo
}
