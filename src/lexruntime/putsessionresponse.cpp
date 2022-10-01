// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putsessionresponse.h"
#include "putsessionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexRuntime {

/*!
 * \class QtAws::LexRuntime::PutSessionResponse
 * \brief The PutSessionResponse class provides an interace for LexRuntime PutSession responses.
 *
 * \inmodule QtAwsLexRuntime
 *
 *  Amazon Lex provides both build and runtime endpoints. Each endpoint provides a set of operations (API). Your
 *  conversational bot uses the runtime API to understand user utterances (user input text or voice). For example, suppose a
 *  user says "I want pizza", your bot sends this input to Amazon Lex using the runtime API. Amazon Lex recognizes that the
 *  user request is for the OrderPizza intent (one of the intents defined in the bot). Then Amazon Lex engages in user
 *  conversation on behalf of the bot to elicit required information (slot values, such as pizza size and crust type), and
 *  then performs fulfillment activity (that you configured when you created the bot). You use the build-time API to create
 *  and manage your Amazon Lex bot. For a list of build-time operations, see the build-time API, .
 *
 * \sa LexRuntimeClient::putSession
 */

/*!
 * Constructs a PutSessionResponse object for \a reply to \a request, with parent \a parent.
 */
PutSessionResponse::PutSessionResponse(
        const PutSessionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexRuntimeResponse(new PutSessionResponsePrivate(this), parent)
{
    setRequest(new PutSessionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutSessionRequest * PutSessionResponse::request() const
{
    Q_D(const PutSessionResponse);
    return static_cast<const PutSessionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexRuntime PutSession \a response.
 */
void PutSessionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutSessionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexRuntime::PutSessionResponsePrivate
 * \brief The PutSessionResponsePrivate class provides private implementation for PutSessionResponse.
 * \internal
 *
 * \inmodule QtAwsLexRuntime
 */

/*!
 * Constructs a PutSessionResponsePrivate object with public implementation \a q.
 */
PutSessionResponsePrivate::PutSessionResponsePrivate(
    PutSessionResponse * const q) : LexRuntimeResponsePrivate(q)
{

}

/*!
 * Parses a LexRuntime PutSession response element from \a xml.
 */
void PutSessionResponsePrivate::parsePutSessionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutSessionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexRuntime
} // namespace QtAws
