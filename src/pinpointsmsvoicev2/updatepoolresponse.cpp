// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatepoolresponse.h"
#include "updatepoolresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PinpointSmsVoiceV2 {

/*!
 * \class QtAws::PinpointSmsVoiceV2::UpdatePoolResponse
 * \brief The UpdatePoolResponse class provides an interace for PinpointSmsVoiceV2 UpdatePool responses.
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
 * \sa PinpointSmsVoiceV2Client::updatePool
 */

/*!
 * Constructs a UpdatePoolResponse object for \a reply to \a request, with parent \a parent.
 */
UpdatePoolResponse::UpdatePoolResponse(
        const UpdatePoolRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointSmsVoiceV2Response(new UpdatePoolResponsePrivate(this), parent)
{
    setRequest(new UpdatePoolRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdatePoolRequest * UpdatePoolResponse::request() const
{
    Q_D(const UpdatePoolResponse);
    return static_cast<const UpdatePoolRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PinpointSmsVoiceV2 UpdatePool \a response.
 */
void UpdatePoolResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdatePoolResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PinpointSmsVoiceV2::UpdatePoolResponsePrivate
 * \brief The UpdatePoolResponsePrivate class provides private implementation for UpdatePoolResponse.
 * \internal
 *
 * \inmodule QtAwsPinpointSmsVoiceV2
 */

/*!
 * Constructs a UpdatePoolResponsePrivate object with public implementation \a q.
 */
UpdatePoolResponsePrivate::UpdatePoolResponsePrivate(
    UpdatePoolResponse * const q) : PinpointSmsVoiceV2ResponsePrivate(q)
{

}

/*!
 * Parses a PinpointSmsVoiceV2 UpdatePool response element from \a xml.
 */
void UpdatePoolResponsePrivate::parseUpdatePoolResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdatePoolResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PinpointSmsVoiceV2
} // namespace QtAws
