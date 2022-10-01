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

#include "evaluatesessionresponse.h"
#include "evaluatesessionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace VoiceId {

/*!
 * \class QtAws::VoiceId::EvaluateSessionResponse
 * \brief The EvaluateSessionResponse class provides an interace for VoiceId EvaluateSession responses.
 *
 * \inmodule QtAwsVoiceId
 *
 *  Amazon Connect Voice ID provides real-time caller authentication and fraud screening. This guide describes the APIs used
 *  for this service.
 *
 * \sa VoiceIdClient::evaluateSession
 */

/*!
 * Constructs a EvaluateSessionResponse object for \a reply to \a request, with parent \a parent.
 */
EvaluateSessionResponse::EvaluateSessionResponse(
        const EvaluateSessionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : VoiceIdResponse(new EvaluateSessionResponsePrivate(this), parent)
{
    setRequest(new EvaluateSessionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const EvaluateSessionRequest * EvaluateSessionResponse::request() const
{
    Q_D(const EvaluateSessionResponse);
    return static_cast<const EvaluateSessionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful VoiceId EvaluateSession \a response.
 */
void EvaluateSessionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(EvaluateSessionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::VoiceId::EvaluateSessionResponsePrivate
 * \brief The EvaluateSessionResponsePrivate class provides private implementation for EvaluateSessionResponse.
 * \internal
 *
 * \inmodule QtAwsVoiceId
 */

/*!
 * Constructs a EvaluateSessionResponsePrivate object with public implementation \a q.
 */
EvaluateSessionResponsePrivate::EvaluateSessionResponsePrivate(
    EvaluateSessionResponse * const q) : VoiceIdResponsePrivate(q)
{

}

/*!
 * Parses a VoiceId EvaluateSession response element from \a xml.
 */
void EvaluateSessionResponsePrivate::parseEvaluateSessionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EvaluateSessionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace VoiceId
} // namespace QtAws
