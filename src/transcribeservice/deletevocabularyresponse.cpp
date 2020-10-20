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

#include "deletevocabularyresponse.h"
#include "deletevocabularyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace TranscribeService {

/*!
 * \class QtAws::TranscribeService::DeleteVocabularyResponse
 * \brief The DeleteVocabularyResponse class provides an interace for TranscribeService DeleteVocabulary responses.
 *
 * \inmodule QtAwsTranscribeService
 *
 *  Operations and objects for transcribing speech to
 *
 * \sa TranscribeServiceClient::deleteVocabulary
 */

/*!
 * Constructs a DeleteVocabularyResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteVocabularyResponse::DeleteVocabularyResponse(
        const DeleteVocabularyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranscribeServiceResponse(new DeleteVocabularyResponsePrivate(this), parent)
{
    setRequest(new DeleteVocabularyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteVocabularyRequest * DeleteVocabularyResponse::request() const
{
    Q_D(const DeleteVocabularyResponse);
    return static_cast<const DeleteVocabularyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful TranscribeService DeleteVocabulary \a response.
 */
void DeleteVocabularyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteVocabularyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::TranscribeService::DeleteVocabularyResponsePrivate
 * \brief The DeleteVocabularyResponsePrivate class provides private implementation for DeleteVocabularyResponse.
 * \internal
 *
 * \inmodule QtAwsTranscribeService
 */

/*!
 * Constructs a DeleteVocabularyResponsePrivate object with public implementation \a q.
 */
DeleteVocabularyResponsePrivate::DeleteVocabularyResponsePrivate(
    DeleteVocabularyResponse * const q) : TranscribeServiceResponsePrivate(q)
{

}

/*!
 * Parses a TranscribeService DeleteVocabulary response element from \a xml.
 */
void DeleteVocabularyResponsePrivate::parseDeleteVocabularyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteVocabularyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace TranscribeService
} // namespace QtAws
