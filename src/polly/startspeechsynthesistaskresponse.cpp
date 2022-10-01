// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startspeechsynthesistaskresponse.h"
#include "startspeechsynthesistaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Polly {

/*!
 * \class QtAws::Polly::StartSpeechSynthesisTaskResponse
 * \brief The StartSpeechSynthesisTaskResponse class provides an interace for Polly StartSpeechSynthesisTask responses.
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
 * \sa PollyClient::startSpeechSynthesisTask
 */

/*!
 * Constructs a StartSpeechSynthesisTaskResponse object for \a reply to \a request, with parent \a parent.
 */
StartSpeechSynthesisTaskResponse::StartSpeechSynthesisTaskResponse(
        const StartSpeechSynthesisTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PollyResponse(new StartSpeechSynthesisTaskResponsePrivate(this), parent)
{
    setRequest(new StartSpeechSynthesisTaskRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartSpeechSynthesisTaskRequest * StartSpeechSynthesisTaskResponse::request() const
{
    Q_D(const StartSpeechSynthesisTaskResponse);
    return static_cast<const StartSpeechSynthesisTaskRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Polly StartSpeechSynthesisTask \a response.
 */
void StartSpeechSynthesisTaskResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartSpeechSynthesisTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Polly::StartSpeechSynthesisTaskResponsePrivate
 * \brief The StartSpeechSynthesisTaskResponsePrivate class provides private implementation for StartSpeechSynthesisTaskResponse.
 * \internal
 *
 * \inmodule QtAwsPolly
 */

/*!
 * Constructs a StartSpeechSynthesisTaskResponsePrivate object with public implementation \a q.
 */
StartSpeechSynthesisTaskResponsePrivate::StartSpeechSynthesisTaskResponsePrivate(
    StartSpeechSynthesisTaskResponse * const q) : PollyResponsePrivate(q)
{

}

/*!
 * Parses a Polly StartSpeechSynthesisTask response element from \a xml.
 */
void StartSpeechSynthesisTaskResponsePrivate::parseStartSpeechSynthesisTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartSpeechSynthesisTaskResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Polly
} // namespace QtAws
