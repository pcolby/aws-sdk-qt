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

#include "deprecateworkflowtyperesponse.h"
#include "deprecateworkflowtyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SWF {

/**
 * @class  DeprecateWorkflowTypeResponse
 *
 * @brief  Handles SWF DeprecateWorkflowType responses.
 *
 * @see    SWFClient::deprecateWorkflowType
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeprecateWorkflowTypeResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SWFResponse(new DeprecateWorkflowTypeResponsePrivate(this), parent)
{
    setRequest(new DeprecateWorkflowTypeRequest(request));
    setReply(reply);
}

const DeprecateWorkflowTypeRequest * DeprecateWorkflowTypeResponse::request() const
{
    Q_D(const DeprecateWorkflowTypeResponse);
    return static_cast<const DeprecateWorkflowTypeRequest *>(d->request);
}

/**
 * @brief  Parse a SWF DeprecateWorkflowType response.
 *
 * @param  response  Response to parse.
 */
void DeprecateWorkflowTypeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeprecateWorkflowTypeResponsePrivate
 *
 * @brief  Private implementation for DeprecateWorkflowTypeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeprecateWorkflowTypeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeprecateWorkflowTypeResponse instance.
 */
DeprecateWorkflowTypeResponsePrivate::DeprecateWorkflowTypeResponsePrivate(
    DeprecateWorkflowTypeQueueResponse * const q) : DeprecateWorkflowTypePrivate(q)
{

}

/**
 * @brief  Parse an SWF DeprecateWorkflowTypeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeprecateWorkflowTypeResponsePrivate::DeprecateWorkflowTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeprecateWorkflowTypeResponse"));
    /// @todo
}
