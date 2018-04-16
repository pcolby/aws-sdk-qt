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

#include "deletenotebookinstancelifecycleconfigresponse.h"
#include "deletenotebookinstancelifecycleconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteNotebookInstanceLifecycleConfigResponse
 *
 * \brief The DeleteNotebookInstanceLifecycleConfigResponse class provides an interace for SageMaker DeleteNotebookInstanceLifecycleConfig responses.
 *
 * \ingroup SageMaker
 *
 *
 * \sa SageMakerClient::deleteNotebookInstanceLifecycleConfig
 */

/*!
 * @brief  Constructs a new DeleteNotebookInstanceLifecycleConfigResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteNotebookInstanceLifecycleConfigResponse::DeleteNotebookInstanceLifecycleConfigResponse(
        const DeleteNotebookInstanceLifecycleConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DeleteNotebookInstanceLifecycleConfigResponsePrivate(this), parent)
{
    setRequest(new DeleteNotebookInstanceLifecycleConfigRequest(request));
    setReply(reply);
}

const DeleteNotebookInstanceLifecycleConfigRequest * DeleteNotebookInstanceLifecycleConfigResponse::request() const
{
    Q_D(const DeleteNotebookInstanceLifecycleConfigResponse);
    return static_cast<const DeleteNotebookInstanceLifecycleConfigRequest *>(d->request);
}

/*!
 * @brief  Parse a SageMaker DeleteNotebookInstanceLifecycleConfig response.
 *
 * @param  response  Response to parse.
 */
void DeleteNotebookInstanceLifecycleConfigResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteNotebookInstanceLifecycleConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteNotebookInstanceLifecycleConfigResponsePrivate
 *
 * \brief Private implementation for DeleteNotebookInstanceLifecycleConfigResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteNotebookInstanceLifecycleConfigResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteNotebookInstanceLifecycleConfigResponse instance.
 */
DeleteNotebookInstanceLifecycleConfigResponsePrivate::DeleteNotebookInstanceLifecycleConfigResponsePrivate(
    DeleteNotebookInstanceLifecycleConfigResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * @brief  Parse an SageMaker DeleteNotebookInstanceLifecycleConfigResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteNotebookInstanceLifecycleConfigResponsePrivate::parseDeleteNotebookInstanceLifecycleConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteNotebookInstanceLifecycleConfigResponse"));
    /// @todo
}

} // namespace SageMaker
} // namespace QtAws
