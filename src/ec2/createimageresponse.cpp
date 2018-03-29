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

#include "createimageresponse.h"
#include "createimageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  CreateImageResponse
 *
 * @brief  Handles EC2 CreateImage responses.
 *
 * @see    EC2Client::createImage
 */

/**
 * @brief  Constructs a new CreateImageResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateImageResponse::CreateImageResponse(
        const CreateImageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new CreateImageResponsePrivate(this), parent)
{
    setRequest(new CreateImageRequest(request));
    setReply(reply);
}

const CreateImageRequest * CreateImageResponse::request() const
{
    Q_D(const CreateImageResponse);
    return static_cast<const CreateImageRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 CreateImage response.
 *
 * @param  response  Response to parse.
 */
void CreateImageResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateImageResponsePrivate
 *
 * @brief  Private implementation for CreateImageResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateImageResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateImageResponse instance.
 */
CreateImageResponsePrivate::CreateImageResponsePrivate(
    CreateImageQueueResponse * const q) : CreateImagePrivate(q)
{

}

/**
 * @brief  Parse an EC2 CreateImageResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateImageResponsePrivate::CreateImageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateImageResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
