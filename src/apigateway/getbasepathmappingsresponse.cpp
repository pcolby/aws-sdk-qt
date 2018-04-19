/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getbasepathmappingsresponse.h"
#include "getbasepathmappingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::GetBasePathMappingsResponse
 * \brief The GetBasePathMappingsResponse class provides an interace for APIGateway GetBasePathMappings responses.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::getBasePathMappings
 */

/*!
 * Constructs a GetBasePathMappingsResponse object for \a reply to \a request, with parent \a parent.
 */
GetBasePathMappingsResponse::GetBasePathMappingsResponse(
        const GetBasePathMappingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetBasePathMappingsResponsePrivate(this), parent)
{
    setRequest(new GetBasePathMappingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBasePathMappingsRequest * GetBasePathMappingsResponse::request() const
{
    Q_D(const GetBasePathMappingsResponse);
    return static_cast<const GetBasePathMappingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful APIGateway GetBasePathMappings \a response.
 */
void GetBasePathMappingsResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetBasePathMappingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::APIGateway::GetBasePathMappingsResponsePrivate
 * \brief The GetBasePathMappingsResponsePrivate class provides private implementation for GetBasePathMappingsResponse.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a GetBasePathMappingsResponsePrivate object with public implementation \a q.
 */
GetBasePathMappingsResponsePrivate::GetBasePathMappingsResponsePrivate(
    GetBasePathMappingsResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * Parses a APIGateway GetBasePathMappings response element from \a xml.
 */
void GetBasePathMappingsResponsePrivate::parseGetBasePathMappingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBasePathMappingsResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
