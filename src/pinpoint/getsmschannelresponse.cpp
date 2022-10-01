// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsmschannelresponse.h"
#include "getsmschannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetSmsChannelResponse
 * \brief The GetSmsChannelResponse class provides an interace for Pinpoint GetSmsChannel responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getSmsChannel
 */

/*!
 * Constructs a GetSmsChannelResponse object for \a reply to \a request, with parent \a parent.
 */
GetSmsChannelResponse::GetSmsChannelResponse(
        const GetSmsChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetSmsChannelResponsePrivate(this), parent)
{
    setRequest(new GetSmsChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSmsChannelRequest * GetSmsChannelResponse::request() const
{
    Q_D(const GetSmsChannelResponse);
    return static_cast<const GetSmsChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetSmsChannel \a response.
 */
void GetSmsChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSmsChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetSmsChannelResponsePrivate
 * \brief The GetSmsChannelResponsePrivate class provides private implementation for GetSmsChannelResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetSmsChannelResponsePrivate object with public implementation \a q.
 */
GetSmsChannelResponsePrivate::GetSmsChannelResponsePrivate(
    GetSmsChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetSmsChannel response element from \a xml.
 */
void GetSmsChannelResponsePrivate::parseGetSmsChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSmsChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
