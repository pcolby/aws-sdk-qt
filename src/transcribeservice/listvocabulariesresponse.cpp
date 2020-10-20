/*
    Copyright 2013-2020 Paul Colby

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

#include "listvocabulariesresponse.h"
#include "listvocabulariesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace TranscribeService {

/*!
 * \class QtAws::TranscribeService::ListVocabulariesResponse
 * \brief The ListVocabulariesResponse class provides an interace for TranscribeService ListVocabularies responses.
 *
 * \inmodule QtAwsTranscribeService
 *
 *  Operations and objects for transcribing speech to
 *
 * \sa TranscribeServiceClient::listVocabularies
 */

/*!
 * Constructs a ListVocabulariesResponse object for \a reply to \a request, with parent \a parent.
 */
ListVocabulariesResponse::ListVocabulariesResponse(
        const ListVocabulariesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranscribeServiceResponse(new ListVocabulariesResponsePrivate(this), parent)
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
 * Parses a successful TranscribeService ListVocabularies \a response.
 */
void ListVocabulariesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListVocabulariesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::TranscribeService::ListVocabulariesResponsePrivate
 * \brief The ListVocabulariesResponsePrivate class provides private implementation for ListVocabulariesResponse.
 * \internal
 *
 * \inmodule QtAwsTranscribeService
 */

/*!
 * Constructs a ListVocabulariesResponsePrivate object with public implementation \a q.
 */
ListVocabulariesResponsePrivate::ListVocabulariesResponsePrivate(
    ListVocabulariesResponse * const q) : TranscribeServiceResponsePrivate(q)
{

}

/*!
 * Parses a TranscribeService ListVocabularies response element from \a xml.
 */
void ListVocabulariesResponsePrivate::parseListVocabulariesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListVocabulariesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace TranscribeService
} // namespace QtAws
