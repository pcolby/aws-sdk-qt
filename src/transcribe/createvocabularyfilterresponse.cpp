// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createvocabularyfilterresponse.h"
#include "createvocabularyfilterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transcribe {

/*!
 * \class QtAws::Transcribe::CreateVocabularyFilterResponse
 * \brief The CreateVocabularyFilterResponse class provides an interace for Transcribe CreateVocabularyFilter responses.
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
 * \sa TranscribeClient::createVocabularyFilter
 */

/*!
 * Constructs a CreateVocabularyFilterResponse object for \a reply to \a request, with parent \a parent.
 */
CreateVocabularyFilterResponse::CreateVocabularyFilterResponse(
        const CreateVocabularyFilterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranscribeResponse(new CreateVocabularyFilterResponsePrivate(this), parent)
{
    setRequest(new CreateVocabularyFilterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateVocabularyFilterRequest * CreateVocabularyFilterResponse::request() const
{
    Q_D(const CreateVocabularyFilterResponse);
    return static_cast<const CreateVocabularyFilterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transcribe CreateVocabularyFilter \a response.
 */
void CreateVocabularyFilterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateVocabularyFilterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transcribe::CreateVocabularyFilterResponsePrivate
 * \brief The CreateVocabularyFilterResponsePrivate class provides private implementation for CreateVocabularyFilterResponse.
 * \internal
 *
 * \inmodule QtAwsTranscribe
 */

/*!
 * Constructs a CreateVocabularyFilterResponsePrivate object with public implementation \a q.
 */
CreateVocabularyFilterResponsePrivate::CreateVocabularyFilterResponsePrivate(
    CreateVocabularyFilterResponse * const q) : TranscribeResponsePrivate(q)
{

}

/*!
 * Parses a Transcribe CreateVocabularyFilter response element from \a xml.
 */
void CreateVocabularyFilterResponsePrivate::parseCreateVocabularyFilterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateVocabularyFilterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transcribe
} // namespace QtAws
