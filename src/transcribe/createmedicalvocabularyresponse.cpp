// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createmedicalvocabularyresponse.h"
#include "createmedicalvocabularyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transcribe {

/*!
 * \class QtAws::Transcribe::CreateMedicalVocabularyResponse
 * \brief The CreateMedicalVocabularyResponse class provides an interace for Transcribe CreateMedicalVocabulary responses.
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
 * \sa TranscribeClient::createMedicalVocabulary
 */

/*!
 * Constructs a CreateMedicalVocabularyResponse object for \a reply to \a request, with parent \a parent.
 */
CreateMedicalVocabularyResponse::CreateMedicalVocabularyResponse(
        const CreateMedicalVocabularyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranscribeResponse(new CreateMedicalVocabularyResponsePrivate(this), parent)
{
    setRequest(new CreateMedicalVocabularyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateMedicalVocabularyRequest * CreateMedicalVocabularyResponse::request() const
{
    Q_D(const CreateMedicalVocabularyResponse);
    return static_cast<const CreateMedicalVocabularyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transcribe CreateMedicalVocabulary \a response.
 */
void CreateMedicalVocabularyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateMedicalVocabularyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transcribe::CreateMedicalVocabularyResponsePrivate
 * \brief The CreateMedicalVocabularyResponsePrivate class provides private implementation for CreateMedicalVocabularyResponse.
 * \internal
 *
 * \inmodule QtAwsTranscribe
 */

/*!
 * Constructs a CreateMedicalVocabularyResponsePrivate object with public implementation \a q.
 */
CreateMedicalVocabularyResponsePrivate::CreateMedicalVocabularyResponsePrivate(
    CreateMedicalVocabularyResponse * const q) : TranscribeResponsePrivate(q)
{

}

/*!
 * Parses a Transcribe CreateMedicalVocabulary response element from \a xml.
 */
void CreateMedicalVocabularyResponsePrivate::parseCreateMedicalVocabularyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateMedicalVocabularyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transcribe
} // namespace QtAws
