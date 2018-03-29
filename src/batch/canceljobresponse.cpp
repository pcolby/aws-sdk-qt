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

#include "canceljobresponse.h"
#include "canceljobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Batch {

/**
 * @class  CancelJobResponse
 *
 * @brief  Handles Batch CancelJob responses.
 *
 * @see    BatchClient::cancelJob
 */

/**
 * @brief  Constructs a new CancelJobResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CancelJobResponse::CancelJobResponse(
        const CancelJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BatchResponse(new CancelJobResponsePrivate(this), parent)
{
    setRequest(new CancelJobRequest(request));
    setReply(reply);
}

const CancelJobRequest * CancelJobResponse::request() const
{
    Q_D(const CancelJobResponse);
    return static_cast<const CancelJobRequest *>(d->request);
}

/**
 * @brief  Parse a Batch CancelJob response.
 *
 * @param  response  Response to parse.
 */
void CancelJobResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CancelJobResponsePrivate
 *
 * @brief  Private implementation for CancelJobResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CancelJobResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CancelJobResponse instance.
 */
CancelJobResponsePrivate::CancelJobResponsePrivate(
    CancelJobQueueResponse * const q) : CancelJobPrivate(q)
{

}

/**
 * @brief  Parse an Batch CancelJobResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CancelJobResponsePrivate::CancelJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelJobResponse"));
    /// @todo
}

} // namespace Batch
} // namespace QtAws
