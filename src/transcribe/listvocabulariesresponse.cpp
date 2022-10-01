// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listvocabulariesresponse.h"
#include "listvocabulariesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transcribe {

/*!
 * \class QtAws::Transcribe::ListVocabulariesResponse
 * \brief The ListVocabulariesResponse class provides an interace for Transcribe ListVocabularies responses.
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
 * \sa TranscribeClient::listVocabularies
 */

/*!
 * Constructs a ListVocabulariesResponse object for \a reply to \a request, with parent \a parent.
 */
ListVocabulariesResponse::ListVocabulariesResponse(
        const ListVocabulariesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranscribeResponse(new ListVocabulariesResponsePrivate(this), parent)
{
    setRequest(new ListVocabulariesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListVocabulariesRequest * ListVocabulariesResponse::request() const
{
    Q_D(const ListVocabulariesResponse);
    return static_cast<const ListVocabulariesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transcribe ListVocabularies \a response.
 */
void ListVocabulariesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListVocabulariesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transcribe::ListVocabulariesResponsePrivate
 * \brief The ListVocabulariesResponsePrivate class provides private implementation for ListVocabulariesResponse.
 * \internal
 *
 * \inmodule QtAwsTranscribe
 */

/*!
 * Constructs a ListVocabulariesResponsePrivate object with public implementation \a q.
 */
ListVocabulariesResponsePrivate::ListVocabulariesResponsePrivate(
    ListVocabulariesResponse * const q) : TranscribeResponsePrivate(q)
{

}

/*!
 * Parses a Transcribe ListVocabularies response element from \a xml.
 */
void ListVocabulariesResponsePrivate::parseListVocabulariesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListVocabulariesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transcribe
} // namespace QtAws
