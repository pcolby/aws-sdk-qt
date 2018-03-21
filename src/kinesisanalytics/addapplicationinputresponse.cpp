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

#include "addapplicationinputresponse.h"
#include "addapplicationinputresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace KinesisAnalytics {

/**
 * @class  AddApplicationInputResponse
 *
 * @brief  Handles KinesisAnalytics AddApplicationInput responses.
 *
 * @see    KinesisAnalyticsClient::addApplicationInput
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AddApplicationInputResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisAnalyticsResponse(new AddApplicationInputResponsePrivate(this), parent)
{
    setRequest(new AddApplicationInputRequest(request));
    setReply(reply);
}

const AddApplicationInputRequest * AddApplicationInputResponse::request() const
{
    Q_D(const AddApplicationInputResponse);
    return static_cast<const AddApplicationInputRequest *>(d->request);
}

/**
 * @brief  Parse a KinesisAnalytics AddApplicationInput response.
 *
 * @param  response  Response to parse.
 */
void AddApplicationInputResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AddApplicationInputResponsePrivate
 *
 * @brief  Private implementation for AddApplicationInputResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddApplicationInputResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AddApplicationInputResponse instance.
 */
AddApplicationInputResponsePrivate::AddApplicationInputResponsePrivate(
    AddApplicationInputQueueResponse * const q) : AddApplicationInputPrivate(q)
{

}

/**
 * @brief  Parse an KinesisAnalytics AddApplicationInputResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AddApplicationInputResponsePrivate::AddApplicationInputResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddApplicationInputResponse"));
    /// @todo
}
