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

#include "putthirdpartyjobsuccessresultresponse.h"
#include "putthirdpartyjobsuccessresultresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodePipeline {

/**
 * @class  PutThirdPartyJobSuccessResultResponse
 *
 * @brief  Handles CodePipeline PutThirdPartyJobSuccessResult responses.
 *
 * @see    CodePipelineClient::putThirdPartyJobSuccessResult
 */

/**
 * @brief  Constructs a new PutThirdPartyJobSuccessResultResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutThirdPartyJobSuccessResultResponse::PutThirdPartyJobSuccessResultResponse(
        const PutThirdPartyJobSuccessResultRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodePipelineResponse(new PutThirdPartyJobSuccessResultResponsePrivate(this), parent)
{
    setRequest(new PutThirdPartyJobSuccessResultRequest(request));
    setReply(reply);
}

const PutThirdPartyJobSuccessResultRequest * PutThirdPartyJobSuccessResultResponse::request() const
{
    Q_D(const PutThirdPartyJobSuccessResultResponse);
    return static_cast<const PutThirdPartyJobSuccessResultRequest *>(d->request);
}

/**
 * @brief  Parse a CodePipeline PutThirdPartyJobSuccessResult response.
 *
 * @param  response  Response to parse.
 */
void PutThirdPartyJobSuccessResultResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutThirdPartyJobSuccessResultResponsePrivate
 *
 * @brief  Private implementation for PutThirdPartyJobSuccessResultResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutThirdPartyJobSuccessResultResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutThirdPartyJobSuccessResultResponse instance.
 */
PutThirdPartyJobSuccessResultResponsePrivate::PutThirdPartyJobSuccessResultResponsePrivate(
    PutThirdPartyJobSuccessResultResponse * const q) : CodePipelineResponsePrivate(q)
{

}

/**
 * @brief  Parse an CodePipeline PutThirdPartyJobSuccessResultResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutThirdPartyJobSuccessResultResponsePrivate::PutThirdPartyJobSuccessResultResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutThirdPartyJobSuccessResultResponse"));
    /// @todo
}

} // namespace CodePipeline
} // namespace QtAws
