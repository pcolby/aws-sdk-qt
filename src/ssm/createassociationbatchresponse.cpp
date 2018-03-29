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

#include "createassociationbatchresponse.h"
#include "createassociationbatchresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/**
 * @class  CreateAssociationBatchResponse
 *
 * @brief  Handles SSM CreateAssociationBatch responses.
 *
 * @see    SSMClient::createAssociationBatch
 */

/**
 * @brief  Constructs a new CreateAssociationBatchResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateAssociationBatchResponse::CreateAssociationBatchResponse(
        const CreateAssociationBatchRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new CreateAssociationBatchResponsePrivate(this), parent)
{
    setRequest(new CreateAssociationBatchRequest(request));
    setReply(reply);
}

const CreateAssociationBatchRequest * CreateAssociationBatchResponse::request() const
{
    Q_D(const CreateAssociationBatchResponse);
    return static_cast<const CreateAssociationBatchRequest *>(d->request);
}

/**
 * @brief  Parse a SSM CreateAssociationBatch response.
 *
 * @param  response  Response to parse.
 */
void CreateAssociationBatchResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateAssociationBatchResponsePrivate
 *
 * @brief  Private implementation for CreateAssociationBatchResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateAssociationBatchResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateAssociationBatchResponse instance.
 */
CreateAssociationBatchResponsePrivate::CreateAssociationBatchResponsePrivate(
    CreateAssociationBatchQueueResponse * const q) : CreateAssociationBatchPrivate(q)
{

}

/**
 * @brief  Parse an SSM CreateAssociationBatchResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateAssociationBatchResponsePrivate::CreateAssociationBatchResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAssociationBatchResponse"));
    /// @todo
}

} // namespace SSM
} // namespace QtAws
