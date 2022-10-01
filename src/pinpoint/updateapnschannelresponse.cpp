// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateapnschannelresponse.h"
#include "updateapnschannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateApnsChannelResponse
 * \brief The UpdateApnsChannelResponse class provides an interace for Pinpoint UpdateApnsChannel responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateApnsChannel
 */

/*!
 * Constructs a UpdateApnsChannelResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateApnsChannelResponse::UpdateApnsChannelResponse(
        const UpdateApnsChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new UpdateApnsChannelResponsePrivate(this), parent)
{
    setRequest(new UpdateApnsChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateApnsChannelRequest * UpdateApnsChannelResponse::request() const
{
    Q_D(const UpdateApnsChannelResponse);
    return static_cast<const UpdateApnsChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint UpdateApnsChannel \a response.
 */
void UpdateApnsChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateApnsChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::UpdateApnsChannelResponsePrivate
 * \brief The UpdateApnsChannelResponsePrivate class provides private implementation for UpdateApnsChannelResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateApnsChannelResponsePrivate object with public implementation \a q.
 */
UpdateApnsChannelResponsePrivate::UpdateApnsChannelResponsePrivate(
    UpdateApnsChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint UpdateApnsChannel response element from \a xml.
 */
void UpdateApnsChannelResponsePrivate::parseUpdateApnsChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateApnsChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
