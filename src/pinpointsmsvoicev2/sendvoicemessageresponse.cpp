// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sendvoicemessageresponse.h"
#include "sendvoicemessageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PinpointSmsVoiceV2 {

/*!
 * \class QtAws::PinpointSmsVoiceV2::SendVoiceMessageResponse
 * \brief The SendVoiceMessageResponse class provides an interace for PinpointSmsVoiceV2 SendVoiceMessage responses.
 *
 * \inmodule QtAwsPinpointSmsVoiceV2
 *
 *  Welcome to the <i>Amazon Pinpoint SMS and Voice, version 2 API Reference</i>. This guide provides information about
 *  Amazon Pinpoint SMS and Voice, version 2 API resources, including supported HTTP methods, parameters, and
 * 
 *  schemas>
 * 
 *  Amazon Pinpoint is an Amazon Web Services service that you can use to engage with your recipients across multiple
 *  messaging channels. The Amazon Pinpoint SMS and Voice, version 2 API provides programmatic access to options that are
 *  unique to the SMS and voice channels and supplements the resources provided by the Amazon Pinpoint
 * 
 *  API>
 * 
 *  If you're new to Amazon Pinpoint, it's also helpful to review the <a
 *  href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/welcome.html"> Amazon Pinpoint Developer Guide</a>. The
 *  <i>Amazon Pinpoint Developer Guide</i> provides tutorials, code samples, and procedures that demonstrate how to use
 *  Amazon Pinpoint features programmatically and how to integrate Amazon Pinpoint functionality into mobile apps and other
 *  types of applications. The guide also provides key information, such as Amazon Pinpoint integration with other Amazon
 *  Web Services services, and the quotas that apply to use of the
 *
 * \sa PinpointSmsVoiceV2Client::sendVoiceMessage
 */

/*!
 * Constructs a SendVoiceMessageResponse object for \a reply to \a request, with parent \a parent.
 */
SendVoiceMessageResponse::SendVoiceMessageResponse(
        const SendVoiceMessageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointSmsVoiceV2Response(new SendVoiceMessageResponsePrivate(this), parent)
{
    setRequest(new SendVoiceMessageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SendVoiceMessageRequest * SendVoiceMessageResponse::request() const
{
    Q_D(const SendVoiceMessageResponse);
    return static_cast<const SendVoiceMessageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PinpointSmsVoiceV2 SendVoiceMessage \a response.
 */
void SendVoiceMessageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SendVoiceMessageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PinpointSmsVoiceV2::SendVoiceMessageResponsePrivate
 * \brief The SendVoiceMessageResponsePrivate class provides private implementation for SendVoiceMessageResponse.
 * \internal
 *
 * \inmodule QtAwsPinpointSmsVoiceV2
 */

/*!
 * Constructs a SendVoiceMessageResponsePrivate object with public implementation \a q.
 */
SendVoiceMessageResponsePrivate::SendVoiceMessageResponsePrivate(
    SendVoiceMessageResponse * const q) : PinpointSmsVoiceV2ResponsePrivate(q)
{

}

/*!
 * Parses a PinpointSmsVoiceV2 SendVoiceMessage response element from \a xml.
 */
void SendVoiceMessageResponsePrivate::parseSendVoiceMessageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendVoiceMessageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PinpointSmsVoiceV2
} // namespace QtAws
