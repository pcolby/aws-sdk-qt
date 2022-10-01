// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatephonenumberresponse.h"
#include "updatephonenumberresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PinpointSmsVoiceV2 {

/*!
 * \class QtAws::PinpointSmsVoiceV2::UpdatePhoneNumberResponse
 * \brief The UpdatePhoneNumberResponse class provides an interace for PinpointSmsVoiceV2 UpdatePhoneNumber responses.
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
 * \sa PinpointSmsVoiceV2Client::updatePhoneNumber
 */

/*!
 * Constructs a UpdatePhoneNumberResponse object for \a reply to \a request, with parent \a parent.
 */
UpdatePhoneNumberResponse::UpdatePhoneNumberResponse(
        const UpdatePhoneNumberRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointSmsVoiceV2Response(new UpdatePhoneNumberResponsePrivate(this), parent)
{
    setRequest(new UpdatePhoneNumberRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdatePhoneNumberRequest * UpdatePhoneNumberResponse::request() const
{
    Q_D(const UpdatePhoneNumberResponse);
    return static_cast<const UpdatePhoneNumberRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PinpointSmsVoiceV2 UpdatePhoneNumber \a response.
 */
void UpdatePhoneNumberResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdatePhoneNumberResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PinpointSmsVoiceV2::UpdatePhoneNumberResponsePrivate
 * \brief The UpdatePhoneNumberResponsePrivate class provides private implementation for UpdatePhoneNumberResponse.
 * \internal
 *
 * \inmodule QtAwsPinpointSmsVoiceV2
 */

/*!
 * Constructs a UpdatePhoneNumberResponsePrivate object with public implementation \a q.
 */
UpdatePhoneNumberResponsePrivate::UpdatePhoneNumberResponsePrivate(
    UpdatePhoneNumberResponse * const q) : PinpointSmsVoiceV2ResponsePrivate(q)
{

}

/*!
 * Parses a PinpointSmsVoiceV2 UpdatePhoneNumber response element from \a xml.
 */
void UpdatePhoneNumberResponsePrivate::parseUpdatePhoneNumberResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdatePhoneNumberResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PinpointSmsVoiceV2
} // namespace QtAws
