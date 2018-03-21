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

#include "resetjobbookmarkresponse.h"
#include "resetjobbookmarkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Glue {

/**
 * @class  ResetJobBookmarkResponse
 *
 * @brief  Handles Glue ResetJobBookmark responses.
 *
 * @see    GlueClient::resetJobBookmark
 */

/**
 * @brief  Constructs a new ResetJobBookmarkResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ResetJobBookmarkResponse::ResetJobBookmarkResponse(
        const ResetJobBookmarkRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new ResetJobBookmarkResponsePrivate(this), parent)
{
    setRequest(new ResetJobBookmarkRequest(request));
    setReply(reply);
}

const ResetJobBookmarkRequest * ResetJobBookmarkResponse::request() const
{
    Q_D(const ResetJobBookmarkResponse);
    return static_cast<const ResetJobBookmarkRequest *>(d->request);
}

/**
 * @brief  Parse a Glue ResetJobBookmark response.
 *
 * @param  response  Response to parse.
 */
void ResetJobBookmarkResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ResetJobBookmarkResponsePrivate
 *
 * @brief  Private implementation for ResetJobBookmarkResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ResetJobBookmarkResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ResetJobBookmarkResponse instance.
 */
ResetJobBookmarkResponsePrivate::ResetJobBookmarkResponsePrivate(
    ResetJobBookmarkQueueResponse * const q) : ResetJobBookmarkPrivate(q)
{

}

/**
 * @brief  Parse an Glue ResetJobBookmarkResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ResetJobBookmarkResponsePrivate::ResetJobBookmarkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResetJobBookmarkResponse"));
    /// @todo
}

} // namespace Glue
} // namespace AWS
