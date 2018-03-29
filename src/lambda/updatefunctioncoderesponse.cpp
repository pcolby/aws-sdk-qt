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

#include "updatefunctioncoderesponse.h"
#include "updatefunctioncoderesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lambda {

/**
 * @class  UpdateFunctionCodeResponse
 *
 * @brief  Handles Lambda UpdateFunctionCode responses.
 *
 * @see    LambdaClient::updateFunctionCode
 */

/**
 * @brief  Constructs a new UpdateFunctionCodeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateFunctionCodeResponse::UpdateFunctionCodeResponse(
        const UpdateFunctionCodeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : UpdateFunctionCodeResponse(new UpdateFunctionCodeResponsePrivate(this), parent)
{
    setRequest(new UpdateFunctionCodeRequest(request));
    setReply(reply);
}

const UpdateFunctionCodeRequest * UpdateFunctionCodeResponse::request() const
{
    Q_D(const UpdateFunctionCodeResponse);
    return static_cast<const UpdateFunctionCodeRequest *>(d->request);
}

/**
 * @brief  Parse a Lambda UpdateFunctionCode response.
 *
 * @param  response  Response to parse.
 */
void UpdateFunctionCodeResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateFunctionCodeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateFunctionCodeResponsePrivate
 *
 * @brief  Private implementation for UpdateFunctionCodeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateFunctionCodeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateFunctionCodeResponse instance.
 */
UpdateFunctionCodeResponsePrivate::UpdateFunctionCodeResponsePrivate(
    UpdateFunctionCodeResponse * const q) : LambdaResponsePrivate(q)
{

}

/**
 * @brief  Parse an Lambda UpdateFunctionCodeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateFunctionCodeResponsePrivate::parseUpdateFunctionCodeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateFunctionCodeResponse"));
    /// @todo
}

} // namespace Lambda
} // namespace QtAws
