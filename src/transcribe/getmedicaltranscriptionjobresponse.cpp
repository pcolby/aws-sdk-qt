// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmedicaltranscriptionjobresponse.h"
#include "getmedicaltranscriptionjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transcribe {

/*!
 * \class QtAws::Transcribe::GetMedicalTranscriptionJobResponse
 * \brief The GetMedicalTranscriptionJobResponse class provides an interace for Transcribe GetMedicalTranscriptionJob responses.
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
 * \sa TranscribeClient::getMedicalTranscriptionJob
 */

/*!
 * Constructs a GetMedicalTranscriptionJobResponse object for \a reply to \a request, with parent \a parent.
 */
GetMedicalTranscriptionJobResponse::GetMedicalTranscriptionJobResponse(
        const GetMedicalTranscriptionJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranscribeResponse(new GetMedicalTranscriptionJobResponsePrivate(this), parent)
{
    setRequest(new GetMedicalTranscriptionJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetMedicalTranscriptionJobRequest * GetMedicalTranscriptionJobResponse::request() const
{
    Q_D(const GetMedicalTranscriptionJobResponse);
    return static_cast<const GetMedicalTranscriptionJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transcribe GetMedicalTranscriptionJob \a response.
 */
void GetMedicalTranscriptionJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetMedicalTranscriptionJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transcribe::GetMedicalTranscriptionJobResponsePrivate
 * \brief The GetMedicalTranscriptionJobResponsePrivate class provides private implementation for GetMedicalTranscriptionJobResponse.
 * \internal
 *
 * \inmodule QtAwsTranscribe
 */

/*!
 * Constructs a GetMedicalTranscriptionJobResponsePrivate object with public implementation \a q.
 */
GetMedicalTranscriptionJobResponsePrivate::GetMedicalTranscriptionJobResponsePrivate(
    GetMedicalTranscriptionJobResponse * const q) : TranscribeResponsePrivate(q)
{

}

/*!
 * Parses a Transcribe GetMedicalTranscriptionJob response element from \a xml.
 */
void GetMedicalTranscriptionJobResponsePrivate::parseGetMedicalTranscriptionJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMedicalTranscriptionJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transcribe
} // namespace QtAws
