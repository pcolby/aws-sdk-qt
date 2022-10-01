// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sendmessagesresponse.h"
#include "sendmessagesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::SendMessagesResponse
 * \brief The SendMessagesResponse class provides an interace for Pinpoint SendMessages responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::sendMessages
 */

/*!
 * Constructs a SendMessagesResponse object for \a reply to \a request, with parent \a parent.
 */
SendMessagesResponse::SendMessagesResponse(
        const SendMessagesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new SendMessagesResponsePrivate(this), parent)
{
    setRequest(new SendMessagesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SendMessagesRequest * SendMessagesResponse::request() const
{
    Q_D(const SendMessagesResponse);
    return static_cast<const SendMessagesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint SendMessages \a response.
 */
void SendMessagesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SendMessagesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::SendMessagesResponsePrivate
 * \brief The SendMessagesResponsePrivate class provides private implementation for SendMessagesResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a SendMessagesResponsePrivate object with public implementation \a q.
 */
SendMessagesResponsePrivate::SendMessagesResponsePrivate(
    SendMessagesResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint SendMessages response element from \a xml.
 */
void SendMessagesResponsePrivate::parseSendMessagesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendMessagesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
