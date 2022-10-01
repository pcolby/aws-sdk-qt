// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateadmchannelresponse.h"
#include "updateadmchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateAdmChannelResponse
 * \brief The UpdateAdmChannelResponse class provides an interace for Pinpoint UpdateAdmChannel responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateAdmChannel
 */

/*!
 * Constructs a UpdateAdmChannelResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateAdmChannelResponse::UpdateAdmChannelResponse(
        const UpdateAdmChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new UpdateAdmChannelResponsePrivate(this), parent)
{
    setRequest(new UpdateAdmChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateAdmChannelRequest * UpdateAdmChannelResponse::request() const
{
    Q_D(const UpdateAdmChannelResponse);
    return static_cast<const UpdateAdmChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint UpdateAdmChannel \a response.
 */
void UpdateAdmChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateAdmChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::UpdateAdmChannelResponsePrivate
 * \brief The UpdateAdmChannelResponsePrivate class provides private implementation for UpdateAdmChannelResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateAdmChannelResponsePrivate object with public implementation \a q.
 */
UpdateAdmChannelResponsePrivate::UpdateAdmChannelResponsePrivate(
    UpdateAdmChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint UpdateAdmChannel response element from \a xml.
 */
void UpdateAdmChannelResponsePrivate::parseUpdateAdmChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAdmChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
