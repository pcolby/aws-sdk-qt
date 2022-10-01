// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getspeechsynthesistaskresponse.h"
#include "getspeechsynthesistaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Polly {

/*!
 * \class QtAws::Polly::GetSpeechSynthesisTaskResponse
 * \brief The GetSpeechSynthesisTaskResponse class provides an interace for Polly GetSpeechSynthesisTask responses.
 *
 * \inmodule QtAwsPolly
 *
 *  Amazon Polly is a web service that makes it easy to synthesize speech from
 * 
 *  text>
 * 
 *  The Amazon Polly service provides API operations for synthesizing high-quality speech from plain text and Speech
 *  Synthesis Markup Language (SSML), along with managing pronunciations lexicons that enable you to get the best results
 *  for your application
 *
 * \sa PollyClient::getSpeechSynthesisTask
 */

/*!
 * Constructs a GetSpeechSynthesisTaskResponse object for \a reply to \a request, with parent \a parent.
 */
GetSpeechSynthesisTaskResponse::GetSpeechSynthesisTaskResponse(
        const GetSpeechSynthesisTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PollyResponse(new GetSpeechSynthesisTaskResponsePrivate(this), parent)
{
    setRequest(new GetSpeechSynthesisTaskRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSpeechSynthesisTaskRequest * GetSpeechSynthesisTaskResponse::request() const
{
    Q_D(const GetSpeechSynthesisTaskResponse);
    return static_cast<const GetSpeechSynthesisTaskRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Polly GetSpeechSynthesisTask \a response.
 */
void GetSpeechSynthesisTaskResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSpeechSynthesisTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Polly::GetSpeechSynthesisTaskResponsePrivate
 * \brief The GetSpeechSynthesisTaskResponsePrivate class provides private implementation for GetSpeechSynthesisTaskResponse.
 * \internal
 *
 * \inmodule QtAwsPolly
 */

/*!
 * Constructs a GetSpeechSynthesisTaskResponsePrivate object with public implementation \a q.
 */
GetSpeechSynthesisTaskResponsePrivate::GetSpeechSynthesisTaskResponsePrivate(
    GetSpeechSynthesisTaskResponse * const q) : PollyResponsePrivate(q)
{

}

/*!
 * Parses a Polly GetSpeechSynthesisTask response element from \a xml.
 */
void GetSpeechSynthesisTaskResponsePrivate::parseGetSpeechSynthesisTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSpeechSynthesisTaskResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Polly
} // namespace QtAws
