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
namespace Transcribe {

/*!
 * \class QtAws::Transcribe::CreateLanguageModelResponse
 * \brief The CreateLanguageModelResponse class provides an interace for Transcribe CreateLanguageModel responses.
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
 * \sa TranscribeClient::createLanguageModel
 */

/*!
 * Constructs a CreateLanguageModelResponse object for \a reply to \a request, with parent \a parent.
 */
CreateLanguageModelResponse::CreateLanguageModelResponse(
        const CreateLanguageModelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranscribeResponse(new CreateLanguageModelResponsePrivate(this), parent)
{
    setRequest(new CreateLanguageModelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateLanguageModelRequest * CreateLanguageModelResponse::request() const
{
    Q_D(const CreateLanguageModelResponse);
    return static_cast<const CreateLanguageModelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transcribe CreateLanguageModel \a response.
 */
void CreateLanguageModelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateLanguageModelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transcribe::CreateLanguageModelResponsePrivate
 * \brief The CreateLanguageModelResponsePrivate class provides private implementation for CreateLanguageModelResponse.
 * \internal
 *
 * \inmodule QtAwsTranscribe
 */

/*!
 * Constructs a CreateLanguageModelResponsePrivate object with public implementation \a q.
 */
CreateLanguageModelResponsePrivate::CreateLanguageModelResponsePrivate(
    CreateLanguageModelResponse * const q) : TranscribeResponsePrivate(q)
{

}

/*!
 * Parses a Transcribe CreateLanguageModel response element from \a xml.
 */
void CreateLanguageModelResponsePrivate::parseCreateLanguageModelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLanguageModelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transcribe
} // namespace QtAws
