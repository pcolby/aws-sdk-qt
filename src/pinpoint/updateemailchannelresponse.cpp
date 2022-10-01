// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateemailchannelresponse.h"
#include "updateemailchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateEmailChannelResponse
 * \brief The UpdateEmailChannelResponse class provides an interace for Pinpoint UpdateEmailChannel responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateEmailChannel
 */

/*!
 * Constructs a UpdateEmailChannelResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateEmailChannelResponse::UpdateEmailChannelResponse(
        const UpdateEmailChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new UpdateEmailChannelResponsePrivate(this), parent)
{
    setRequest(new UpdateEmailChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateEmailChannelRequest * UpdateEmailChannelResponse::request() const
{
    Q_D(const UpdateEmailChannelResponse);
    return static_cast<const UpdateEmailChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint UpdateEmailChannel \a response.
 */
void UpdateEmailChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateEmailChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::UpdateEmailChannelResponsePrivate
 * \brief The UpdateEmailChannelResponsePrivate class provides private implementation for UpdateEmailChannelResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateEmailChannelResponsePrivate object with public implementation \a q.
 */
UpdateEmailChannelResponsePrivate::UpdateEmailChannelResponsePrivate(
    UpdateEmailChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint UpdateEmailChannel response element from \a xml.
 */
void UpdateEmailChannelResponsePrivate::parseUpdateEmailChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateEmailChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
