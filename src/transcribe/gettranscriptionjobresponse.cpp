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

/*!
 * \class QtAws::TranscribeService::GetTranscriptionJobResponse
 * \brief The GetTranscriptionJobResponse class provides an interace for TranscribeService GetTranscriptionJob responses.
 *
 * \inmodule QtAwsTranscribeService
 *
 *  Operations and objects for transcribing speech to
 *
 * \sa TranscribeServiceClient::getTranscriptionJob
 */

/*!
 * Constructs a GetTranscriptionJobResponse object for \a reply to \a request, with parent \a parent.
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

/*!
 * \reimp
 */
const GetTranscriptionJobRequest * GetTranscriptionJobResponse::request() const
{
    Q_D(const GetTranscriptionJobResponse);
    return static_cast<const GetTranscriptionJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful TranscribeService GetTranscriptionJob \a response.
 */
void GetTranscriptionJobResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetTranscriptionJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::TranscribeService::GetTranscriptionJobResponsePrivate
 * \brief The GetTranscriptionJobResponsePrivate class provides private implementation for GetTranscriptionJobResponse.
 * \internal
 *
 * \inmodule QtAwsTranscribeService
 */

/*!
 * Constructs a GetTranscriptionJobResponsePrivate object with public implementation \a q.
 */
GetTranscriptionJobResponsePrivate::GetTranscriptionJobResponsePrivate(
    GetTranscriptionJobResponse * const q) : TranscribeServiceResponsePrivate(q)
{

}

/*!
 * Parses a TranscribeService GetTranscriptionJob response element from \a xml.
 */
void GetTranscriptionJobResponsePrivate::parseGetTranscriptionJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTranscriptionJobResponse"));
    /// @todo
}

} // namespace TranscribeService
} // namespace QtAws
