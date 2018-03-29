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

#include "updatebytematchsetresponse.h"
#include "updatebytematchsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAF {

/**
 * @class  UpdateByteMatchSetResponse
 *
 * @brief  Handles WAF UpdateByteMatchSet responses.
 *
 * @see    WAFClient::updateByteMatchSet
 */

/**
 * @brief  Constructs a new UpdateByteMatchSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateByteMatchSetResponse::UpdateByteMatchSetResponse(
        const UpdateByteMatchSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : UpdateByteMatchSetResponse(new UpdateByteMatchSetResponsePrivate(this), parent)
{
    setRequest(new UpdateByteMatchSetRequest(request));
    setReply(reply);
}

const UpdateByteMatchSetRequest * UpdateByteMatchSetResponse::request() const
{
    Q_D(const UpdateByteMatchSetResponse);
    return static_cast<const UpdateByteMatchSetRequest *>(d->request);
}

/**
 * @brief  Parse a WAF UpdateByteMatchSet response.
 *
 * @param  response  Response to parse.
 */
void UpdateByteMatchSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateByteMatchSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateByteMatchSetResponsePrivate
 *
 * @brief  Private implementation for UpdateByteMatchSetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateByteMatchSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateByteMatchSetResponse instance.
 */
UpdateByteMatchSetResponsePrivate::UpdateByteMatchSetResponsePrivate(
    UpdateByteMatchSetResponse * const q) : WAFResponsePrivate(q)
{

}

/**
 * @brief  Parse an WAF UpdateByteMatchSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateByteMatchSetResponsePrivate::parseUpdateByteMatchSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateByteMatchSetResponse"));
    /// @todo
}

} // namespace WAF
} // namespace QtAws
