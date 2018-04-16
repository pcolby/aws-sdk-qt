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

#include "putrecordsresponse.h"
#include "putrecordsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::PutRecordsResponse
 *
 * \brief The PutRecordsResponse class encapsulates Kinesis PutRecords responses.
 *
 * \ingroup Kinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::putRecords
 */

/*!
 * @brief  Constructs a new PutRecordsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutRecordsResponse::PutRecordsResponse(
        const PutRecordsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisResponse(new PutRecordsResponsePrivate(this), parent)
{
    setRequest(new PutRecordsRequest(request));
    setReply(reply);
}

const PutRecordsRequest * PutRecordsResponse::request() const
{
    Q_D(const PutRecordsResponse);
    return static_cast<const PutRecordsRequest *>(d->request);
}

/*!
 * @brief  Parse a Kinesis PutRecords response.
 *
 * @param  response  Response to parse.
 */
void PutRecordsResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutRecordsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class PutRecordsResponsePrivate
 *
 * \brief Private implementation for PutRecordsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new PutRecordsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutRecordsResponse instance.
 */
PutRecordsResponsePrivate::PutRecordsResponsePrivate(
    PutRecordsResponse * const q) : KinesisResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Kinesis PutRecordsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutRecordsResponsePrivate::parsePutRecordsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutRecordsResponse"));
    /// @todo
}

} // namespace Kinesis
} // namespace QtAws
