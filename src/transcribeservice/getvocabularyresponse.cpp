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

#include "getvocabularyresponse.h"
#include "getvocabularyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace TranscribeService {

/*!
 * \class QtAws::TranscribeService::GetVocabularyResponse
 * \brief The GetVocabularyResponse class provides an interace for TranscribeService GetVocabulary responses.
 *
 * \inmodule QtAwsTranscribeService
 *
 *  Operations and objects for transcribing speech to
 *
 * \sa TranscribeServiceClient::getVocabulary
 */

/*!
 * Constructs a GetVocabularyResponse object for \a reply to \a request, with parent \a parent.
 */
GetVocabularyResponse::GetVocabularyResponse(
        const GetVocabularyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranscribeServiceResponse(new GetVocabularyResponsePrivate(this), parent)
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
 * Parses a successful TranscribeService GetVocabulary \a response.
 */
void GetVocabularyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetVocabularyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::TranscribeService::GetVocabularyResponsePrivate
 * \brief The GetVocabularyResponsePrivate class provides private implementation for GetVocabularyResponse.
 * \internal
 *
 * \inmodule QtAwsTranscribeService
 */

/*!
 * Constructs a GetVocabularyResponsePrivate object with public implementation \a q.
 */
GetVocabularyResponsePrivate::GetVocabularyResponsePrivate(
    GetVocabularyResponse * const q) : TranscribeServiceResponsePrivate(q)
{

}

/*!
 * Parses a TranscribeService GetVocabulary response element from \a xml.
 */
void GetVocabularyResponsePrivate::parseGetVocabularyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetVocabularyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace TranscribeService
} // namespace QtAws
