// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describesenderidsresponse.h"
#include "describesenderidsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PinpointSmsVoiceV2 {

/*!
 * \class QtAws::PinpointSmsVoiceV2::DescribeSenderIdsResponse
 * \brief The DescribeSenderIdsResponse class provides an interace for PinpointSmsVoiceV2 DescribeSenderIds responses.
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
 * \sa PinpointSmsVoiceV2Client::describeSenderIds
 */

/*!
 * Constructs a DescribeSenderIdsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeSenderIdsResponse::DescribeSenderIdsResponse(
        const DescribeSenderIdsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointSmsVoiceV2Response(new DescribeSenderIdsResponsePrivate(this), parent)
{
    setRequest(new DescribeSenderIdsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeSenderIdsRequest * DescribeSenderIdsResponse::request() const
{
    Q_D(const DescribeSenderIdsResponse);
    return static_cast<const DescribeSenderIdsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PinpointSmsVoiceV2 DescribeSenderIds \a response.
 */
void DescribeSenderIdsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeSenderIdsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PinpointSmsVoiceV2::DescribeSenderIdsResponsePrivate
 * \brief The DescribeSenderIdsResponsePrivate class provides private implementation for DescribeSenderIdsResponse.
 * \internal
 *
 * \inmodule QtAwsPinpointSmsVoiceV2
 */

/*!
 * Constructs a DescribeSenderIdsResponsePrivate object with public implementation \a q.
 */
DescribeSenderIdsResponsePrivate::DescribeSenderIdsResponsePrivate(
    DescribeSenderIdsResponse * const q) : PinpointSmsVoiceV2ResponsePrivate(q)
{

}

/*!
 * Parses a PinpointSmsVoiceV2 DescribeSenderIds response element from \a xml.
 */
void DescribeSenderIdsResponsePrivate::parseDescribeSenderIdsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSenderIdsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PinpointSmsVoiceV2
} // namespace QtAws
