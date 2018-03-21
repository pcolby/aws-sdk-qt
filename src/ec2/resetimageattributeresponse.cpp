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

#include "resetimageattributeresponse.h"
#include "resetimageattributeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  ResetImageAttributeResponse
 *
 * @brief  Handles EC2 ResetImageAttribute responses.
 *
 * @see    EC2Client::resetImageAttribute
 */

/**
 * @brief  Constructs a new ResetImageAttributeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ResetImageAttributeResponse::ResetImageAttributeResponse(
        const ResetImageAttributeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new ResetImageAttributeResponsePrivate(this), parent)
{
    setRequest(new ResetImageAttributeRequest(request));
    setReply(reply);
}

const ResetImageAttributeRequest * ResetImageAttributeResponse::request() const
{
    Q_D(const ResetImageAttributeResponse);
    return static_cast<const ResetImageAttributeRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 ResetImageAttribute response.
 *
 * @param  response  Response to parse.
 */
void ResetImageAttributeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ResetImageAttributeResponsePrivate
 *
 * @brief  Private implementation for ResetImageAttributeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ResetImageAttributeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ResetImageAttributeResponse instance.
 */
ResetImageAttributeResponsePrivate::ResetImageAttributeResponsePrivate(
    ResetImageAttributeQueueResponse * const q) : ResetImageAttributePrivate(q)
{

}

/**
 * @brief  Parse an EC2 ResetImageAttributeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ResetImageAttributeResponsePrivate::ResetImageAttributeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResetImageAttributeResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
