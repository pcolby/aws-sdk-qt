// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getadmchannelresponse.h"
#include "getadmchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetAdmChannelResponse
 * \brief The GetAdmChannelResponse class provides an interace for Pinpoint GetAdmChannel responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getAdmChannel
 */

/*!
 * Constructs a GetAdmChannelResponse object for \a reply to \a request, with parent \a parent.
 */
GetAdmChannelResponse::GetAdmChannelResponse(
        const GetAdmChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetAdmChannelResponsePrivate(this), parent)
{
    setRequest(new GetAdmChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAdmChannelRequest * GetAdmChannelResponse::request() const
{
    Q_D(const GetAdmChannelResponse);
    return static_cast<const GetAdmChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetAdmChannel \a response.
 */
void GetAdmChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAdmChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetAdmChannelResponsePrivate
 * \brief The GetAdmChannelResponsePrivate class provides private implementation for GetAdmChannelResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetAdmChannelResponsePrivate object with public implementation \a q.
 */
GetAdmChannelResponsePrivate::GetAdmChannelResponsePrivate(
    GetAdmChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetAdmChannel response element from \a xml.
 */
void GetAdmChannelResponsePrivate::parseGetAdmChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAdmChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
