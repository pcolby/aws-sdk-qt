/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getservicegraphresponse.h"
#include "getservicegraphresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::GetServiceGraphResponse
 * \brief The GetServiceGraphResponse class provides an interace for XRay GetServiceGraph responses.
 *
 * \inmodule QtAwsXRay
 *
 *  AWS X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by processing those
 *
 * \sa XRayClient::getServiceGraph
 */

/*!
 * Constructs a GetServiceGraphResponse object for \a reply to \a request, with parent \a parent.
 */
GetServiceGraphResponse::GetServiceGraphResponse(
        const GetServiceGraphRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : XRayResponse(new GetServiceGraphResponsePrivate(this), parent)
{
    setRequest(new GetServiceGraphRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetServiceGraphRequest * GetServiceGraphResponse::request() const
{
    Q_D(const GetServiceGraphResponse);
    return static_cast<const GetServiceGraphRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful XRay GetServiceGraph \a response.
 */
void GetServiceGraphResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetServiceGraphResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::XRay::GetServiceGraphResponsePrivate
 * \brief The GetServiceGraphResponsePrivate class provides private implementation for GetServiceGraphResponse.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a GetServiceGraphResponsePrivate object with public implementation \a q.
 */
GetServiceGraphResponsePrivate::GetServiceGraphResponsePrivate(
    GetServiceGraphResponse * const q) : XRayResponsePrivate(q)
{

}

/*!
 * Parses a XRay GetServiceGraph response element from \a xml.
 */
void GetServiceGraphResponsePrivate::parseGetServiceGraphResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetServiceGraphResponse"));
    /// @todo
}

} // namespace XRay
} // namespace QtAws
