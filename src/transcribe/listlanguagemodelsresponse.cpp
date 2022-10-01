// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listlanguagemodelsresponse.h"
#include "listlanguagemodelsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transcribe {

/*!
 * \class QtAws::Transcribe::ListLanguageModelsResponse
 * \brief The ListLanguageModelsResponse class provides an interace for Transcribe ListLanguageModels responses.
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
 * \sa TranscribeClient::listLanguageModels
 */

/*!
 * Constructs a ListLanguageModelsResponse object for \a reply to \a request, with parent \a parent.
 */
ListLanguageModelsResponse::ListLanguageModelsResponse(
        const ListLanguageModelsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranscribeResponse(new ListLanguageModelsResponsePrivate(this), parent)
{
    setRequest(new ListLanguageModelsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListLanguageModelsRequest * ListLanguageModelsResponse::request() const
{
    Q_D(const ListLanguageModelsResponse);
    return static_cast<const ListLanguageModelsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transcribe ListLanguageModels \a response.
 */
void ListLanguageModelsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListLanguageModelsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transcribe::ListLanguageModelsResponsePrivate
 * \brief The ListLanguageModelsResponsePrivate class provides private implementation for ListLanguageModelsResponse.
 * \internal
 *
 * \inmodule QtAwsTranscribe
 */

/*!
 * Constructs a ListLanguageModelsResponsePrivate object with public implementation \a q.
 */
ListLanguageModelsResponsePrivate::ListLanguageModelsResponsePrivate(
    ListLanguageModelsResponse * const q) : TranscribeResponsePrivate(q)
{

}

/*!
 * Parses a Transcribe ListLanguageModels response element from \a xml.
 */
void ListLanguageModelsResponsePrivate::parseListLanguageModelsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListLanguageModelsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transcribe
} // namespace QtAws
