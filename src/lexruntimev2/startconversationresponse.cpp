// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startconversationresponse.h"
#include "startconversationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexRuntimeV2 {

/*!
 * \class QtAws::LexRuntimeV2::StartConversationResponse
 * \brief The StartConversationResponse class provides an interace for LexRuntimeV2 StartConversation responses.
 *
 * \inmodule QtAwsLexRuntimeV2
 *
 *
 * \sa LexRuntimeV2Client::startConversation
 */

/*!
 * Constructs a StartConversationResponse object for \a reply to \a request, with parent \a parent.
 */
StartConversationResponse::StartConversationResponse(
        const StartConversationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexRuntimeV2Response(new StartConversationResponsePrivate(this), parent)
{
    setRequest(new StartConversationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartConversationRequest * StartConversationResponse::request() const
{
    Q_D(const StartConversationResponse);
    return static_cast<const StartConversationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexRuntimeV2 StartConversation \a response.
 */
void StartConversationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartConversationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexRuntimeV2::StartConversationResponsePrivate
 * \brief The StartConversationResponsePrivate class provides private implementation for StartConversationResponse.
 * \internal
 *
 * \inmodule QtAwsLexRuntimeV2
 */

/*!
 * Constructs a StartConversationResponsePrivate object with public implementation \a q.
 */
StartConversationResponsePrivate::StartConversationResponsePrivate(
    StartConversationResponse * const q) : LexRuntimeV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexRuntimeV2 StartConversation response element from \a xml.
 */
void StartConversationResponsePrivate::parseStartConversationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartConversationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexRuntimeV2
} // namespace QtAws
