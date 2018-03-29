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

#include "starttranscriptionjobresponse.h"
#include "starttranscriptionjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace TranscribeService {

/**
 * @class  StartTranscriptionJobResponse
 *
 * @brief  Handles TranscribeService StartTranscriptionJob responses.
 *
 * @see    TranscribeServiceClient::startTranscriptionJob
 */

/**
 * @brief  Constructs a new StartTranscriptionJobResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartTranscriptionJobResponse::StartTranscriptionJobResponse(
        const StartTranscriptionJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranscribeServiceResponse(new StartTranscriptionJobResponsePrivate(this), parent)
{
    setRequest(new StartTranscriptionJobRequest(request));
    setReply(reply);
}

const StartTranscriptionJobRequest * StartTranscriptionJobResponse::request() const
{
    Q_D(const StartTranscriptionJobResponse);
    return static_cast<const StartTranscriptionJobRequest *>(d->request);
}

/**
 * @brief  Parse a TranscribeService StartTranscriptionJob response.
 *
 * @param  response  Response to parse.
 */
void StartTranscriptionJobResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StartTranscriptionJobResponsePrivate
 *
 * @brief  Private implementation for StartTranscriptionJobResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartTranscriptionJobResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StartTranscriptionJobResponse instance.
 */
StartTranscriptionJobResponsePrivate::StartTranscriptionJobResponsePrivate(
    StartTranscriptionJobResponse * const q) : TranscribeServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an TranscribeService StartTranscriptionJobResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StartTranscriptionJobResponsePrivate::StartTranscriptionJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartTranscriptionJobResponse"));
    /// @todo
}

} // namespace TranscribeService
} // namespace QtAws
