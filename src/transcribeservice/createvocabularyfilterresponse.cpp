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

#include "createvocabularyfilterresponse.h"
#include "createvocabularyfilterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace TranscribeService {

/*!
 * \class QtAws::TranscribeService::CreateVocabularyFilterResponse
 * \brief The CreateVocabularyFilterResponse class provides an interace for TranscribeService CreateVocabularyFilter responses.
 *
 * \inmodule QtAwsTranscribeService
 *
 *  Operations and objects for transcribing speech to
 *
 * \sa TranscribeServiceClient::createVocabularyFilter
 */

/*!
 * Constructs a CreateVocabularyFilterResponse object for \a reply to \a request, with parent \a parent.
 */
CreateVocabularyFilterResponse::CreateVocabularyFilterResponse(
        const CreateVocabularyFilterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranscribeServiceResponse(new CreateVocabularyFilterResponsePrivate(this), parent)
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
 * Parses a successful TranscribeService CreateVocabularyFilter \a response.
 */
void CreateVocabularyFilterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateVocabularyFilterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::TranscribeService::CreateVocabularyFilterResponsePrivate
 * \brief The CreateVocabularyFilterResponsePrivate class provides private implementation for CreateVocabularyFilterResponse.
 * \internal
 *
 * \inmodule QtAwsTranscribeService
 */

/*!
 * Constructs a CreateVocabularyFilterResponsePrivate object with public implementation \a q.
 */
CreateVocabularyFilterResponsePrivate::CreateVocabularyFilterResponsePrivate(
    CreateVocabularyFilterResponse * const q) : TranscribeServiceResponsePrivate(q)
{

}

/*!
 * Parses a TranscribeService CreateVocabularyFilter response element from \a xml.
 */
void CreateVocabularyFilterResponsePrivate::parseCreateVocabularyFilterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateVocabularyFilterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace TranscribeService
} // namespace QtAws
