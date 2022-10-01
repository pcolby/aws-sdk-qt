// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getuserendpointsresponse.h"
#include "getuserendpointsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetUserEndpointsResponse
 * \brief The GetUserEndpointsResponse class provides an interace for Pinpoint GetUserEndpoints responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getUserEndpoints
 */

/*!
 * Constructs a GetUserEndpointsResponse object for \a reply to \a request, with parent \a parent.
 */
GetUserEndpointsResponse::GetUserEndpointsResponse(
        const GetUserEndpointsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetUserEndpointsResponsePrivate(this), parent)
{
    setRequest(new GetUserEndpointsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetUserEndpointsRequest * GetUserEndpointsResponse::request() const
{
    Q_D(const GetUserEndpointsResponse);
    return static_cast<const GetUserEndpointsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetUserEndpoints \a response.
 */
void GetUserEndpointsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetUserEndpointsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetUserEndpointsResponsePrivate
 * \brief The GetUserEndpointsResponsePrivate class provides private implementation for GetUserEndpointsResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetUserEndpointsResponsePrivate object with public implementation \a q.
 */
GetUserEndpointsResponsePrivate::GetUserEndpointsResponsePrivate(
    GetUserEndpointsResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetUserEndpoints response element from \a xml.
 */
void GetUserEndpointsResponsePrivate::parseGetUserEndpointsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetUserEndpointsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
