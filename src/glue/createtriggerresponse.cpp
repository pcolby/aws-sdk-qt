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

#include "createtriggerresponse.h"
#include "createtriggerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/**
 * @class  CreateTriggerResponse
 *
 * @brief  Handles Glue CreateTrigger responses.
 *
 * @see    GlueClient::createTrigger
 */

/**
 * @brief  Constructs a new CreateTriggerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateTriggerResponse::CreateTriggerResponse(
        const CreateTriggerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new CreateTriggerResponsePrivate(this), parent)
{
    setRequest(new CreateTriggerRequest(request));
    setReply(reply);
}

const CreateTriggerRequest * CreateTriggerResponse::request() const
{
    Q_D(const CreateTriggerResponse);
    return static_cast<const CreateTriggerRequest *>(d->request);
}

/**
 * @brief  Parse a Glue CreateTrigger response.
 *
 * @param  response  Response to parse.
 */
void CreateTriggerResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateTriggerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateTriggerResponsePrivate
 *
 * @brief  Private implementation for CreateTriggerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateTriggerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateTriggerResponse instance.
 */
CreateTriggerResponsePrivate::CreateTriggerResponsePrivate(
    CreateTriggerResponse * const q) : GlueResponsePrivate(q)
{

}

/**
 * @brief  Parse an Glue CreateTriggerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateTriggerResponsePrivate::CreateTriggerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTriggerResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
