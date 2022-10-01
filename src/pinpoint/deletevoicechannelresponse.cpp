// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletevoicechannelresponse.h"
#include "deletevoicechannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteVoiceChannelResponse
 * \brief The DeleteVoiceChannelResponse class provides an interace for Pinpoint DeleteVoiceChannel responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::deleteVoiceChannel
 */

/*!
 * Constructs a DeleteVoiceChannelResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteVoiceChannelResponse::DeleteVoiceChannelResponse(
        const DeleteVoiceChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new DeleteVoiceChannelResponsePrivate(this), parent)
{
    setRequest(new DeleteVoiceChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteVoiceChannelRequest * DeleteVoiceChannelResponse::request() const
{
    Q_D(const DeleteVoiceChannelResponse);
    return static_cast<const DeleteVoiceChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint DeleteVoiceChannel \a response.
 */
void DeleteVoiceChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteVoiceChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::DeleteVoiceChannelResponsePrivate
 * \brief The DeleteVoiceChannelResponsePrivate class provides private implementation for DeleteVoiceChannelResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteVoiceChannelResponsePrivate object with public implementation \a q.
 */
DeleteVoiceChannelResponsePrivate::DeleteVoiceChannelResponsePrivate(
    DeleteVoiceChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint DeleteVoiceChannel response element from \a xml.
 */
void DeleteVoiceChannelResponsePrivate::parseDeleteVoiceChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteVoiceChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
