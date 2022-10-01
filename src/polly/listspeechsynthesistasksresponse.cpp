// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listspeechsynthesistasksresponse.h"
#include "listspeechsynthesistasksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Polly {

/*!
 * \class QtAws::Polly::ListSpeechSynthesisTasksResponse
 * \brief The ListSpeechSynthesisTasksResponse class provides an interace for Polly ListSpeechSynthesisTasks responses.
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
 * \sa PollyClient::listSpeechSynthesisTasks
 */

/*!
 * Constructs a ListSpeechSynthesisTasksResponse object for \a reply to \a request, with parent \a parent.
 */
ListSpeechSynthesisTasksResponse::ListSpeechSynthesisTasksResponse(
        const ListSpeechSynthesisTasksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PollyResponse(new ListSpeechSynthesisTasksResponsePrivate(this), parent)
{
    setRequest(new ListSpeechSynthesisTasksRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSpeechSynthesisTasksRequest * ListSpeechSynthesisTasksResponse::request() const
{
    Q_D(const ListSpeechSynthesisTasksResponse);
    return static_cast<const ListSpeechSynthesisTasksRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Polly ListSpeechSynthesisTasks \a response.
 */
void ListSpeechSynthesisTasksResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSpeechSynthesisTasksResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Polly::ListSpeechSynthesisTasksResponsePrivate
 * \brief The ListSpeechSynthesisTasksResponsePrivate class provides private implementation for ListSpeechSynthesisTasksResponse.
 * \internal
 *
 * \inmodule QtAwsPolly
 */

/*!
 * Constructs a ListSpeechSynthesisTasksResponsePrivate object with public implementation \a q.
 */
ListSpeechSynthesisTasksResponsePrivate::ListSpeechSynthesisTasksResponsePrivate(
    ListSpeechSynthesisTasksResponse * const q) : PollyResponsePrivate(q)
{

}

/*!
 * Parses a Polly ListSpeechSynthesisTasks response element from \a xml.
 */
void ListSpeechSynthesisTasksResponsePrivate::parseListSpeechSynthesisTasksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSpeechSynthesisTasksResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Polly
} // namespace QtAws
