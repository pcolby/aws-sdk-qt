// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
