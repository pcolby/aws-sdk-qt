// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putoptedoutnumberresponse.h"
#include "putoptedoutnumberresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PinpointSmsVoiceV2 {

/*!
 * \class QtAws::PinpointSmsVoiceV2::PutOptedOutNumberResponse
 * \brief The PutOptedOutNumberResponse class provides an interace for PinpointSmsVoiceV2 PutOptedOutNumber responses.
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
 * \sa PinpointSmsVoiceV2Client::putOptedOutNumber
 */

/*!
 * Constructs a PutOptedOutNumberResponse object for \a reply to \a request, with parent \a parent.
 */
PutOptedOutNumberResponse::PutOptedOutNumberResponse(
        const PutOptedOutNumberRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointSmsVoiceV2Response(new PutOptedOutNumberResponsePrivate(this), parent)
{
    setRequest(new PutOptedOutNumberRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutOptedOutNumberRequest * PutOptedOutNumberResponse::request() const
{
    Q_D(const PutOptedOutNumberResponse);
    return static_cast<const PutOptedOutNumberRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PinpointSmsVoiceV2 PutOptedOutNumber \a response.
 */
void PutOptedOutNumberResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutOptedOutNumberResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PinpointSmsVoiceV2::PutOptedOutNumberResponsePrivate
 * \brief The PutOptedOutNumberResponsePrivate class provides private implementation for PutOptedOutNumberResponse.
 * \internal
 *
 * \inmodule QtAwsPinpointSmsVoiceV2
 */

/*!
 * Constructs a PutOptedOutNumberResponsePrivate object with public implementation \a q.
 */
PutOptedOutNumberResponsePrivate::PutOptedOutNumberResponsePrivate(
    PutOptedOutNumberResponse * const q) : PinpointSmsVoiceV2ResponsePrivate(q)
{

}

/*!
 * Parses a PinpointSmsVoiceV2 PutOptedOutNumber response element from \a xml.
 */
void PutOptedOutNumberResponsePrivate::parsePutOptedOutNumberResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutOptedOutNumberResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PinpointSmsVoiceV2
} // namespace QtAws
