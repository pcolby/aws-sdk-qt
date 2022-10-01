/*
    Copyright 2013-2021 Paul Colby

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

#include "getusageplanresponse.h"
#include "getusageplanresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetUsagePlanResponse
 * \brief The GetUsagePlanResponse class provides an interace for ApiGateway GetUsagePlan responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getUsagePlan
 */

/*!
 * Constructs a GetUsagePlanResponse object for \a reply to \a request, with parent \a parent.
 */
GetUsagePlanResponse::GetUsagePlanResponse(
        const GetUsagePlanRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new GetUsagePlanResponsePrivate(this), parent)
{
    setRequest(new GetUsagePlanRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetUsagePlanRequest * GetUsagePlanResponse::request() const
{
    Q_D(const GetUsagePlanResponse);
    return static_cast<const GetUsagePlanRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway GetUsagePlan \a response.
 */
void GetUsagePlanResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetUsagePlanResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::GetUsagePlanResponsePrivate
 * \brief The GetUsagePlanResponsePrivate class provides private implementation for GetUsagePlanResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetUsagePlanResponsePrivate object with public implementation \a q.
 */
GetUsagePlanResponsePrivate::GetUsagePlanResponsePrivate(
    GetUsagePlanResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway GetUsagePlan response element from \a xml.
 */
void GetUsagePlanResponsePrivate::parseGetUsagePlanResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetUsagePlanResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
