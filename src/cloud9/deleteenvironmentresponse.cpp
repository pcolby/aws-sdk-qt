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

#include "deleteenvironmentresponse.h"
#include "deleteenvironmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Cloud9 {

/**
 * @class  DeleteEnvironmentResponse
 *
 * @brief  Handles Cloud9 DeleteEnvironment responses.
 *
 * @see    Cloud9Client::deleteEnvironment
 */

/**
 * @brief  Constructs a new DeleteEnvironmentResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteEnvironmentResponse::DeleteEnvironmentResponse(
        const DeleteEnvironmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeleteEnvironmentResponse(new DeleteEnvironmentResponsePrivate(this), parent)
{
    setRequest(new DeleteEnvironmentRequest(request));
    setReply(reply);
}

const DeleteEnvironmentRequest * DeleteEnvironmentResponse::request() const
{
    Q_D(const DeleteEnvironmentResponse);
    return static_cast<const DeleteEnvironmentRequest *>(d->request);
}

/**
 * @brief  Parse a Cloud9 DeleteEnvironment response.
 *
 * @param  response  Response to parse.
 */
void DeleteEnvironmentResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteEnvironmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteEnvironmentResponsePrivate
 *
 * @brief  Private implementation for DeleteEnvironmentResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteEnvironmentResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteEnvironmentResponse instance.
 */
DeleteEnvironmentResponsePrivate::DeleteEnvironmentResponsePrivate(
    DeleteEnvironmentResponse * const q) : Cloud9ResponsePrivate(q)
{

}

/**
 * @brief  Parse an Cloud9 DeleteEnvironmentResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteEnvironmentResponsePrivate::parseDeleteEnvironmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteEnvironmentResponse"));
    /// @todo
}

} // namespace Cloud9
} // namespace QtAws
