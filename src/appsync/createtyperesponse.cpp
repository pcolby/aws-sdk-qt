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

#include "createtyperesponse.h"
#include "createtyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/**
 * @class  CreateTypeResponse
 *
 * @brief  Handles AppSync CreateType responses.
 *
 * @see    AppSyncClient::createType
 */

/**
 * @brief  Constructs a new CreateTypeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateTypeResponse::CreateTypeResponse(
        const CreateTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CreateTypeResponse(new CreateTypeResponsePrivate(this), parent)
{
    setRequest(new CreateTypeRequest(request));
    setReply(reply);
}

const CreateTypeRequest * CreateTypeResponse::request() const
{
    Q_D(const CreateTypeResponse);
    return static_cast<const CreateTypeRequest *>(d->request);
}

/**
 * @brief  Parse a AppSync CreateType response.
 *
 * @param  response  Response to parse.
 */
void CreateTypeResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateTypeResponsePrivate
 *
 * @brief  Private implementation for CreateTypeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateTypeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateTypeResponse instance.
 */
CreateTypeResponsePrivate::CreateTypeResponsePrivate(
    CreateTypeResponse * const q) : AppSyncResponsePrivate(q)
{

}

/**
 * @brief  Parse an AppSync CreateTypeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateTypeResponsePrivate::parseCreateTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTypeResponse"));
    /// @todo
}

} // namespace AppSync
} // namespace QtAws
