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

#include "createlanguagemodelresponse.h"
#include "createlanguagemodelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace TranscribeService {

/*!
 * \class QtAws::TranscribeService::CreateLanguageModelResponse
 * \brief The CreateLanguageModelResponse class provides an interace for TranscribeService CreateLanguageModel responses.
 *
 * \inmodule QtAwsTranscribeService
 *
 *  Operations and objects for transcribing speech to
 *
 * \sa TranscribeServiceClient::createLanguageModel
 */

/*!
 * Constructs a CreateLanguageModelResponse object for \a reply to \a request, with parent \a parent.
 */
CreateLanguageModelResponse::CreateLanguageModelResponse(
        const CreateLanguageModelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranscribeServiceResponse(new CreateLanguageModelResponsePrivate(this), parent)
{
    setRequest(new CreateLanguageModelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateLanguageModelRequest * CreateLanguageModelResponse::request() const
{
    return static_cast<const CreateLanguageModelRequest *>(TranscribeServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful TranscribeService CreateLanguageModel \a response.
 */
void CreateLanguageModelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateLanguageModelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::TranscribeService::CreateLanguageModelResponsePrivate
 * \brief The CreateLanguageModelResponsePrivate class provides private implementation for CreateLanguageModelResponse.
 * \internal
 *
 * \inmodule QtAwsTranscribeService
 */

/*!
 * Constructs a CreateLanguageModelResponsePrivate object with public implementation \a q.
 */
CreateLanguageModelResponsePrivate::CreateLanguageModelResponsePrivate(
    CreateLanguageModelResponse * const q) : TranscribeServiceResponsePrivate(q)
{

}

/*!
 * Parses a TranscribeService CreateLanguageModel response element from \a xml.
 */
void CreateLanguageModelResponsePrivate::parseCreateLanguageModelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLanguageModelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace TranscribeService
} // namespace QtAws
