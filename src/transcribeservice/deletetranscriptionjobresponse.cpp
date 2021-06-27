/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deletetranscriptionjobresponse.h"
#include "deletetranscriptionjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace TranscribeService {

/*!
 * \class QtAws::TranscribeService::DeleteTranscriptionJobResponse
 * \brief The DeleteTranscriptionJobResponse class provides an interace for TranscribeService DeleteTranscriptionJob responses.
 *
 * \inmodule QtAwsTranscribeService
 *
 *  Operations and objects for transcribing speech to
 *
 * \sa TranscribeServiceClient::deleteTranscriptionJob
 */

/*!
 * Constructs a DeleteTranscriptionJobResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteTranscriptionJobResponse::DeleteTranscriptionJobResponse(
        const DeleteTranscriptionJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranscribeServiceResponse(new DeleteTranscriptionJobResponsePrivate(this), parent)
{
    setRequest(new DeleteTranscriptionJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteTranscriptionJobRequest * DeleteTranscriptionJobResponse::request() const
{
    return static_cast<const DeleteTranscriptionJobRequest *>(TranscribeServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful TranscribeService DeleteTranscriptionJob \a response.
 */
void DeleteTranscriptionJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteTranscriptionJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::TranscribeService::DeleteTranscriptionJobResponsePrivate
 * \brief The DeleteTranscriptionJobResponsePrivate class provides private implementation for DeleteTranscriptionJobResponse.
 * \internal
 *
 * \inmodule QtAwsTranscribeService
 */

/*!
 * Constructs a DeleteTranscriptionJobResponsePrivate object with public implementation \a q.
 */
DeleteTranscriptionJobResponsePrivate::DeleteTranscriptionJobResponsePrivate(
    DeleteTranscriptionJobResponse * const q) : TranscribeServiceResponsePrivate(q)
{

}

/*!
 * Parses a TranscribeService DeleteTranscriptionJob response element from \a xml.
 */
void DeleteTranscriptionJobResponsePrivate::parseDeleteTranscriptionJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteTranscriptionJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace TranscribeService
} // namespace QtAws
