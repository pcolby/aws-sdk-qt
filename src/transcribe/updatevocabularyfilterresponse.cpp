// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatevocabularyfilterresponse.h"
#include "updatevocabularyfilterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transcribe {

/*!
 * \class QtAws::Transcribe::UpdateVocabularyFilterResponse
 * \brief The UpdateVocabularyFilterResponse class provides an interace for Transcribe UpdateVocabularyFilter responses.
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
 * \sa TranscribeClient::updateVocabularyFilter
 */

/*!
 * Constructs a UpdateVocabularyFilterResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateVocabularyFilterResponse::UpdateVocabularyFilterResponse(
        const UpdateVocabularyFilterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranscribeResponse(new UpdateVocabularyFilterResponsePrivate(this), parent)
{
    setRequest(new UpdateVocabularyFilterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateVocabularyFilterRequest * UpdateVocabularyFilterResponse::request() const
{
    Q_D(const UpdateVocabularyFilterResponse);
    return static_cast<const UpdateVocabularyFilterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transcribe UpdateVocabularyFilter \a response.
 */
void UpdateVocabularyFilterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateVocabularyFilterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transcribe::UpdateVocabularyFilterResponsePrivate
 * \brief The UpdateVocabularyFilterResponsePrivate class provides private implementation for UpdateVocabularyFilterResponse.
 * \internal
 *
 * \inmodule QtAwsTranscribe
 */

/*!
 * Constructs a UpdateVocabularyFilterResponsePrivate object with public implementation \a q.
 */
UpdateVocabularyFilterResponsePrivate::UpdateVocabularyFilterResponsePrivate(
    UpdateVocabularyFilterResponse * const q) : TranscribeResponsePrivate(q)
{

}

/*!
 * Parses a Transcribe UpdateVocabularyFilter response element from \a xml.
 */
void UpdateVocabularyFilterResponsePrivate::parseUpdateVocabularyFilterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateVocabularyFilterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transcribe
} // namespace QtAws
