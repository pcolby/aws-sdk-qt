// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sendbonusresponse.h"
#include "sendbonusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::SendBonusResponse
 * \brief The SendBonusResponse class provides an interace for MTurk SendBonus responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::sendBonus
 */

/*!
 * Constructs a SendBonusResponse object for \a reply to \a request, with parent \a parent.
 */
SendBonusResponse::SendBonusResponse(
        const SendBonusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new SendBonusResponsePrivate(this), parent)
{
    setRequest(new SendBonusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SendBonusRequest * SendBonusResponse::request() const
{
    Q_D(const SendBonusResponse);
    return static_cast<const SendBonusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MTurk SendBonus \a response.
 */
void SendBonusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SendBonusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::SendBonusResponsePrivate
 * \brief The SendBonusResponsePrivate class provides private implementation for SendBonusResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a SendBonusResponsePrivate object with public implementation \a q.
 */
SendBonusResponsePrivate::SendBonusResponsePrivate(
    SendBonusResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk SendBonus response element from \a xml.
 */
void SendBonusResponsePrivate::parseSendBonusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendBonusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MTurk
} // namespace QtAws
