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

#include "listworkflowtypesresponse.h"
#include "listworkflowtypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SWF {

/**
 * @class  ListWorkflowTypesResponse
 *
 * @brief  Handles SWF ListWorkflowTypes responses.
 *
 * @see    SWFClient::listWorkflowTypes
 */

/**
 * @brief  Constructs a new ListWorkflowTypesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListWorkflowTypesResponse::ListWorkflowTypesResponse(
        const ListWorkflowTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SWFResponse(new ListWorkflowTypesResponsePrivate(this), parent)
{
    setRequest(new ListWorkflowTypesRequest(request));
    setReply(reply);
}

const ListWorkflowTypesRequest * ListWorkflowTypesResponse::request() const
{
    Q_D(const ListWorkflowTypesResponse);
    return static_cast<const ListWorkflowTypesRequest *>(d->request);
}

/**
 * @brief  Parse a SWF ListWorkflowTypes response.
 *
 * @param  response  Response to parse.
 */
void ListWorkflowTypesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListWorkflowTypesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListWorkflowTypesResponsePrivate
 *
 * @brief  Private implementation for ListWorkflowTypesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListWorkflowTypesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListWorkflowTypesResponse instance.
 */
ListWorkflowTypesResponsePrivate::ListWorkflowTypesResponsePrivate(
    ListWorkflowTypesResponse * const q) : SWFResponsePrivate(q)
{

}

/**
 * @brief  Parse an SWF ListWorkflowTypesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListWorkflowTypesResponsePrivate::parseListWorkflowTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListWorkflowTypesResponse"));
    /// @todo
}

} // namespace SWF
} // namespace QtAws
