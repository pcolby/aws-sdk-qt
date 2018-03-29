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

#include "registerdefaultpatchbaselineresponse.h"
#include "registerdefaultpatchbaselineresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/**
 * @class  RegisterDefaultPatchBaselineResponse
 *
 * @brief  Handles SSM RegisterDefaultPatchBaseline responses.
 *
 * @see    SSMClient::registerDefaultPatchBaseline
 */

/**
 * @brief  Constructs a new RegisterDefaultPatchBaselineResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RegisterDefaultPatchBaselineResponse::RegisterDefaultPatchBaselineResponse(
        const RegisterDefaultPatchBaselineRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new RegisterDefaultPatchBaselineResponsePrivate(this), parent)
{
    setRequest(new RegisterDefaultPatchBaselineRequest(request));
    setReply(reply);
}

const RegisterDefaultPatchBaselineRequest * RegisterDefaultPatchBaselineResponse::request() const
{
    Q_D(const RegisterDefaultPatchBaselineResponse);
    return static_cast<const RegisterDefaultPatchBaselineRequest *>(d->request);
}

/**
 * @brief  Parse a SSM RegisterDefaultPatchBaseline response.
 *
 * @param  response  Response to parse.
 */
void RegisterDefaultPatchBaselineResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RegisterDefaultPatchBaselineResponsePrivate
 *
 * @brief  Private implementation for RegisterDefaultPatchBaselineResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RegisterDefaultPatchBaselineResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RegisterDefaultPatchBaselineResponse instance.
 */
RegisterDefaultPatchBaselineResponsePrivate::RegisterDefaultPatchBaselineResponsePrivate(
    RegisterDefaultPatchBaselineResponse * const q) : SSMResponsePrivate(q)
{

}

/**
 * @brief  Parse an SSM RegisterDefaultPatchBaselineResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RegisterDefaultPatchBaselineResponsePrivate::RegisterDefaultPatchBaselineResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterDefaultPatchBaselineResponse"));
    /// @todo
}

} // namespace SSM
} // namespace QtAws
