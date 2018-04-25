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

#include "replacerouteresponse.h"
#include "replacerouteresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::ReplaceRouteResponse
 * \brief The ReplaceRouteResponse class provides an interace for EC2 ReplaceRoute responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::replaceRoute
 */

/*!
 * Constructs a ReplaceRouteResponse object for \a reply to \a request, with parent \a parent.
 */
ReplaceRouteResponse::ReplaceRouteResponse(
        const ReplaceRouteRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new ReplaceRouteResponsePrivate(this), parent)
{
    setRequest(new ReplaceRouteRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ReplaceRouteRequest * ReplaceRouteResponse::request() const
{
    Q_D(const ReplaceRouteResponse);
    return static_cast<const ReplaceRouteRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 ReplaceRoute \a response.
 */
void ReplaceRouteResponse::parseSuccess(QIODevice &response)
{
    Q_D(ReplaceRouteResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::ReplaceRouteResponsePrivate
 * \brief The ReplaceRouteResponsePrivate class provides private implementation for ReplaceRouteResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a ReplaceRouteResponsePrivate object with public implementation \a q.
 */
ReplaceRouteResponsePrivate::ReplaceRouteResponsePrivate(
    ReplaceRouteResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 ReplaceRoute response element from \a xml.
 */
void ReplaceRouteResponsePrivate::parseReplaceRouteResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ReplaceRouteResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
