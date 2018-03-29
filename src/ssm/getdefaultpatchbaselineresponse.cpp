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

#include "getdefaultpatchbaselineresponse.h"
#include "getdefaultpatchbaselineresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/**
 * @class  GetDefaultPatchBaselineResponse
 *
 * @brief  Handles SSM GetDefaultPatchBaseline responses.
 *
 * @see    SSMClient::getDefaultPatchBaseline
 */

/**
 * @brief  Constructs a new GetDefaultPatchBaselineResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDefaultPatchBaselineResponse::GetDefaultPatchBaselineResponse(
        const GetDefaultPatchBaselineRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new GetDefaultPatchBaselineResponsePrivate(this), parent)
{
    setRequest(new GetDefaultPatchBaselineRequest(request));
    setReply(reply);
}

const GetDefaultPatchBaselineRequest * GetDefaultPatchBaselineResponse::request() const
{
    Q_D(const GetDefaultPatchBaselineResponse);
    return static_cast<const GetDefaultPatchBaselineRequest *>(d->request);
}

/**
 * @brief  Parse a SSM GetDefaultPatchBaseline response.
 *
 * @param  response  Response to parse.
 */
void GetDefaultPatchBaselineResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetDefaultPatchBaselineResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetDefaultPatchBaselineResponsePrivate
 *
 * @brief  Private implementation for GetDefaultPatchBaselineResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDefaultPatchBaselineResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetDefaultPatchBaselineResponse instance.
 */
GetDefaultPatchBaselineResponsePrivate::GetDefaultPatchBaselineResponsePrivate(
    GetDefaultPatchBaselineResponse * const q) : SSMResponsePrivate(q)
{

}

/**
 * @brief  Parse an SSM GetDefaultPatchBaselineResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetDefaultPatchBaselineResponsePrivate::GetDefaultPatchBaselineResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDefaultPatchBaselineResponse"));
    /// @todo
}

} // namespace SSM
} // namespace QtAws
