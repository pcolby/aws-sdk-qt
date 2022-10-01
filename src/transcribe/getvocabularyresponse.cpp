// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getvocabularyresponse.h"
#include "getvocabularyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transcribe {

/*!
 * \class QtAws::Transcribe::GetVocabularyResponse
 * \brief The GetVocabularyResponse class provides an interace for Transcribe GetVocabulary responses.
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
 * \sa TranscribeClient::getVocabulary
 */

/*!
 * Constructs a GetVocabularyResponse object for \a reply to \a request, with parent \a parent.
 */
GetVocabularyResponse::GetVocabularyResponse(
        const GetVocabularyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranscribeResponse(new GetVocabularyResponsePrivate(this), parent)
{
    setRequest(new GetVocabularyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetVocabularyRequest * GetVocabularyResponse::request() const
{
    Q_D(const GetVocabularyResponse);
    return static_cast<const GetVocabularyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transcribe GetVocabulary \a response.
 */
void GetVocabularyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetVocabularyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transcribe::GetVocabularyResponsePrivate
 * \brief The GetVocabularyResponsePrivate class provides private implementation for GetVocabularyResponse.
 * \internal
 *
 * \inmodule QtAwsTranscribe
 */

/*!
 * Constructs a GetVocabularyResponsePrivate object with public implementation \a q.
 */
GetVocabularyResponsePrivate::GetVocabularyResponsePrivate(
    GetVocabularyResponse * const q) : TranscribeResponsePrivate(q)
{

}

/*!
 * Parses a Transcribe GetVocabulary response element from \a xml.
 */
void GetVocabularyResponsePrivate::parseGetVocabularyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetVocabularyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transcribe
} // namespace QtAws
