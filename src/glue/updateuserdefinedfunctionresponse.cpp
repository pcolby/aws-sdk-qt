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

#include "updateuserdefinedfunctionresponse.h"
#include "updateuserdefinedfunctionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/**
 * @class  UpdateUserDefinedFunctionResponse
 *
 * @brief  Handles Glue UpdateUserDefinedFunction responses.
 *
 * @see    GlueClient::updateUserDefinedFunction
 */

/**
 * @brief  Constructs a new UpdateUserDefinedFunctionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateUserDefinedFunctionResponse::UpdateUserDefinedFunctionResponse(
        const UpdateUserDefinedFunctionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : UpdateUserDefinedFunctionResponse(new UpdateUserDefinedFunctionResponsePrivate(this), parent)
{
    setRequest(new UpdateUserDefinedFunctionRequest(request));
    setReply(reply);
}

const UpdateUserDefinedFunctionRequest * UpdateUserDefinedFunctionResponse::request() const
{
    Q_D(const UpdateUserDefinedFunctionResponse);
    return static_cast<const UpdateUserDefinedFunctionRequest *>(d->request);
}

/**
 * @brief  Parse a Glue UpdateUserDefinedFunction response.
 *
 * @param  response  Response to parse.
 */
void UpdateUserDefinedFunctionResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateUserDefinedFunctionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateUserDefinedFunctionResponsePrivate
 *
 * @brief  Private implementation for UpdateUserDefinedFunctionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateUserDefinedFunctionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateUserDefinedFunctionResponse instance.
 */
UpdateUserDefinedFunctionResponsePrivate::UpdateUserDefinedFunctionResponsePrivate(
    UpdateUserDefinedFunctionResponse * const q) : GlueResponsePrivate(q)
{

}

/**
 * @brief  Parse an Glue UpdateUserDefinedFunctionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateUserDefinedFunctionResponsePrivate::parseUpdateUserDefinedFunctionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateUserDefinedFunctionResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
