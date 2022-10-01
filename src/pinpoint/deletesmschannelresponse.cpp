// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletesmschannelresponse.h"
#include "deletesmschannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteSmsChannelResponse
 * \brief The DeleteSmsChannelResponse class provides an interace for Pinpoint DeleteSmsChannel responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::deleteSmsChannel
 */

/*!
 * Constructs a DeleteSmsChannelResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteSmsChannelResponse::DeleteSmsChannelResponse(
        const DeleteSmsChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new DeleteSmsChannelResponsePrivate(this), parent)
{
    setRequest(new DeleteSmsChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteSmsChannelRequest * DeleteSmsChannelResponse::request() const
{
    Q_D(const DeleteSmsChannelResponse);
    return static_cast<const DeleteSmsChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint DeleteSmsChannel \a response.
 */
void DeleteSmsChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteSmsChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::DeleteSmsChannelResponsePrivate
 * \brief The DeleteSmsChannelResponsePrivate class provides private implementation for DeleteSmsChannelResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteSmsChannelResponsePrivate object with public implementation \a q.
 */
DeleteSmsChannelResponsePrivate::DeleteSmsChannelResponsePrivate(
    DeleteSmsChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint DeleteSmsChannel response element from \a xml.
 */
void DeleteSmsChannelResponsePrivate::parseDeleteSmsChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSmsChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
