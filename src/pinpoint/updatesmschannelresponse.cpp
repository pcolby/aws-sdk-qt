// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatesmschannelresponse.h"
#include "updatesmschannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateSmsChannelResponse
 * \brief The UpdateSmsChannelResponse class provides an interace for Pinpoint UpdateSmsChannel responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateSmsChannel
 */

/*!
 * Constructs a UpdateSmsChannelResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateSmsChannelResponse::UpdateSmsChannelResponse(
        const UpdateSmsChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new UpdateSmsChannelResponsePrivate(this), parent)
{
    setRequest(new UpdateSmsChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateSmsChannelRequest * UpdateSmsChannelResponse::request() const
{
    Q_D(const UpdateSmsChannelResponse);
    return static_cast<const UpdateSmsChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint UpdateSmsChannel \a response.
 */
void UpdateSmsChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateSmsChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::UpdateSmsChannelResponsePrivate
 * \brief The UpdateSmsChannelResponsePrivate class provides private implementation for UpdateSmsChannelResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateSmsChannelResponsePrivate object with public implementation \a q.
 */
UpdateSmsChannelResponsePrivate::UpdateSmsChannelResponsePrivate(
    UpdateSmsChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint UpdateSmsChannel response element from \a xml.
 */
void UpdateSmsChannelResponsePrivate::parseUpdateSmsChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSmsChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
