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

#include "listmedicalvocabulariesresponse.h"
#include "listmedicalvocabulariesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transcribe {

/*!
 * \class QtAws::Transcribe::ListMedicalVocabulariesResponse
 * \brief The ListMedicalVocabulariesResponse class provides an interace for Transcribe ListMedicalVocabularies responses.
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
 * \sa TranscribeClient::listMedicalVocabularies
 */

/*!
 * Constructs a ListMedicalVocabulariesResponse object for \a reply to \a request, with parent \a parent.
 */
ListMedicalVocabulariesResponse::ListMedicalVocabulariesResponse(
        const ListMedicalVocabulariesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranscribeResponse(new ListMedicalVocabulariesResponsePrivate(this), parent)
{
    setRequest(new ListMedicalVocabulariesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListMedicalVocabulariesRequest * ListMedicalVocabulariesResponse::request() const
{
    Q_D(const ListMedicalVocabulariesResponse);
    return static_cast<const ListMedicalVocabulariesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transcribe ListMedicalVocabularies \a response.
 */
void ListMedicalVocabulariesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListMedicalVocabulariesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transcribe::ListMedicalVocabulariesResponsePrivate
 * \brief The ListMedicalVocabulariesResponsePrivate class provides private implementation for ListMedicalVocabulariesResponse.
 * \internal
 *
 * \inmodule QtAwsTranscribe
 */

/*!
 * Constructs a ListMedicalVocabulariesResponsePrivate object with public implementation \a q.
 */
ListMedicalVocabulariesResponsePrivate::ListMedicalVocabulariesResponsePrivate(
    ListMedicalVocabulariesResponse * const q) : TranscribeResponsePrivate(q)
{

}

/*!
 * Parses a Transcribe ListMedicalVocabularies response element from \a xml.
 */
void ListMedicalVocabulariesResponsePrivate::parseListMedicalVocabulariesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListMedicalVocabulariesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transcribe
} // namespace QtAws
