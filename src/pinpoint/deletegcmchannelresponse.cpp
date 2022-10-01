// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletegcmchannelresponse.h"
#include "deletegcmchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteGcmChannelResponse
 * \brief The DeleteGcmChannelResponse class provides an interace for Pinpoint DeleteGcmChannel responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::deleteGcmChannel
 */

/*!
 * Constructs a DeleteGcmChannelResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteGcmChannelResponse::DeleteGcmChannelResponse(
        const DeleteGcmChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new DeleteGcmChannelResponsePrivate(this), parent)
{
    setRequest(new DeleteGcmChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteGcmChannelRequest * DeleteGcmChannelResponse::request() const
{
    Q_D(const DeleteGcmChannelResponse);
    return static_cast<const DeleteGcmChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint DeleteGcmChannel \a response.
 */
void DeleteGcmChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteGcmChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::DeleteGcmChannelResponsePrivate
 * \brief The DeleteGcmChannelResponsePrivate class provides private implementation for DeleteGcmChannelResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteGcmChannelResponsePrivate object with public implementation \a q.
 */
DeleteGcmChannelResponsePrivate::DeleteGcmChannelResponsePrivate(
    DeleteGcmChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint DeleteGcmChannel response element from \a xml.
 */
void DeleteGcmChannelResponsePrivate::parseDeleteGcmChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteGcmChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
