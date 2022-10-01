// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listvocabularyfiltersresponse.h"
#include "listvocabularyfiltersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transcribe {

/*!
 * \class QtAws::Transcribe::ListVocabularyFiltersResponse
 * \brief The ListVocabularyFiltersResponse class provides an interace for Transcribe ListVocabularyFilters responses.
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
 * \sa TranscribeClient::listVocabularyFilters
 */

/*!
 * Constructs a ListVocabularyFiltersResponse object for \a reply to \a request, with parent \a parent.
 */
ListVocabularyFiltersResponse::ListVocabularyFiltersResponse(
        const ListVocabularyFiltersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranscribeResponse(new ListVocabularyFiltersResponsePrivate(this), parent)
{
    setRequest(new ListVocabularyFiltersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListVocabularyFiltersRequest * ListVocabularyFiltersResponse::request() const
{
    Q_D(const ListVocabularyFiltersResponse);
    return static_cast<const ListVocabularyFiltersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transcribe ListVocabularyFilters \a response.
 */
void ListVocabularyFiltersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListVocabularyFiltersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transcribe::ListVocabularyFiltersResponsePrivate
 * \brief The ListVocabularyFiltersResponsePrivate class provides private implementation for ListVocabularyFiltersResponse.
 * \internal
 *
 * \inmodule QtAwsTranscribe
 */

/*!
 * Constructs a ListVocabularyFiltersResponsePrivate object with public implementation \a q.
 */
ListVocabularyFiltersResponsePrivate::ListVocabularyFiltersResponsePrivate(
    ListVocabularyFiltersResponse * const q) : TranscribeResponsePrivate(q)
{

}

/*!
 * Parses a Transcribe ListVocabularyFilters response element from \a xml.
 */
void ListVocabularyFiltersResponsePrivate::parseListVocabularyFiltersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListVocabularyFiltersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transcribe
} // namespace QtAws
