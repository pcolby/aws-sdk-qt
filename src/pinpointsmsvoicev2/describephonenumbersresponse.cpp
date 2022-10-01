// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describephonenumbersresponse.h"
#include "describephonenumbersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PinpointSmsVoiceV2 {

/*!
 * \class QtAws::PinpointSmsVoiceV2::DescribePhoneNumbersResponse
 * \brief The DescribePhoneNumbersResponse class provides an interace for PinpointSmsVoiceV2 DescribePhoneNumbers responses.
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
 * \sa PinpointSmsVoiceV2Client::describePhoneNumbers
 */

/*!
 * Constructs a DescribePhoneNumbersResponse object for \a reply to \a request, with parent \a parent.
 */
DescribePhoneNumbersResponse::DescribePhoneNumbersResponse(
        const DescribePhoneNumbersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointSmsVoiceV2Response(new DescribePhoneNumbersResponsePrivate(this), parent)
{
    setRequest(new DescribePhoneNumbersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribePhoneNumbersRequest * DescribePhoneNumbersResponse::request() const
{
    Q_D(const DescribePhoneNumbersResponse);
    return static_cast<const DescribePhoneNumbersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PinpointSmsVoiceV2 DescribePhoneNumbers \a response.
 */
void DescribePhoneNumbersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribePhoneNumbersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PinpointSmsVoiceV2::DescribePhoneNumbersResponsePrivate
 * \brief The DescribePhoneNumbersResponsePrivate class provides private implementation for DescribePhoneNumbersResponse.
 * \internal
 *
 * \inmodule QtAwsPinpointSmsVoiceV2
 */

/*!
 * Constructs a DescribePhoneNumbersResponsePrivate object with public implementation \a q.
 */
DescribePhoneNumbersResponsePrivate::DescribePhoneNumbersResponsePrivate(
    DescribePhoneNumbersResponse * const q) : PinpointSmsVoiceV2ResponsePrivate(q)
{

}

/*!
 * Parses a PinpointSmsVoiceV2 DescribePhoneNumbers response element from \a xml.
 */
void DescribePhoneNumbersResponsePrivate::parseDescribePhoneNumbersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribePhoneNumbersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PinpointSmsVoiceV2
} // namespace QtAws
