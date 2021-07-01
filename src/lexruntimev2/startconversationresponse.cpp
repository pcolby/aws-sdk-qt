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
