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

#include "getactivitytaskresponse.h"
#include "getactivitytaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SFN {

/**
 * @class  GetActivityTaskResponse
 *
 * @brief  Handles SFN GetActivityTask responses.
 *
 * @see    SFNClient::getActivityTask
 */

/**
 * @brief  Constructs a new GetActivityTaskResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetActivityTaskResponse::GetActivityTaskResponse(
        const GetActivityTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SFNResponse(new GetActivityTaskResponsePrivate(this), parent)
{
    setRequest(new GetActivityTaskRequest(request));
    setReply(reply);
}

const GetActivityTaskRequest * GetActivityTaskResponse::request() const
{
    Q_D(const GetActivityTaskResponse);
    return static_cast<const GetActivityTaskRequest *>(d->request);
}

/**
 * @brief  Parse a SFN GetActivityTask response.
 *
 * @param  response  Response to parse.
 */
void GetActivityTaskResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetActivityTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetActivityTaskResponsePrivate
 *
 * @brief  Private implementation for GetActivityTaskResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetActivityTaskResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetActivityTaskResponse instance.
 */
GetActivityTaskResponsePrivate::GetActivityTaskResponsePrivate(
    GetActivityTaskResponse * const q) : SFNResponsePrivate(q)
{

}

/**
 * @brief  Parse an SFN GetActivityTaskResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetActivityTaskResponsePrivate::parseGetActivityTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetActivityTaskResponse"));
    /// @todo
}

} // namespace SFN
} // namespace QtAws
