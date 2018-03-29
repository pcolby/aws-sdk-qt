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

#include "createuploadresponse.h"
#include "createuploadresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/**
 * @class  CreateUploadResponse
 *
 * @brief  Handles DeviceFarm CreateUpload responses.
 *
 * @see    DeviceFarmClient::createUpload
 */

/**
 * @brief  Constructs a new CreateUploadResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateUploadResponse::CreateUploadResponse(
        const CreateUploadRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CreateUploadResponse(new CreateUploadResponsePrivate(this), parent)
{
    setRequest(new CreateUploadRequest(request));
    setReply(reply);
}

const CreateUploadRequest * CreateUploadResponse::request() const
{
    Q_D(const CreateUploadResponse);
    return static_cast<const CreateUploadRequest *>(d->request);
}

/**
 * @brief  Parse a DeviceFarm CreateUpload response.
 *
 * @param  response  Response to parse.
 */
void CreateUploadResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateUploadResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateUploadResponsePrivate
 *
 * @brief  Private implementation for CreateUploadResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateUploadResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateUploadResponse instance.
 */
CreateUploadResponsePrivate::CreateUploadResponsePrivate(
    CreateUploadResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/**
 * @brief  Parse an DeviceFarm CreateUploadResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateUploadResponsePrivate::parseCreateUploadResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateUploadResponse"));
    /// @todo
}

} // namespace DeviceFarm
} // namespace QtAws
