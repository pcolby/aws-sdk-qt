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

#include "describeconfigurationsetsresponse.h"
#include "describeconfigurationsetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PinpointSmsVoiceV2 {

/*!
 * \class QtAws::PinpointSmsVoiceV2::DescribeConfigurationSetsResponse
 * \brief The DescribeConfigurationSetsResponse class provides an interace for PinpointSmsVoiceV2 DescribeConfigurationSets responses.
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
 * \sa PinpointSmsVoiceV2Client::describeConfigurationSets
 */

/*!
 * Constructs a DescribeConfigurationSetsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeConfigurationSetsResponse::DescribeConfigurationSetsResponse(
        const DescribeConfigurationSetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointSmsVoiceV2Response(new DescribeConfigurationSetsResponsePrivate(this), parent)
{
    setRequest(new DescribeConfigurationSetsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeConfigurationSetsRequest * DescribeConfigurationSetsResponse::request() const
{
    Q_D(const DescribeConfigurationSetsResponse);
    return static_cast<const DescribeConfigurationSetsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PinpointSmsVoiceV2 DescribeConfigurationSets \a response.
 */
void DescribeConfigurationSetsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeConfigurationSetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PinpointSmsVoiceV2::DescribeConfigurationSetsResponsePrivate
 * \brief The DescribeConfigurationSetsResponsePrivate class provides private implementation for DescribeConfigurationSetsResponse.
 * \internal
 *
 * \inmodule QtAwsPinpointSmsVoiceV2
 */

/*!
 * Constructs a DescribeConfigurationSetsResponsePrivate object with public implementation \a q.
 */
DescribeConfigurationSetsResponsePrivate::DescribeConfigurationSetsResponsePrivate(
    DescribeConfigurationSetsResponse * const q) : PinpointSmsVoiceV2ResponsePrivate(q)
{

}

/*!
 * Parses a PinpointSmsVoiceV2 DescribeConfigurationSets response element from \a xml.
 */
void DescribeConfigurationSetsResponsePrivate::parseDescribeConfigurationSetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeConfigurationSetsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PinpointSmsVoiceV2
} // namespace QtAws
