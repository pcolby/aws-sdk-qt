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

#include "deletelanguagemodelresponse.h"
#include "deletelanguagemodelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace TranscribeService {

/*!
 * \class QtAws::TranscribeService::DeleteLanguageModelResponse
 * \brief The DeleteLanguageModelResponse class provides an interace for TranscribeService DeleteLanguageModel responses.
 *
 * \inmodule QtAwsTranscribeService
 *
 *  Operations and objects for transcribing speech to
 *
 * \sa TranscribeServiceClient::deleteLanguageModel
 */

/*!
 * Constructs a DeleteLanguageModelResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteLanguageModelResponse::DeleteLanguageModelResponse(
        const DeleteLanguageModelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranscribeServiceResponse(new DeleteLanguageModelResponsePrivate(this), parent)
{
    setRequest(new DeleteLanguageModelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteLanguageModelRequest * DeleteLanguageModelResponse::request() const
{
    return static_cast<const DeleteLanguageModelRequest *>(TranscribeServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful TranscribeService DeleteLanguageModel \a response.
 */
void DeleteLanguageModelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteLanguageModelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::TranscribeService::DeleteLanguageModelResponsePrivate
 * \brief The DeleteLanguageModelResponsePrivate class provides private implementation for DeleteLanguageModelResponse.
 * \internal
 *
 * \inmodule QtAwsTranscribeService
 */

/*!
 * Constructs a DeleteLanguageModelResponsePrivate object with public implementation \a q.
 */
DeleteLanguageModelResponsePrivate::DeleteLanguageModelResponsePrivate(
    DeleteLanguageModelResponse * const q) : TranscribeServiceResponsePrivate(q)
{

}

/*!
 * Parses a TranscribeService DeleteLanguageModel response element from \a xml.
 */
void DeleteLanguageModelResponsePrivate::parseDeleteLanguageModelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteLanguageModelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace TranscribeService
} // namespace QtAws
