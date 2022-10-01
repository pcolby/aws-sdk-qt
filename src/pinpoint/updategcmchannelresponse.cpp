// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updategcmchannelresponse.h"
#include "updategcmchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateGcmChannelResponse
 * \brief The UpdateGcmChannelResponse class provides an interace for Pinpoint UpdateGcmChannel responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateGcmChannel
 */

/*!
 * Constructs a UpdateGcmChannelResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateGcmChannelResponse::UpdateGcmChannelResponse(
        const UpdateGcmChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new UpdateGcmChannelResponsePrivate(this), parent)
{
    setRequest(new UpdateGcmChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateGcmChannelRequest * UpdateGcmChannelResponse::request() const
{
    Q_D(const UpdateGcmChannelResponse);
    return static_cast<const UpdateGcmChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint UpdateGcmChannel \a response.
 */
void UpdateGcmChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateGcmChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::UpdateGcmChannelResponsePrivate
 * \brief The UpdateGcmChannelResponsePrivate class provides private implementation for UpdateGcmChannelResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateGcmChannelResponsePrivate object with public implementation \a q.
 */
UpdateGcmChannelResponsePrivate::UpdateGcmChannelResponsePrivate(
    UpdateGcmChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint UpdateGcmChannel response element from \a xml.
 */
void UpdateGcmChannelResponsePrivate::parseUpdateGcmChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateGcmChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
