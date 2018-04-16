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

#include "getsharditeratorresponse.h"
#include "getsharditeratorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::GetShardIteratorResponse
 *
 * \brief The GetShardIteratorResponse class encapsulates Kinesis GetShardIterator responses.
 *
 * \ingroup Kinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::getShardIterator
 */

/*!
 * @brief  Constructs a new GetShardIteratorResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetShardIteratorResponse::GetShardIteratorResponse(
        const GetShardIteratorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisResponse(new GetShardIteratorResponsePrivate(this), parent)
{
    setRequest(new GetShardIteratorRequest(request));
    setReply(reply);
}

const GetShardIteratorRequest * GetShardIteratorResponse::request() const
{
    Q_D(const GetShardIteratorResponse);
    return static_cast<const GetShardIteratorRequest *>(d->request);
}

/*!
 * @brief  Parse a Kinesis GetShardIterator response.
 *
 * @param  response  Response to parse.
 */
void GetShardIteratorResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetShardIteratorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetShardIteratorResponsePrivate
 *
 * \brief Private implementation for GetShardIteratorResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetShardIteratorResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetShardIteratorResponse instance.
 */
GetShardIteratorResponsePrivate::GetShardIteratorResponsePrivate(
    GetShardIteratorResponse * const q) : KinesisResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Kinesis GetShardIteratorResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetShardIteratorResponsePrivate::parseGetShardIteratorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetShardIteratorResponse"));
    /// @todo
}

} // namespace Kinesis
} // namespace QtAws
