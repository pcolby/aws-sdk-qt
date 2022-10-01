// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteapnschannelresponse.h"
#include "deleteapnschannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteApnsChannelResponse
 * \brief The DeleteApnsChannelResponse class provides an interace for Pinpoint DeleteApnsChannel responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::deleteApnsChannel
 */

/*!
 * Constructs a DeleteApnsChannelResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteApnsChannelResponse::DeleteApnsChannelResponse(
        const DeleteApnsChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new DeleteApnsChannelResponsePrivate(this), parent)
{
    setRequest(new DeleteApnsChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteApnsChannelRequest * DeleteApnsChannelResponse::request() const
{
    Q_D(const DeleteApnsChannelResponse);
    return static_cast<const DeleteApnsChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint DeleteApnsChannel \a response.
 */
void DeleteApnsChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteApnsChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::DeleteApnsChannelResponsePrivate
 * \brief The DeleteApnsChannelResponsePrivate class provides private implementation for DeleteApnsChannelResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteApnsChannelResponsePrivate object with public implementation \a q.
 */
DeleteApnsChannelResponsePrivate::DeleteApnsChannelResponsePrivate(
    DeleteApnsChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint DeleteApnsChannel response element from \a xml.
 */
void DeleteApnsChannelResponsePrivate::parseDeleteApnsChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteApnsChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
