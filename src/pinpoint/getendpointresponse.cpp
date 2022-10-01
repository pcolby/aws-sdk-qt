// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getendpointresponse.h"
#include "getendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetEndpointResponse
 * \brief The GetEndpointResponse class provides an interace for Pinpoint GetEndpoint responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getEndpoint
 */

/*!
 * Constructs a GetEndpointResponse object for \a reply to \a request, with parent \a parent.
 */
GetEndpointResponse::GetEndpointResponse(
        const GetEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetEndpointResponsePrivate(this), parent)
{
    setRequest(new GetEndpointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetEndpointRequest * GetEndpointResponse::request() const
{
    Q_D(const GetEndpointResponse);
    return static_cast<const GetEndpointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetEndpoint \a response.
 */
void GetEndpointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetEndpointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetEndpointResponsePrivate
 * \brief The GetEndpointResponsePrivate class provides private implementation for GetEndpointResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetEndpointResponsePrivate object with public implementation \a q.
 */
GetEndpointResponsePrivate::GetEndpointResponsePrivate(
    GetEndpointResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetEndpoint response element from \a xml.
 */
void GetEndpointResponsePrivate::parseGetEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetEndpointResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
