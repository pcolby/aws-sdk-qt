/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createvocabularyresponse.h"
#include "createvocabularyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace TranscribeService {

/*!
 * \class QtAws::TranscribeService::CreateVocabularyResponse
 * \brief The CreateVocabularyResponse class provides an interace for TranscribeService CreateVocabulary responses.
 *
 * \inmodule QtAwsTranscribeService
 *
 *  Operations and objects for transcribing speech to
 *
 * \sa TranscribeServiceClient::createVocabulary
 */

/*!
 * Constructs a CreateVocabularyResponse object for \a reply to \a request, with parent \a parent.
 */
CreateVocabularyResponse::CreateVocabularyResponse(
        const CreateVocabularyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranscribeServiceResponse(new CreateVocabularyResponsePrivate(this), parent)
{
    setRequest(new CreateVocabularyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateVocabularyRequest * CreateVocabularyResponse::request() const
{
    Q_D(const CreateVocabularyResponse);
    return static_cast<const CreateVocabularyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful TranscribeService CreateVocabulary \a response.
 */
void CreateVocabularyResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateVocabularyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::TranscribeService::CreateVocabularyResponsePrivate
 * \brief The CreateVocabularyResponsePrivate class provides private implementation for CreateVocabularyResponse.
 * \internal
 *
 * \inmodule QtAwsTranscribeService
 */

/*!
 * Constructs a CreateVocabularyResponsePrivate object with public implementation \a q.
 */
CreateVocabularyResponsePrivate::CreateVocabularyResponsePrivate(
    CreateVocabularyResponse * const q) : TranscribeServiceResponsePrivate(q)
{

}

/*!
 * Parses a TranscribeService CreateVocabulary response element from \a xml.
 */
void CreateVocabularyResponsePrivate::parseCreateVocabularyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateVocabularyResponse"));
    /// @todo
}

} // namespace TranscribeService
} // namespace QtAws
