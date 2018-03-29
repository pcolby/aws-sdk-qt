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

#include "acknowledgethirdpartyjobresponse.h"
#include "acknowledgethirdpartyjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodePipeline {

/**
 * @class  AcknowledgeThirdPartyJobResponse
 *
 * @brief  Handles CodePipeline AcknowledgeThirdPartyJob responses.
 *
 * @see    CodePipelineClient::acknowledgeThirdPartyJob
 */

/**
 * @brief  Constructs a new AcknowledgeThirdPartyJobResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AcknowledgeThirdPartyJobResponse::AcknowledgeThirdPartyJobResponse(
        const AcknowledgeThirdPartyJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodePipelineResponse(new AcknowledgeThirdPartyJobResponsePrivate(this), parent)
{
    setRequest(new AcknowledgeThirdPartyJobRequest(request));
    setReply(reply);
}

const AcknowledgeThirdPartyJobRequest * AcknowledgeThirdPartyJobResponse::request() const
{
    Q_D(const AcknowledgeThirdPartyJobResponse);
    return static_cast<const AcknowledgeThirdPartyJobRequest *>(d->request);
}

/**
 * @brief  Parse a CodePipeline AcknowledgeThirdPartyJob response.
 *
 * @param  response  Response to parse.
 */
void AcknowledgeThirdPartyJobResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AcknowledgeThirdPartyJobResponsePrivate
 *
 * @brief  Private implementation for AcknowledgeThirdPartyJobResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AcknowledgeThirdPartyJobResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AcknowledgeThirdPartyJobResponse instance.
 */
AcknowledgeThirdPartyJobResponsePrivate::AcknowledgeThirdPartyJobResponsePrivate(
    AcknowledgeThirdPartyJobQueueResponse * const q) : AcknowledgeThirdPartyJobPrivate(q)
{

}

/**
 * @brief  Parse an CodePipeline AcknowledgeThirdPartyJobResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AcknowledgeThirdPartyJobResponsePrivate::AcknowledgeThirdPartyJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AcknowledgeThirdPartyJobResponse"));
    /// @todo
}

} // namespace CodePipeline
} // namespace QtAws
