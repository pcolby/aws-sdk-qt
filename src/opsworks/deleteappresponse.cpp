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

#include "deleteappresponse.h"
#include "deleteappresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpsWorks {

/**
 * @class  DeleteAppResponse
 *
 * @brief  Handles OpsWorks DeleteApp responses.
 *
 * @see    OpsWorksClient::deleteApp
 */

/**
 * @brief  Constructs a new DeleteAppResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteAppResponse::DeleteAppResponse(
        const DeleteAppRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new DeleteAppResponsePrivate(this), parent)
{
    setRequest(new DeleteAppRequest(request));
    setReply(reply);
}

const DeleteAppRequest * DeleteAppResponse::request() const
{
    Q_D(const DeleteAppResponse);
    return static_cast<const DeleteAppRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks DeleteApp response.
 *
 * @param  response  Response to parse.
 */
void DeleteAppResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteAppResponsePrivate
 *
 * @brief  Private implementation for DeleteAppResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteAppResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteAppResponse instance.
 */
DeleteAppResponsePrivate::DeleteAppResponsePrivate(
    DeleteAppQueueResponse * const q) : DeleteAppPrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks DeleteAppResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteAppResponsePrivate::DeleteAppResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAppResponse"));
    /// @todo
}

} // namespace OpsWorks
} // namespace QtAws
