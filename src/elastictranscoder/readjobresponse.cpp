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

#include "readjobresponse.h"
#include "readjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticTranscoder {

/**
 * @class  ReadJobResponse
 *
 * @brief  Handles ElasticTranscoder ReadJob responses.
 *
 * @see    ElasticTranscoderClient::readJob
 */

/**
 * @brief  Constructs a new ReadJobResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ReadJobResponse::ReadJobResponse(
        const ReadJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticTranscoderResponse(new ReadJobResponsePrivate(this), parent)
{
    setRequest(new ReadJobRequest(request));
    setReply(reply);
}

const ReadJobRequest * ReadJobResponse::request() const
{
    Q_D(const ReadJobResponse);
    return static_cast<const ReadJobRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticTranscoder ReadJob response.
 *
 * @param  response  Response to parse.
 */
void ReadJobResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ReadJobResponsePrivate
 *
 * @brief  Private implementation for ReadJobResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ReadJobResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ReadJobResponse instance.
 */
ReadJobResponsePrivate::ReadJobResponsePrivate(
    ReadJobQueueResponse * const q) : ReadJobPrivate(q)
{

}

/**
 * @brief  Parse an ElasticTranscoder ReadJobResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ReadJobResponsePrivate::ReadJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ReadJobResponse"));
    /// @todo
}

} // namespace ElasticTranscoder
} // namespace QtAws
