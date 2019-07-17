/*
    Copyright 2013-2019 Paul Colby

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
