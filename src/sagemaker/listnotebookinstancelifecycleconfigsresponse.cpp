/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listnotebookinstancelifecycleconfigsresponse.h"
#include "listnotebookinstancelifecycleconfigsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SageMaker {

/**
 * @class  ListNotebookInstanceLifecycleConfigsResponse
 *
 * @brief  Handles SageMaker ListNotebookInstanceLifecycleConfigs responses.
 *
 * @see    SageMakerClient::listNotebookInstanceLifecycleConfigs
 */

/**
 * @brief  Constructs a new ListNotebookInstanceLifecycleConfigsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListNotebookInstanceLifecycleConfigsResponse::ListNotebookInstanceLifecycleConfigsResponse(
        const ListNotebookInstanceLifecycleConfigsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListNotebookInstanceLifecycleConfigsResponsePrivate(this), parent)
{
    setRequest(new ListNotebookInstanceLifecycleConfigsRequest(request));
    setReply(reply);
}

const ListNotebookInstanceLifecycleConfigsRequest * ListNotebookInstanceLifecycleConfigsResponse::request() const
{
    Q_D(const ListNotebookInstanceLifecycleConfigsResponse);
    return static_cast<const ListNotebookInstanceLifecycleConfigsRequest *>(d->request);
}

/**
 * @brief  Parse a SageMaker ListNotebookInstanceLifecycleConfigs response.
 *
 * @param  response  Response to parse.
 */
void ListNotebookInstanceLifecycleConfigsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListNotebookInstanceLifecycleConfigsResponsePrivate
 *
 * @brief  Private implementation for ListNotebookInstanceLifecycleConfigsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListNotebookInstanceLifecycleConfigsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListNotebookInstanceLifecycleConfigsResponse instance.
 */
ListNotebookInstanceLifecycleConfigsResponsePrivate::ListNotebookInstanceLifecycleConfigsResponsePrivate(
    ListNotebookInstanceLifecycleConfigsQueueResponse * const q) : ListNotebookInstanceLifecycleConfigsPrivate(q)
{

}

/**
 * @brief  Parse an SageMaker ListNotebookInstanceLifecycleConfigsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListNotebookInstanceLifecycleConfigsResponsePrivate::ListNotebookInstanceLifecycleConfigsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListNotebookInstanceLifecycleConfigsResponse"));
    /// @todo
}

} // namespace SageMaker
} // namespace AWS
