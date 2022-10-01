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

#include "getusageplankeyresponse.h"
#include "getusageplankeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetUsagePlanKeyResponse
 * \brief The GetUsagePlanKeyResponse class provides an interace for ApiGateway GetUsagePlanKey responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getUsagePlanKey
 */

/*!
 * Constructs a GetUsagePlanKeyResponse object for \a reply to \a request, with parent \a parent.
 */
GetUsagePlanKeyResponse::GetUsagePlanKeyResponse(
        const GetUsagePlanKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new GetUsagePlanKeyResponsePrivate(this), parent)
{
    setRequest(new GetUsagePlanKeyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetUsagePlanKeyRequest * GetUsagePlanKeyResponse::request() const
{
    Q_D(const GetUsagePlanKeyResponse);
    return static_cast<const GetUsagePlanKeyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway GetUsagePlanKey \a response.
 */
void GetUsagePlanKeyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetUsagePlanKeyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::GetUsagePlanKeyResponsePrivate
 * \brief The GetUsagePlanKeyResponsePrivate class provides private implementation for GetUsagePlanKeyResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetUsagePlanKeyResponsePrivate object with public implementation \a q.
 */
GetUsagePlanKeyResponsePrivate::GetUsagePlanKeyResponsePrivate(
    GetUsagePlanKeyResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway GetUsagePlanKey response element from \a xml.
 */
void GetUsagePlanKeyResponsePrivate::parseGetUsagePlanKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetUsagePlanKeyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
