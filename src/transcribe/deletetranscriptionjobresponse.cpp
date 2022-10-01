// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletetranscriptionjobresponse.h"
#include "deletetranscriptionjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transcribe {

/*!
 * \class QtAws::Transcribe::DeleteTranscriptionJobResponse
 * \brief The DeleteTranscriptionJobResponse class provides an interace for Transcribe DeleteTranscriptionJob responses.
 *
 * \inmodule QtAwsTranscribe
 *
 *  Amazon Transcribe offers three main types of batch transcription: <b>Standard</b>, <b>Medical</b>, and <b>Call
 * 
 *  Analytics</b>> <ul> <li>
 * 
 *  <b>Standard transcriptions</b> are the most common option. Refer to for
 * 
 *  details> </li> <li>
 * 
 *  <b>Medical transcriptions</b> are tailored to medical professionals and incorporate medical terms. A common use case for
 *  this service is transcribing doctor-patient dialogue into after-visit notes. Refer to for
 * 
 *  details> </li> <li>
 * 
 *  <b>Call Analytics transcriptions</b> are designed for use with call center audio on two different channels; if you're
 *  looking for insight into customer service calls, use this option. Refer to for
 *
 * \sa TranscribeClient::deleteTranscriptionJob
 */

/*!
 * Constructs a DeleteTranscriptionJobResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteTranscriptionJobResponse::DeleteTranscriptionJobResponse(
        const DeleteTranscriptionJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranscribeResponse(new DeleteTranscriptionJobResponsePrivate(this), parent)
{
    setRequest(new DeleteTranscriptionJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteTranscriptionJobRequest * DeleteTranscriptionJobResponse::request() const
{
    Q_D(const DeleteTranscriptionJobResponse);
    return static_cast<const DeleteTranscriptionJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transcribe DeleteTranscriptionJob \a response.
 */
void DeleteTranscriptionJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteTranscriptionJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transcribe::DeleteTranscriptionJobResponsePrivate
 * \brief The DeleteTranscriptionJobResponsePrivate class provides private implementation for DeleteTranscriptionJobResponse.
 * \internal
 *
 * \inmodule QtAwsTranscribe
 */

/*!
 * Constructs a DeleteTranscriptionJobResponsePrivate object with public implementation \a q.
 */
DeleteTranscriptionJobResponsePrivate::DeleteTranscriptionJobResponsePrivate(
    DeleteTranscriptionJobResponse * const q) : TranscribeResponsePrivate(q)
{

}

/*!
 * Parses a Transcribe DeleteTranscriptionJob response element from \a xml.
 */
void DeleteTranscriptionJobResponsePrivate::parseDeleteTranscriptionJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteTranscriptionJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transcribe
} // namespace QtAws
