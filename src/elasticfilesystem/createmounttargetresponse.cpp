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

#include "createmounttargetresponse.h"
#include "createmounttargetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EFS {

/**
 * @class  CreateMountTargetResponse
 *
 * @brief  Handles EFS CreateMountTarget responses.
 *
 * @see    EFSClient::createMountTarget
 */

/**
 * @brief  Constructs a new CreateMountTargetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateMountTargetResponse::CreateMountTargetResponse(
        const CreateMountTargetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EFSResponse(new CreateMountTargetResponsePrivate(this), parent)
{
    setRequest(new CreateMountTargetRequest(request));
    setReply(reply);
}

const CreateMountTargetRequest * CreateMountTargetResponse::request() const
{
    Q_D(const CreateMountTargetResponse);
    return static_cast<const CreateMountTargetRequest *>(d->request);
}

/**
 * @brief  Parse a EFS CreateMountTarget response.
 *
 * @param  response  Response to parse.
 */
void CreateMountTargetResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateMountTargetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateMountTargetResponsePrivate
 *
 * @brief  Private implementation for CreateMountTargetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateMountTargetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateMountTargetResponse instance.
 */
CreateMountTargetResponsePrivate::CreateMountTargetResponsePrivate(
    CreateMountTargetResponse * const q) : EFSResponsePrivate(q)
{

}

/**
 * @brief  Parse an EFS CreateMountTargetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateMountTargetResponsePrivate::parseCreateMountTargetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateMountTargetResponse"));
    /// @todo
}

} // namespace EFS
} // namespace QtAws
