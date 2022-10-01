// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getchannelsresponse.h"
#include "getchannelsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetChannelsResponse
 * \brief The GetChannelsResponse class provides an interace for Pinpoint GetChannels responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getChannels
 */

/*!
 * Constructs a GetChannelsResponse object for \a reply to \a request, with parent \a parent.
 */
GetChannelsResponse::GetChannelsResponse(
        const GetChannelsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetChannelsResponsePrivate(this), parent)
{
    setRequest(new GetChannelsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetChannelsRequest * GetChannelsResponse::request() const
{
    Q_D(const GetChannelsResponse);
    return static_cast<const GetChannelsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetChannels \a response.
 */
void GetChannelsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetChannelsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetChannelsResponsePrivate
 * \brief The GetChannelsResponsePrivate class provides private implementation for GetChannelsResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetChannelsResponsePrivate object with public implementation \a q.
 */
GetChannelsResponsePrivate::GetChannelsResponsePrivate(
    GetChannelsResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetChannels response element from \a xml.
 */
void GetChannelsResponsePrivate::parseGetChannelsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetChannelsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
