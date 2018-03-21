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

#include "listjobtemplatesresponse.h"
#include "listjobtemplatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MediaConvert {

/**
 * @class  ListJobTemplatesResponse
 *
 * @brief  Handles MediaConvert ListJobTemplates responses.
 *
 * @see    MediaConvertClient::listJobTemplates
 */

/**
 * @brief  Constructs a new ListJobTemplatesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListJobTemplatesResponse::ListJobTemplatesResponse(
        const ListJobTemplatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConvertResponse(new ListJobTemplatesResponsePrivate(this), parent)
{
    setRequest(new ListJobTemplatesRequest(request));
    setReply(reply);
}

const ListJobTemplatesRequest * ListJobTemplatesResponse::request() const
{
    Q_D(const ListJobTemplatesResponse);
    return static_cast<const ListJobTemplatesRequest *>(d->request);
}

/**
 * @brief  Parse a MediaConvert ListJobTemplates response.
 *
 * @param  response  Response to parse.
 */
void ListJobTemplatesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListJobTemplatesResponsePrivate
 *
 * @brief  Private implementation for ListJobTemplatesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListJobTemplatesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListJobTemplatesResponse instance.
 */
ListJobTemplatesResponsePrivate::ListJobTemplatesResponsePrivate(
    ListJobTemplatesQueueResponse * const q) : ListJobTemplatesPrivate(q)
{

}

/**
 * @brief  Parse an MediaConvert ListJobTemplatesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListJobTemplatesResponsePrivate::ListJobTemplatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListJobTemplatesResponse"));
    /// @todo
}

} // namespace MediaConvert
} // namespace AWS
