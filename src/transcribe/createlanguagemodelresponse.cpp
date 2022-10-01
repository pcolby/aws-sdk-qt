// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
