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

#include "submitjobresponse.h"
#include "submitjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Batch {

/**
 * @class  SubmitJobResponse
 *
 * @brief  Handles Batch SubmitJob responses.
 *
 * @see    BatchClient::submitJob
 */

/**
 * @brief  Constructs a new SubmitJobResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SubmitJobResponse::SubmitJobResponse(
        const SubmitJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BatchResponse(new SubmitJobResponsePrivate(this), parent)
{
    setRequest(new SubmitJobRequest(request));
    setReply(reply);
}

const SubmitJobRequest * SubmitJobResponse::request() const
{
    Q_D(const SubmitJobResponse);
    return static_cast<const SubmitJobRequest *>(d->request);
}

/**
 * @brief  Parse a Batch SubmitJob response.
 *
 * @param  response  Response to parse.
 */
void SubmitJobResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SubmitJobResponsePrivate
 *
 * @brief  Private implementation for SubmitJobResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SubmitJobResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SubmitJobResponse instance.
 */
SubmitJobResponsePrivate::SubmitJobResponsePrivate(
    SubmitJobQueueResponse * const q) : SubmitJobPrivate(q)
{

}

/**
 * @brief  Parse an Batch SubmitJobResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SubmitJobResponsePrivate::SubmitJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SubmitJobResponse"));
    /// @todo
}

} // namespace Batch
} // namespace QtAws
