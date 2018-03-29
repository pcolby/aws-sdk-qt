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

#include "copyimageresponse.h"
#include "copyimageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  CopyImageResponse
 *
 * @brief  Handles EC2 CopyImage responses.
 *
 * @see    EC2Client::copyImage
 */

/**
 * @brief  Constructs a new CopyImageResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CopyImageResponse::CopyImageResponse(
        const CopyImageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new CopyImageResponsePrivate(this), parent)
{
    setRequest(new CopyImageRequest(request));
    setReply(reply);
}

const CopyImageRequest * CopyImageResponse::request() const
{
    Q_D(const CopyImageResponse);
    return static_cast<const CopyImageRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 CopyImage response.
 *
 * @param  response  Response to parse.
 */
void CopyImageResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CopyImageResponsePrivate
 *
 * @brief  Private implementation for CopyImageResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CopyImageResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CopyImageResponse instance.
 */
CopyImageResponsePrivate::CopyImageResponsePrivate(
    CopyImageResponse * const q) : EC2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an EC2 CopyImageResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CopyImageResponsePrivate::CopyImageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CopyImageResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
