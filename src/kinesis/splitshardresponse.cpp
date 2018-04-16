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

#include "splitshardresponse.h"
#include "splitshardresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::SplitShardResponse
 *
 * \brief The SplitShardResponse class encapsulates Kinesis SplitShard responses.
 *
 * \ingroup Kinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::splitShard
 */

/*!
 * @brief  Constructs a new SplitShardResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SplitShardResponse::SplitShardResponse(
        const SplitShardRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisResponse(new SplitShardResponsePrivate(this), parent)
{
    setRequest(new SplitShardRequest(request));
    setReply(reply);
}

const SplitShardRequest * SplitShardResponse::request() const
{
    Q_D(const SplitShardResponse);
    return static_cast<const SplitShardRequest *>(d->request);
}

/*!
 * @brief  Parse a Kinesis SplitShard response.
 *
 * @param  response  Response to parse.
 */
void SplitShardResponse::parseSuccess(QIODevice &response)
{
    Q_D(SplitShardResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class SplitShardResponsePrivate
 *
 * \brief Private implementation for SplitShardResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new SplitShardResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SplitShardResponse instance.
 */
SplitShardResponsePrivate::SplitShardResponsePrivate(
    SplitShardResponse * const q) : KinesisResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Kinesis SplitShardResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SplitShardResponsePrivate::parseSplitShardResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SplitShardResponse"));
    /// @todo
}

} // namespace Kinesis
} // namespace QtAws
