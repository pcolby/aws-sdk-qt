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

#include "listapplicationrevisionsresponse.h"
#include "listapplicationrevisionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CodeDeploy {

/**
 * @class  ListApplicationRevisionsResponse
 *
 * @brief  Handles CodeDeploy ListApplicationRevisions responses.
 *
 * @see    CodeDeployClient::listApplicationRevisions
 */

/**
 * @brief  Constructs a new ListApplicationRevisionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListApplicationRevisionsResponse::ListApplicationRevisionsResponse(
        const ListApplicationRevisionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeDeployResponse(new ListApplicationRevisionsResponsePrivate(this), parent)
{
    setRequest(new ListApplicationRevisionsRequest(request));
    setReply(reply);
}

const ListApplicationRevisionsRequest * ListApplicationRevisionsResponse::request() const
{
    Q_D(const ListApplicationRevisionsResponse);
    return static_cast<const ListApplicationRevisionsRequest *>(d->request);
}

/**
 * @brief  Parse a CodeDeploy ListApplicationRevisions response.
 *
 * @param  response  Response to parse.
 */
void ListApplicationRevisionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListApplicationRevisionsResponsePrivate
 *
 * @brief  Private implementation for ListApplicationRevisionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListApplicationRevisionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListApplicationRevisionsResponse instance.
 */
ListApplicationRevisionsResponsePrivate::ListApplicationRevisionsResponsePrivate(
    ListApplicationRevisionsQueueResponse * const q) : ListApplicationRevisionsPrivate(q)
{

}

/**
 * @brief  Parse an CodeDeploy ListApplicationRevisionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListApplicationRevisionsResponsePrivate::ListApplicationRevisionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListApplicationRevisionsResponse"));
    /// @todo
}

} // namespace CodeDeploy
} // namespace AWS
