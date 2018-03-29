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

#include "putactionrevisionresponse.h"
#include "putactionrevisionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodePipeline {

/**
 * @class  PutActionRevisionResponse
 *
 * @brief  Handles CodePipeline PutActionRevision responses.
 *
 * @see    CodePipelineClient::putActionRevision
 */

/**
 * @brief  Constructs a new PutActionRevisionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutActionRevisionResponse::PutActionRevisionResponse(
        const PutActionRevisionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodePipelineResponse(new PutActionRevisionResponsePrivate(this), parent)
{
    setRequest(new PutActionRevisionRequest(request));
    setReply(reply);
}

const PutActionRevisionRequest * PutActionRevisionResponse::request() const
{
    Q_D(const PutActionRevisionResponse);
    return static_cast<const PutActionRevisionRequest *>(d->request);
}

/**
 * @brief  Parse a CodePipeline PutActionRevision response.
 *
 * @param  response  Response to parse.
 */
void PutActionRevisionResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutActionRevisionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutActionRevisionResponsePrivate
 *
 * @brief  Private implementation for PutActionRevisionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutActionRevisionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutActionRevisionResponse instance.
 */
PutActionRevisionResponsePrivate::PutActionRevisionResponsePrivate(
    PutActionRevisionResponse * const q) : CodePipelineResponsePrivate(q)
{

}

/**
 * @brief  Parse an CodePipeline PutActionRevisionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutActionRevisionResponsePrivate::parsePutActionRevisionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutActionRevisionResponse"));
    /// @todo
}

} // namespace CodePipeline
} // namespace QtAws
