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

#include "puttelemetryrecordsresponse.h"
#include "puttelemetryrecordsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::PutTelemetryRecordsResponse
 *
 * \brief The PutTelemetryRecordsResponse class encapsulates XRay PutTelemetryRecords responses.
 *
 * \ingroup XRay
 *
 *  AWS X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by processing those
 *
 * \sa XRayClient::putTelemetryRecords
 */

/*!
 * @brief  Constructs a new PutTelemetryRecordsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutTelemetryRecordsResponse::PutTelemetryRecordsResponse(
        const PutTelemetryRecordsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : XRayResponse(new PutTelemetryRecordsResponsePrivate(this), parent)
{
    setRequest(new PutTelemetryRecordsRequest(request));
    setReply(reply);
}

const PutTelemetryRecordsRequest * PutTelemetryRecordsResponse::request() const
{
    Q_D(const PutTelemetryRecordsResponse);
    return static_cast<const PutTelemetryRecordsRequest *>(d->request);
}

/*!
 * @brief  Parse a XRay PutTelemetryRecords response.
 *
 * @param  response  Response to parse.
 */
void PutTelemetryRecordsResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutTelemetryRecordsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class PutTelemetryRecordsResponsePrivate
 *
 * \brief Private implementation for PutTelemetryRecordsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new PutTelemetryRecordsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutTelemetryRecordsResponse instance.
 */
PutTelemetryRecordsResponsePrivate::PutTelemetryRecordsResponsePrivate(
    PutTelemetryRecordsResponse * const q) : XRayResponsePrivate(q)
{

}

/*!
 * @brief  Parse an XRay PutTelemetryRecordsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutTelemetryRecordsResponsePrivate::parsePutTelemetryRecordsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutTelemetryRecordsResponse"));
    /// @todo
}

} // namespace XRay
} // namespace QtAws
