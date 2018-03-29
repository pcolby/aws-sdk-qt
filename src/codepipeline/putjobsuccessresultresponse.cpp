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

#include "putjobsuccessresultresponse.h"
#include "putjobsuccessresultresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodePipeline {

/**
 * @class  PutJobSuccessResultResponse
 *
 * @brief  Handles CodePipeline PutJobSuccessResult responses.
 *
 * @see    CodePipelineClient::putJobSuccessResult
 */

/**
 * @brief  Constructs a new PutJobSuccessResultResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutJobSuccessResultResponse::PutJobSuccessResultResponse(
        const PutJobSuccessResultRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PutJobSuccessResultResponse(new PutJobSuccessResultResponsePrivate(this), parent)
{
    setRequest(new PutJobSuccessResultRequest(request));
    setReply(reply);
}

const PutJobSuccessResultRequest * PutJobSuccessResultResponse::request() const
{
    Q_D(const PutJobSuccessResultResponse);
    return static_cast<const PutJobSuccessResultRequest *>(d->request);
}

/**
 * @brief  Parse a CodePipeline PutJobSuccessResult response.
 *
 * @param  response  Response to parse.
 */
void PutJobSuccessResultResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutJobSuccessResultResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutJobSuccessResultResponsePrivate
 *
 * @brief  Private implementation for PutJobSuccessResultResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutJobSuccessResultResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutJobSuccessResultResponse instance.
 */
PutJobSuccessResultResponsePrivate::PutJobSuccessResultResponsePrivate(
    PutJobSuccessResultResponse * const q) : CodePipelineResponsePrivate(q)
{

}

/**
 * @brief  Parse an CodePipeline PutJobSuccessResultResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutJobSuccessResultResponsePrivate::parsePutJobSuccessResultResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutJobSuccessResultResponse"));
    /// @todo
}

} // namespace CodePipeline
} // namespace QtAws
