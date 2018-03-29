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

#include "createprogressupdatestreamresponse.h"
#include "createprogressupdatestreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHub {

/**
 * @class  CreateProgressUpdateStreamResponse
 *
 * @brief  Handles MigrationHub CreateProgressUpdateStream responses.
 *
 * @see    MigrationHubClient::createProgressUpdateStream
 */

/**
 * @brief  Constructs a new CreateProgressUpdateStreamResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateProgressUpdateStreamResponse::CreateProgressUpdateStreamResponse(
        const CreateProgressUpdateStreamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubResponse(new CreateProgressUpdateStreamResponsePrivate(this), parent)
{
    setRequest(new CreateProgressUpdateStreamRequest(request));
    setReply(reply);
}

const CreateProgressUpdateStreamRequest * CreateProgressUpdateStreamResponse::request() const
{
    Q_D(const CreateProgressUpdateStreamResponse);
    return static_cast<const CreateProgressUpdateStreamRequest *>(d->request);
}

/**
 * @brief  Parse a MigrationHub CreateProgressUpdateStream response.
 *
 * @param  response  Response to parse.
 */
void CreateProgressUpdateStreamResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateProgressUpdateStreamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateProgressUpdateStreamResponsePrivate
 *
 * @brief  Private implementation for CreateProgressUpdateStreamResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateProgressUpdateStreamResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateProgressUpdateStreamResponse instance.
 */
CreateProgressUpdateStreamResponsePrivate::CreateProgressUpdateStreamResponsePrivate(
    CreateProgressUpdateStreamResponse * const q) : MigrationHubResponsePrivate(q)
{

}

/**
 * @brief  Parse an MigrationHub CreateProgressUpdateStreamResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateProgressUpdateStreamResponsePrivate::parseCreateProgressUpdateStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateProgressUpdateStreamResponse"));
    /// @todo
}

} // namespace MigrationHub
} // namespace QtAws
