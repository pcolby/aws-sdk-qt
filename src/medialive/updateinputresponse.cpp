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

#include "updateinputresponse.h"
#include "updateinputresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/**
 * @class  UpdateInputResponse
 *
 * @brief  Handles MediaLive UpdateInput responses.
 *
 * @see    MediaLiveClient::updateInput
 */

/**
 * @brief  Constructs a new UpdateInputResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateInputResponse::UpdateInputResponse(
        const UpdateInputRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new UpdateInputResponsePrivate(this), parent)
{
    setRequest(new UpdateInputRequest(request));
    setReply(reply);
}

const UpdateInputRequest * UpdateInputResponse::request() const
{
    Q_D(const UpdateInputResponse);
    return static_cast<const UpdateInputRequest *>(d->request);
}

/**
 * @brief  Parse a MediaLive UpdateInput response.
 *
 * @param  response  Response to parse.
 */
void UpdateInputResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateInputResponsePrivate
 *
 * @brief  Private implementation for UpdateInputResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateInputResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateInputResponse instance.
 */
UpdateInputResponsePrivate::UpdateInputResponsePrivate(
    UpdateInputResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/**
 * @brief  Parse an MediaLive UpdateInputResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateInputResponsePrivate::UpdateInputResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateInputResponse"));
    /// @todo
}

} // namespace MediaLive
} // namespace QtAws
