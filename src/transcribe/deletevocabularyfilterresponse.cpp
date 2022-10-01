/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deletevocabularyfilterresponse.h"
#include "deletevocabularyfilterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transcribe {

/*!
 * \class QtAws::Transcribe::DeleteVocabularyFilterResponse
 * \brief The DeleteVocabularyFilterResponse class provides an interace for Transcribe DeleteVocabularyFilter responses.
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
 * \sa TranscribeClient::deleteVocabularyFilter
 */

/*!
 * Constructs a DeleteVocabularyFilterResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteVocabularyFilterResponse::DeleteVocabularyFilterResponse(
        const DeleteVocabularyFilterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranscribeResponse(new DeleteVocabularyFilterResponsePrivate(this), parent)
{
    setRequest(new DeleteVocabularyFilterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteVocabularyFilterRequest * DeleteVocabularyFilterResponse::request() const
{
    Q_D(const DeleteVocabularyFilterResponse);
    return static_cast<const DeleteVocabularyFilterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transcribe DeleteVocabularyFilter \a response.
 */
void DeleteVocabularyFilterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteVocabularyFilterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transcribe::DeleteVocabularyFilterResponsePrivate
 * \brief The DeleteVocabularyFilterResponsePrivate class provides private implementation for DeleteVocabularyFilterResponse.
 * \internal
 *
 * \inmodule QtAwsTranscribe
 */

/*!
 * Constructs a DeleteVocabularyFilterResponsePrivate object with public implementation \a q.
 */
DeleteVocabularyFilterResponsePrivate::DeleteVocabularyFilterResponsePrivate(
    DeleteVocabularyFilterResponse * const q) : TranscribeResponsePrivate(q)
{

}

/*!
 * Parses a Transcribe DeleteVocabularyFilter response element from \a xml.
 */
void DeleteVocabularyFilterResponsePrivate::parseDeleteVocabularyFilterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteVocabularyFilterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transcribe
} // namespace QtAws
