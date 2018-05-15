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

#include "getusageresponse.h"
#include "getusageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::GetUsageResponse
 * \brief The GetUsageResponse class provides an interace for APIGateway GetUsage responses.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::getUsage
 */

/*!
 * Constructs a GetUsageResponse object for \a reply to \a request, with parent \a parent.
 */
GetUsageResponse::GetUsageResponse(
        const GetUsageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetUsageResponsePrivate(this), parent)
{
    setRequest(new GetUsageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetUsageRequest * GetUsageResponse::request() const
{
    Q_D(const GetUsageResponse);
    return static_cast<const GetUsageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful APIGateway GetUsage \a response.
 */
void GetUsageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetUsageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::APIGateway::GetUsageResponsePrivate
 * \brief The GetUsageResponsePrivate class provides private implementation for GetUsageResponse.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a GetUsageResponsePrivate object with public implementation \a q.
 */
GetUsageResponsePrivate::GetUsageResponsePrivate(
    GetUsageResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * Parses a APIGateway GetUsage response element from \a xml.
 */
void GetUsageResponsePrivate::parseGetUsageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetUsageResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
