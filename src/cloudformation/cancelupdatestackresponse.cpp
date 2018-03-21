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

#include "cancelupdatestackresponse.h"
#include "cancelupdatestackresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudFormation {

/**
 * @class  CancelUpdateStackResponse
 *
 * @brief  Handles CloudFormation CancelUpdateStack responses.
 *
 * @see    CloudFormationClient::cancelUpdateStack
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CancelUpdateStackResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFormationResponse(new CancelUpdateStackResponsePrivate(this), parent)
{
    setRequest(new CancelUpdateStackRequest(request));
    setReply(reply);
}

const CancelUpdateStackRequest * CancelUpdateStackResponse::request() const
{
    Q_D(const CancelUpdateStackResponse);
    return static_cast<const CancelUpdateStackRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFormation CancelUpdateStack response.
 *
 * @param  response  Response to parse.
 */
void CancelUpdateStackResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CancelUpdateStackResponsePrivate
 *
 * @brief  Private implementation for CancelUpdateStackResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CancelUpdateStackResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CancelUpdateStackResponse instance.
 */
CancelUpdateStackResponsePrivate::CancelUpdateStackResponsePrivate(
    CancelUpdateStackQueueResponse * const q) : CancelUpdateStackPrivate(q)
{

}

/**
 * @brief  Parse an CloudFormation CancelUpdateStackResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CancelUpdateStackResponsePrivate::CancelUpdateStackResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelUpdateStackResponse"));
    /// @todo
}
