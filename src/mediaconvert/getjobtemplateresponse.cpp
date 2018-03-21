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

#include "getjobtemplateresponse.h"
#include "getjobtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MediaConvert {

/**
 * @class  GetJobTemplateResponse
 *
 * @brief  Handles MediaConvert GetJobTemplate responses.
 *
 * @see    MediaConvertClient::getJobTemplate
 */

/**
 * @brief  Constructs a new GetJobTemplateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetJobTemplateResponse::GetJobTemplateResponse(
        const GetJobTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConvertResponse(new GetJobTemplateResponsePrivate(this), parent)
{
    setRequest(new GetJobTemplateRequest(request));
    setReply(reply);
}

const GetJobTemplateRequest * GetJobTemplateResponse::request() const
{
    Q_D(const GetJobTemplateResponse);
    return static_cast<const GetJobTemplateRequest *>(d->request);
}

/**
 * @brief  Parse a MediaConvert GetJobTemplate response.
 *
 * @param  response  Response to parse.
 */
void GetJobTemplateResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetJobTemplateResponsePrivate
 *
 * @brief  Private implementation for GetJobTemplateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetJobTemplateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetJobTemplateResponse instance.
 */
GetJobTemplateResponsePrivate::GetJobTemplateResponsePrivate(
    GetJobTemplateQueueResponse * const q) : GetJobTemplatePrivate(q)
{

}

/**
 * @brief  Parse an MediaConvert GetJobTemplateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetJobTemplateResponsePrivate::GetJobTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetJobTemplateResponse"));
    /// @todo
}

} // namespace MediaConvert
} // namespace AWS
