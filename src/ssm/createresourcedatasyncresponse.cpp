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

#include "createresourcedatasyncresponse.h"
#include "createresourcedatasyncresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/**
 * @class  CreateResourceDataSyncResponse
 *
 * @brief  Handles SSM CreateResourceDataSync responses.
 *
 * @see    SSMClient::createResourceDataSync
 */

/**
 * @brief  Constructs a new CreateResourceDataSyncResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateResourceDataSyncResponse::CreateResourceDataSyncResponse(
        const CreateResourceDataSyncRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new CreateResourceDataSyncResponsePrivate(this), parent)
{
    setRequest(new CreateResourceDataSyncRequest(request));
    setReply(reply);
}

const CreateResourceDataSyncRequest * CreateResourceDataSyncResponse::request() const
{
    Q_D(const CreateResourceDataSyncResponse);
    return static_cast<const CreateResourceDataSyncRequest *>(d->request);
}

/**
 * @brief  Parse a SSM CreateResourceDataSync response.
 *
 * @param  response  Response to parse.
 */
void CreateResourceDataSyncResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateResourceDataSyncResponsePrivate
 *
 * @brief  Private implementation for CreateResourceDataSyncResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateResourceDataSyncResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateResourceDataSyncResponse instance.
 */
CreateResourceDataSyncResponsePrivate::CreateResourceDataSyncResponsePrivate(
    CreateResourceDataSyncQueueResponse * const q) : CreateResourceDataSyncPrivate(q)
{

}

/**
 * @brief  Parse an SSM CreateResourceDataSyncResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateResourceDataSyncResponsePrivate::CreateResourceDataSyncResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateResourceDataSyncResponse"));
    /// @todo
}

} // namespace SSM
} // namespace QtAws
