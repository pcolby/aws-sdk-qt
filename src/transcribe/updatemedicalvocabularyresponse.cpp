// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatemedicalvocabularyresponse.h"
#include "updatemedicalvocabularyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transcribe {

/*!
 * \class QtAws::Transcribe::UpdateMedicalVocabularyResponse
 * \brief The UpdateMedicalVocabularyResponse class provides an interace for Transcribe UpdateMedicalVocabulary responses.
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
 * \sa TranscribeClient::updateMedicalVocabulary
 */

/*!
 * Constructs a UpdateMedicalVocabularyResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateMedicalVocabularyResponse::UpdateMedicalVocabularyResponse(
        const UpdateMedicalVocabularyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranscribeResponse(new UpdateMedicalVocabularyResponsePrivate(this), parent)
{
    setRequest(new UpdateMedicalVocabularyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateMedicalVocabularyRequest * UpdateMedicalVocabularyResponse::request() const
{
    Q_D(const UpdateMedicalVocabularyResponse);
    return static_cast<const UpdateMedicalVocabularyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transcribe UpdateMedicalVocabulary \a response.
 */
void UpdateMedicalVocabularyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateMedicalVocabularyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transcribe::UpdateMedicalVocabularyResponsePrivate
 * \brief The UpdateMedicalVocabularyResponsePrivate class provides private implementation for UpdateMedicalVocabularyResponse.
 * \internal
 *
 * \inmodule QtAwsTranscribe
 */

/*!
 * Constructs a UpdateMedicalVocabularyResponsePrivate object with public implementation \a q.
 */
UpdateMedicalVocabularyResponsePrivate::UpdateMedicalVocabularyResponsePrivate(
    UpdateMedicalVocabularyResponse * const q) : TranscribeResponsePrivate(q)
{

}

/*!
 * Parses a Transcribe UpdateMedicalVocabulary response element from \a xml.
 */
void UpdateMedicalVocabularyResponsePrivate::parseUpdateMedicalVocabularyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateMedicalVocabularyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transcribe
} // namespace QtAws
