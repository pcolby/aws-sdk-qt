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

#include "initiatejobresponse.h"
#include "initiatejobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glacier {

/**
 * @class  InitiateJobResponse
 *
 * @brief  Handles Glacier InitiateJob responses.
 *
 * @see    GlacierClient::initiateJob
 */

/**
 * @brief  Constructs a new InitiateJobResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
InitiateJobResponse::InitiateJobResponse(
        const InitiateJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlacierResponse(new InitiateJobResponsePrivate(this), parent)
{
    setRequest(new InitiateJobRequest(request));
    setReply(reply);
}

const InitiateJobRequest * InitiateJobResponse::request() const
{
    Q_D(const InitiateJobResponse);
    return static_cast<const InitiateJobRequest *>(d->request);
}

/**
 * @brief  Parse a Glacier InitiateJob response.
 *
 * @param  response  Response to parse.
 */
void InitiateJobResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  InitiateJobResponsePrivate
 *
 * @brief  Private implementation for InitiateJobResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new InitiateJobResponsePrivate object.
 *
 * @param  q  Pointer to this object's public InitiateJobResponse instance.
 */
InitiateJobResponsePrivate::InitiateJobResponsePrivate(
    InitiateJobQueueResponse * const q) : InitiateJobPrivate(q)
{

}

/**
 * @brief  Parse an Glacier InitiateJobResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void InitiateJobResponsePrivate::InitiateJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("InitiateJobResponse"));
    /// @todo
}

} // namespace Glacier
} // namespace QtAws
