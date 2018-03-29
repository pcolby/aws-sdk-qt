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

#include "createfpgaimageresponse.h"
#include "createfpgaimageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  CreateFpgaImageResponse
 *
 * @brief  Handles EC2 CreateFpgaImage responses.
 *
 * @see    EC2Client::createFpgaImage
 */

/**
 * @brief  Constructs a new CreateFpgaImageResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateFpgaImageResponse::CreateFpgaImageResponse(
        const CreateFpgaImageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new CreateFpgaImageResponsePrivate(this), parent)
{
    setRequest(new CreateFpgaImageRequest(request));
    setReply(reply);
}

const CreateFpgaImageRequest * CreateFpgaImageResponse::request() const
{
    Q_D(const CreateFpgaImageResponse);
    return static_cast<const CreateFpgaImageRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 CreateFpgaImage response.
 *
 * @param  response  Response to parse.
 */
void CreateFpgaImageResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateFpgaImageResponsePrivate
 *
 * @brief  Private implementation for CreateFpgaImageResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateFpgaImageResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateFpgaImageResponse instance.
 */
CreateFpgaImageResponsePrivate::CreateFpgaImageResponsePrivate(
    CreateFpgaImageQueueResponse * const q) : CreateFpgaImagePrivate(q)
{

}

/**
 * @brief  Parse an EC2 CreateFpgaImageResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateFpgaImageResponsePrivate::CreateFpgaImageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateFpgaImageResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
