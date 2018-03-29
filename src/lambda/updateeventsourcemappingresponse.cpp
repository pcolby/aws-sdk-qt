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

#include "updateeventsourcemappingresponse.h"
#include "updateeventsourcemappingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lambda {

/**
 * @class  UpdateEventSourceMappingResponse
 *
 * @brief  Handles Lambda UpdateEventSourceMapping responses.
 *
 * @see    LambdaClient::updateEventSourceMapping
 */

/**
 * @brief  Constructs a new UpdateEventSourceMappingResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateEventSourceMappingResponse::UpdateEventSourceMappingResponse(
        const UpdateEventSourceMappingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LambdaResponse(new UpdateEventSourceMappingResponsePrivate(this), parent)
{
    setRequest(new UpdateEventSourceMappingRequest(request));
    setReply(reply);
}

const UpdateEventSourceMappingRequest * UpdateEventSourceMappingResponse::request() const
{
    Q_D(const UpdateEventSourceMappingResponse);
    return static_cast<const UpdateEventSourceMappingRequest *>(d->request);
}

/**
 * @brief  Parse a Lambda UpdateEventSourceMapping response.
 *
 * @param  response  Response to parse.
 */
void UpdateEventSourceMappingResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateEventSourceMappingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateEventSourceMappingResponsePrivate
 *
 * @brief  Private implementation for UpdateEventSourceMappingResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateEventSourceMappingResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateEventSourceMappingResponse instance.
 */
UpdateEventSourceMappingResponsePrivate::UpdateEventSourceMappingResponsePrivate(
    UpdateEventSourceMappingResponse * const q) : LambdaResponsePrivate(q)
{

}

/**
 * @brief  Parse an Lambda UpdateEventSourceMappingResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateEventSourceMappingResponsePrivate::UpdateEventSourceMappingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateEventSourceMappingResponse"));
    /// @todo
}

} // namespace Lambda
} // namespace QtAws
