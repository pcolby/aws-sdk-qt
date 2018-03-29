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

#include "gettranscriptionjobresponse.h"
#include "gettranscriptionjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace TranscribeService {

/**
 * @class  GetTranscriptionJobResponse
 *
 * @brief  Handles TranscribeService GetTranscriptionJob responses.
 *
 * @see    TranscribeServiceClient::getTranscriptionJob
 */

/**
 * @brief  Constructs a new GetTranscriptionJobResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetTranscriptionJobResponse::GetTranscriptionJobResponse(
        const GetTranscriptionJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranscribeServiceResponse(new GetTranscriptionJobResponsePrivate(this), parent)
{
    setRequest(new GetTranscriptionJobRequest(request));
    setReply(reply);
}

const GetTranscriptionJobRequest * GetTranscriptionJobResponse::request() const
{
    Q_D(const GetTranscriptionJobResponse);
    return static_cast<const GetTranscriptionJobRequest *>(d->request);
}

/**
 * @brief  Parse a TranscribeService GetTranscriptionJob response.
 *
 * @param  response  Response to parse.
 */
void GetTranscriptionJobResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetTranscriptionJobResponsePrivate
 *
 * @brief  Private implementation for GetTranscriptionJobResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetTranscriptionJobResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetTranscriptionJobResponse instance.
 */
GetTranscriptionJobResponsePrivate::GetTranscriptionJobResponsePrivate(
    GetTranscriptionJobQueueResponse * const q) : GetTranscriptionJobPrivate(q)
{

}

/**
 * @brief  Parse an TranscribeService GetTranscriptionJobResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetTranscriptionJobResponsePrivate::GetTranscriptionJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTranscriptionJobResponse"));
    /// @todo
}

} // namespace TranscribeService
} // namespace QtAws
