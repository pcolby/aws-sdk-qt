// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteapnssandboxchannelresponse.h"
#include "deleteapnssandboxchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteApnsSandboxChannelResponse
 * \brief The DeleteApnsSandboxChannelResponse class provides an interace for Pinpoint DeleteApnsSandboxChannel responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::deleteApnsSandboxChannel
 */

/*!
 * Constructs a DeleteApnsSandboxChannelResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteApnsSandboxChannelResponse::DeleteApnsSandboxChannelResponse(
        const DeleteApnsSandboxChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new DeleteApnsSandboxChannelResponsePrivate(this), parent)
{
    setRequest(new DeleteApnsSandboxChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteApnsSandboxChannelRequest * DeleteApnsSandboxChannelResponse::request() const
{
    Q_D(const DeleteApnsSandboxChannelResponse);
    return static_cast<const DeleteApnsSandboxChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint DeleteApnsSandboxChannel \a response.
 */
void DeleteApnsSandboxChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteApnsSandboxChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::DeleteApnsSandboxChannelResponsePrivate
 * \brief The DeleteApnsSandboxChannelResponsePrivate class provides private implementation for DeleteApnsSandboxChannelResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteApnsSandboxChannelResponsePrivate object with public implementation \a q.
 */
DeleteApnsSandboxChannelResponsePrivate::DeleteApnsSandboxChannelResponsePrivate(
    DeleteApnsSandboxChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint DeleteApnsSandboxChannel response element from \a xml.
 */
void DeleteApnsSandboxChannelResponsePrivate::parseDeleteApnsSandboxChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteApnsSandboxChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
