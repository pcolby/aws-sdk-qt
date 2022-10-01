// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteoptoutlistresponse.h"
#include "deleteoptoutlistresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PinpointSmsVoiceV2 {

/*!
 * \class QtAws::PinpointSmsVoiceV2::DeleteOptOutListResponse
 * \brief The DeleteOptOutListResponse class provides an interace for PinpointSmsVoiceV2 DeleteOptOutList responses.
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
 * \sa PinpointSmsVoiceV2Client::deleteOptOutList
 */

/*!
 * Constructs a DeleteOptOutListResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteOptOutListResponse::DeleteOptOutListResponse(
        const DeleteOptOutListRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointSmsVoiceV2Response(new DeleteOptOutListResponsePrivate(this), parent)
{
    setRequest(new DeleteOptOutListRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteOptOutListRequest * DeleteOptOutListResponse::request() const
{
    Q_D(const DeleteOptOutListResponse);
    return static_cast<const DeleteOptOutListRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PinpointSmsVoiceV2 DeleteOptOutList \a response.
 */
void DeleteOptOutListResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteOptOutListResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PinpointSmsVoiceV2::DeleteOptOutListResponsePrivate
 * \brief The DeleteOptOutListResponsePrivate class provides private implementation for DeleteOptOutListResponse.
 * \internal
 *
 * \inmodule QtAwsPinpointSmsVoiceV2
 */

/*!
 * Constructs a DeleteOptOutListResponsePrivate object with public implementation \a q.
 */
DeleteOptOutListResponsePrivate::DeleteOptOutListResponsePrivate(
    DeleteOptOutListResponse * const q) : PinpointSmsVoiceV2ResponsePrivate(q)
{

}

/*!
 * Parses a PinpointSmsVoiceV2 DeleteOptOutList response element from \a xml.
 */
void DeleteOptOutListResponsePrivate::parseDeleteOptOutListResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteOptOutListResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PinpointSmsVoiceV2
} // namespace QtAws
