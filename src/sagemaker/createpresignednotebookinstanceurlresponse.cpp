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

#include "createpresignednotebookinstanceurlresponse.h"
#include "createpresignednotebookinstanceurlresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/**
 * @class  CreatePresignedNotebookInstanceUrlResponse
 *
 * @brief  Handles SageMaker CreatePresignedNotebookInstanceUrl responses.
 *
 * @see    SageMakerClient::createPresignedNotebookInstanceUrl
 */

/**
 * @brief  Constructs a new CreatePresignedNotebookInstanceUrlResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreatePresignedNotebookInstanceUrlResponse::CreatePresignedNotebookInstanceUrlResponse(
        const CreatePresignedNotebookInstanceUrlRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreatePresignedNotebookInstanceUrlResponsePrivate(this), parent)
{
    setRequest(new CreatePresignedNotebookInstanceUrlRequest(request));
    setReply(reply);
}

const CreatePresignedNotebookInstanceUrlRequest * CreatePresignedNotebookInstanceUrlResponse::request() const
{
    Q_D(const CreatePresignedNotebookInstanceUrlResponse);
    return static_cast<const CreatePresignedNotebookInstanceUrlRequest *>(d->request);
}

/**
 * @brief  Parse a SageMaker CreatePresignedNotebookInstanceUrl response.
 *
 * @param  response  Response to parse.
 */
void CreatePresignedNotebookInstanceUrlResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreatePresignedNotebookInstanceUrlResponsePrivate
 *
 * @brief  Private implementation for CreatePresignedNotebookInstanceUrlResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreatePresignedNotebookInstanceUrlResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreatePresignedNotebookInstanceUrlResponse instance.
 */
CreatePresignedNotebookInstanceUrlResponsePrivate::CreatePresignedNotebookInstanceUrlResponsePrivate(
    CreatePresignedNotebookInstanceUrlResponse * const q) : SageMakerResponsePrivate(q)
{

}

/**
 * @brief  Parse an SageMaker CreatePresignedNotebookInstanceUrlResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreatePresignedNotebookInstanceUrlResponsePrivate::CreatePresignedNotebookInstanceUrlResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePresignedNotebookInstanceUrlResponse"));
    /// @todo
}

} // namespace SageMaker
} // namespace QtAws
