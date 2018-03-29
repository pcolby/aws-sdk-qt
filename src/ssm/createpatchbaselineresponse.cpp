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

#include "createpatchbaselineresponse.h"
#include "createpatchbaselineresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/**
 * @class  CreatePatchBaselineResponse
 *
 * @brief  Handles SSM CreatePatchBaseline responses.
 *
 * @see    SSMClient::createPatchBaseline
 */

/**
 * @brief  Constructs a new CreatePatchBaselineResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreatePatchBaselineResponse::CreatePatchBaselineResponse(
        const CreatePatchBaselineRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new CreatePatchBaselineResponsePrivate(this), parent)
{
    setRequest(new CreatePatchBaselineRequest(request));
    setReply(reply);
}

const CreatePatchBaselineRequest * CreatePatchBaselineResponse::request() const
{
    Q_D(const CreatePatchBaselineResponse);
    return static_cast<const CreatePatchBaselineRequest *>(d->request);
}

/**
 * @brief  Parse a SSM CreatePatchBaseline response.
 *
 * @param  response  Response to parse.
 */
void CreatePatchBaselineResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreatePatchBaselineResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreatePatchBaselineResponsePrivate
 *
 * @brief  Private implementation for CreatePatchBaselineResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreatePatchBaselineResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreatePatchBaselineResponse instance.
 */
CreatePatchBaselineResponsePrivate::CreatePatchBaselineResponsePrivate(
    CreatePatchBaselineResponse * const q) : SSMResponsePrivate(q)
{

}

/**
 * @brief  Parse an SSM CreatePatchBaselineResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreatePatchBaselineResponsePrivate::CreatePatchBaselineResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePatchBaselineResponse"));
    /// @todo
}

} // namespace SSM
} // namespace QtAws
