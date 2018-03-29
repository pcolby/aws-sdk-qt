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

#include "getpatchbaselineresponse.h"
#include "getpatchbaselineresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/**
 * @class  GetPatchBaselineResponse
 *
 * @brief  Handles SSM GetPatchBaseline responses.
 *
 * @see    SSMClient::getPatchBaseline
 */

/**
 * @brief  Constructs a new GetPatchBaselineResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetPatchBaselineResponse::GetPatchBaselineResponse(
        const GetPatchBaselineRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new GetPatchBaselineResponsePrivate(this), parent)
{
    setRequest(new GetPatchBaselineRequest(request));
    setReply(reply);
}

const GetPatchBaselineRequest * GetPatchBaselineResponse::request() const
{
    Q_D(const GetPatchBaselineResponse);
    return static_cast<const GetPatchBaselineRequest *>(d->request);
}

/**
 * @brief  Parse a SSM GetPatchBaseline response.
 *
 * @param  response  Response to parse.
 */
void GetPatchBaselineResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetPatchBaselineResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetPatchBaselineResponsePrivate
 *
 * @brief  Private implementation for GetPatchBaselineResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetPatchBaselineResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetPatchBaselineResponse instance.
 */
GetPatchBaselineResponsePrivate::GetPatchBaselineResponsePrivate(
    GetPatchBaselineResponse * const q) : SSMResponsePrivate(q)
{

}

/**
 * @brief  Parse an SSM GetPatchBaselineResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetPatchBaselineResponsePrivate::parseGetPatchBaselineResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPatchBaselineResponse"));
    /// @todo
}

} // namespace SSM
} // namespace QtAws
