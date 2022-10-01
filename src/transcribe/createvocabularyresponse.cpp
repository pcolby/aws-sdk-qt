// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createvocabularyresponse.h"
#include "createvocabularyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transcribe {

/*!
 * \class QtAws::Transcribe::CreateVocabularyResponse
 * \brief The CreateVocabularyResponse class provides an interace for Transcribe CreateVocabulary responses.
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
 * \sa TranscribeClient::createVocabulary
 */

/*!
 * Constructs a CreateVocabularyResponse object for \a reply to \a request, with parent \a parent.
 */
CreateVocabularyResponse::CreateVocabularyResponse(
        const CreateVocabularyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranscribeResponse(new CreateVocabularyResponsePrivate(this), parent)
{
    setRequest(new CreateVocabularyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateVocabularyRequest * CreateVocabularyResponse::request() const
{
    Q_D(const CreateVocabularyResponse);
    return static_cast<const CreateVocabularyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transcribe CreateVocabulary \a response.
 */
void CreateVocabularyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateVocabularyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transcribe::CreateVocabularyResponsePrivate
 * \brief The CreateVocabularyResponsePrivate class provides private implementation for CreateVocabularyResponse.
 * \internal
 *
 * \inmodule QtAwsTranscribe
 */

/*!
 * Constructs a CreateVocabularyResponsePrivate object with public implementation \a q.
 */
CreateVocabularyResponsePrivate::CreateVocabularyResponsePrivate(
    CreateVocabularyResponse * const q) : TranscribeResponsePrivate(q)
{

}

/*!
 * Parses a Transcribe CreateVocabulary response element from \a xml.
 */
void CreateVocabularyResponsePrivate::parseCreateVocabularyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateVocabularyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transcribe
} // namespace QtAws
