// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getapnschannelresponse.h"
#include "getapnschannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetApnsChannelResponse
 * \brief The GetApnsChannelResponse class provides an interace for Pinpoint GetApnsChannel responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getApnsChannel
 */

/*!
 * Constructs a GetApnsChannelResponse object for \a reply to \a request, with parent \a parent.
 */
GetApnsChannelResponse::GetApnsChannelResponse(
        const GetApnsChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetApnsChannelResponsePrivate(this), parent)
{
    setRequest(new GetApnsChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetApnsChannelRequest * GetApnsChannelResponse::request() const
{
    Q_D(const GetApnsChannelResponse);
    return static_cast<const GetApnsChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetApnsChannel \a response.
 */
void GetApnsChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetApnsChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetApnsChannelResponsePrivate
 * \brief The GetApnsChannelResponsePrivate class provides private implementation for GetApnsChannelResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetApnsChannelResponsePrivate object with public implementation \a q.
 */
GetApnsChannelResponsePrivate::GetApnsChannelResponsePrivate(
    GetApnsChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetApnsChannel response element from \a xml.
 */
void GetApnsChannelResponsePrivate::parseGetApnsChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetApnsChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
