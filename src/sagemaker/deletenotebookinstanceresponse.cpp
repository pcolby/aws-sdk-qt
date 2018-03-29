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

#include "deletenotebookinstanceresponse.h"
#include "deletenotebookinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/**
 * @class  DeleteNotebookInstanceResponse
 *
 * @brief  Handles SageMaker DeleteNotebookInstance responses.
 *
 * @see    SageMakerClient::deleteNotebookInstance
 */

/**
 * @brief  Constructs a new DeleteNotebookInstanceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteNotebookInstanceResponse::DeleteNotebookInstanceResponse(
        const DeleteNotebookInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DeleteNotebookInstanceResponsePrivate(this), parent)
{
    setRequest(new DeleteNotebookInstanceRequest(request));
    setReply(reply);
}

const DeleteNotebookInstanceRequest * DeleteNotebookInstanceResponse::request() const
{
    Q_D(const DeleteNotebookInstanceResponse);
    return static_cast<const DeleteNotebookInstanceRequest *>(d->request);
}

/**
 * @brief  Parse a SageMaker DeleteNotebookInstance response.
 *
 * @param  response  Response to parse.
 */
void DeleteNotebookInstanceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteNotebookInstanceResponsePrivate
 *
 * @brief  Private implementation for DeleteNotebookInstanceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteNotebookInstanceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteNotebookInstanceResponse instance.
 */
DeleteNotebookInstanceResponsePrivate::DeleteNotebookInstanceResponsePrivate(
    DeleteNotebookInstanceResponse * const q) : SageMakerResponsePrivate(q)
{

}

/**
 * @brief  Parse an SageMaker DeleteNotebookInstanceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteNotebookInstanceResponsePrivate::DeleteNotebookInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteNotebookInstanceResponse"));
    /// @todo
}

} // namespace SageMaker
} // namespace QtAws
