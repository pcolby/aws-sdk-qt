// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateapnsvoipchannelresponse.h"
#include "updateapnsvoipchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateApnsVoipChannelResponse
 * \brief The UpdateApnsVoipChannelResponse class provides an interace for Pinpoint UpdateApnsVoipChannel responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateApnsVoipChannel
 */

/*!
 * Constructs a UpdateApnsVoipChannelResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateApnsVoipChannelResponse::UpdateApnsVoipChannelResponse(
        const UpdateApnsVoipChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new UpdateApnsVoipChannelResponsePrivate(this), parent)
{
    setRequest(new UpdateApnsVoipChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateApnsVoipChannelRequest * UpdateApnsVoipChannelResponse::request() const
{
    Q_D(const UpdateApnsVoipChannelResponse);
    return static_cast<const UpdateApnsVoipChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint UpdateApnsVoipChannel \a response.
 */
void UpdateApnsVoipChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateApnsVoipChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::UpdateApnsVoipChannelResponsePrivate
 * \brief The UpdateApnsVoipChannelResponsePrivate class provides private implementation for UpdateApnsVoipChannelResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateApnsVoipChannelResponsePrivate object with public implementation \a q.
 */
UpdateApnsVoipChannelResponsePrivate::UpdateApnsVoipChannelResponsePrivate(
    UpdateApnsVoipChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint UpdateApnsVoipChannel response element from \a xml.
 */
void UpdateApnsVoipChannelResponsePrivate::parseUpdateApnsVoipChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateApnsVoipChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
