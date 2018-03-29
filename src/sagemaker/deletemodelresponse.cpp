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

#include "deletemodelresponse.h"
#include "deletemodelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/**
 * @class  DeleteModelResponse
 *
 * @brief  Handles SageMaker DeleteModel responses.
 *
 * @see    SageMakerClient::deleteModel
 */

/**
 * @brief  Constructs a new DeleteModelResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteModelResponse::DeleteModelResponse(
        const DeleteModelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DeleteModelResponsePrivate(this), parent)
{
    setRequest(new DeleteModelRequest(request));
    setReply(reply);
}

const DeleteModelRequest * DeleteModelResponse::request() const
{
    Q_D(const DeleteModelResponse);
    return static_cast<const DeleteModelRequest *>(d->request);
}

/**
 * @brief  Parse a SageMaker DeleteModel response.
 *
 * @param  response  Response to parse.
 */
void DeleteModelResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteModelResponsePrivate
 *
 * @brief  Private implementation for DeleteModelResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteModelResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteModelResponse instance.
 */
DeleteModelResponsePrivate::DeleteModelResponsePrivate(
    DeleteModelResponse * const q) : SageMakerResponsePrivate(q)
{

}

/**
 * @brief  Parse an SageMaker DeleteModelResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteModelResponsePrivate::DeleteModelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteModelResponse"));
    /// @todo
}

} // namespace SageMaker
} // namespace QtAws
