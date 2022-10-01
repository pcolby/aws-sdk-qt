// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmedicalvocabularyresponse.h"
#include "getmedicalvocabularyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transcribe {

/*!
 * \class QtAws::Transcribe::GetMedicalVocabularyResponse
 * \brief The GetMedicalVocabularyResponse class provides an interace for Transcribe GetMedicalVocabulary responses.
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
 * \sa TranscribeClient::getMedicalVocabulary
 */

/*!
 * Constructs a GetMedicalVocabularyResponse object for \a reply to \a request, with parent \a parent.
 */
GetMedicalVocabularyResponse::GetMedicalVocabularyResponse(
        const GetMedicalVocabularyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranscribeResponse(new GetMedicalVocabularyResponsePrivate(this), parent)
{
    setRequest(new GetMedicalVocabularyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetMedicalVocabularyRequest * GetMedicalVocabularyResponse::request() const
{
    Q_D(const GetMedicalVocabularyResponse);
    return static_cast<const GetMedicalVocabularyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transcribe GetMedicalVocabulary \a response.
 */
void GetMedicalVocabularyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetMedicalVocabularyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transcribe::GetMedicalVocabularyResponsePrivate
 * \brief The GetMedicalVocabularyResponsePrivate class provides private implementation for GetMedicalVocabularyResponse.
 * \internal
 *
 * \inmodule QtAwsTranscribe
 */

/*!
 * Constructs a GetMedicalVocabularyResponsePrivate object with public implementation \a q.
 */
GetMedicalVocabularyResponsePrivate::GetMedicalVocabularyResponsePrivate(
    GetMedicalVocabularyResponse * const q) : TranscribeResponsePrivate(q)
{

}

/*!
 * Parses a Transcribe GetMedicalVocabulary response element from \a xml.
 */
void GetMedicalVocabularyResponsePrivate::parseGetMedicalVocabularyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMedicalVocabularyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transcribe
} // namespace QtAws
