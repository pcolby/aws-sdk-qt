// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbaiduchannelresponse.h"
#include "getbaiduchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetBaiduChannelResponse
 * \brief The GetBaiduChannelResponse class provides an interace for Pinpoint GetBaiduChannel responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getBaiduChannel
 */

/*!
 * Constructs a GetBaiduChannelResponse object for \a reply to \a request, with parent \a parent.
 */
GetBaiduChannelResponse::GetBaiduChannelResponse(
        const GetBaiduChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetBaiduChannelResponsePrivate(this), parent)
{
    setRequest(new GetBaiduChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBaiduChannelRequest * GetBaiduChannelResponse::request() const
{
    Q_D(const GetBaiduChannelResponse);
    return static_cast<const GetBaiduChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetBaiduChannel \a response.
 */
void GetBaiduChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBaiduChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetBaiduChannelResponsePrivate
 * \brief The GetBaiduChannelResponsePrivate class provides private implementation for GetBaiduChannelResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetBaiduChannelResponsePrivate object with public implementation \a q.
 */
GetBaiduChannelResponsePrivate::GetBaiduChannelResponsePrivate(
    GetBaiduChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetBaiduChannel response element from \a xml.
 */
void GetBaiduChannelResponsePrivate::parseGetBaiduChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBaiduChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
