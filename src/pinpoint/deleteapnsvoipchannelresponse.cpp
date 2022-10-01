// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteapnsvoipchannelresponse.h"
#include "deleteapnsvoipchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteApnsVoipChannelResponse
 * \brief The DeleteApnsVoipChannelResponse class provides an interace for Pinpoint DeleteApnsVoipChannel responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::deleteApnsVoipChannel
 */

/*!
 * Constructs a DeleteApnsVoipChannelResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteApnsVoipChannelResponse::DeleteApnsVoipChannelResponse(
        const DeleteApnsVoipChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new DeleteApnsVoipChannelResponsePrivate(this), parent)
{
    setRequest(new DeleteApnsVoipChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteApnsVoipChannelRequest * DeleteApnsVoipChannelResponse::request() const
{
    Q_D(const DeleteApnsVoipChannelResponse);
    return static_cast<const DeleteApnsVoipChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint DeleteApnsVoipChannel \a response.
 */
void DeleteApnsVoipChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteApnsVoipChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::DeleteApnsVoipChannelResponsePrivate
 * \brief The DeleteApnsVoipChannelResponsePrivate class provides private implementation for DeleteApnsVoipChannelResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteApnsVoipChannelResponsePrivate object with public implementation \a q.
 */
DeleteApnsVoipChannelResponsePrivate::DeleteApnsVoipChannelResponsePrivate(
    DeleteApnsVoipChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint DeleteApnsVoipChannel response element from \a xml.
 */
void DeleteApnsVoipChannelResponsePrivate::parseDeleteApnsVoipChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteApnsVoipChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
