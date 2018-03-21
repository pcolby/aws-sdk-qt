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

#include "resetfpgaimageattributeresponse.h"
#include "resetfpgaimageattributeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  ResetFpgaImageAttributeResponse
 *
 * @brief  Handles EC2 ResetFpgaImageAttribute responses.
 *
 * @see    EC2Client::resetFpgaImageAttribute
 */

/**
 * @brief  Constructs a new ResetFpgaImageAttributeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ResetFpgaImageAttributeResponse::ResetFpgaImageAttributeResponse(
        const ResetFpgaImageAttributeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new ResetFpgaImageAttributeResponsePrivate(this), parent)
{
    setRequest(new ResetFpgaImageAttributeRequest(request));
    setReply(reply);
}

const ResetFpgaImageAttributeRequest * ResetFpgaImageAttributeResponse::request() const
{
    Q_D(const ResetFpgaImageAttributeResponse);
    return static_cast<const ResetFpgaImageAttributeRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 ResetFpgaImageAttribute response.
 *
 * @param  response  Response to parse.
 */
void ResetFpgaImageAttributeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ResetFpgaImageAttributeResponsePrivate
 *
 * @brief  Private implementation for ResetFpgaImageAttributeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ResetFpgaImageAttributeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ResetFpgaImageAttributeResponse instance.
 */
ResetFpgaImageAttributeResponsePrivate::ResetFpgaImageAttributeResponsePrivate(
    ResetFpgaImageAttributeQueueResponse * const q) : ResetFpgaImageAttributePrivate(q)
{

}

/**
 * @brief  Parse an EC2 ResetFpgaImageAttributeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ResetFpgaImageAttributeResponsePrivate::ResetFpgaImageAttributeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResetFpgaImageAttributeResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
