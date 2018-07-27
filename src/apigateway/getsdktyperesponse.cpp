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

#include "getsdktyperesponse.h"
#include "getsdktyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::GetSdkTypeResponse
 * \brief The GetSdkTypeResponse class provides an interace for APIGateway GetSdkType responses.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::getSdkType
 */

/*!
 * Constructs a GetSdkTypeResponse object for \a reply to \a request, with parent \a parent.
 */
GetSdkTypeResponse::GetSdkTypeResponse(
        const GetSdkTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetSdkTypeResponsePrivate(this), parent)
{
    setRequest(new GetSdkTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSdkTypeRequest * GetSdkTypeResponse::request() const
{
    Q_D(const GetSdkTypeResponse);
    return static_cast<const GetSdkTypeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful APIGateway GetSdkType \a response.
 */
void GetSdkTypeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSdkTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::APIGateway::GetSdkTypeResponsePrivate
 * \brief The GetSdkTypeResponsePrivate class provides private implementation for GetSdkTypeResponse.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a GetSdkTypeResponsePrivate object with public implementation \a q.
 */
GetSdkTypeResponsePrivate::GetSdkTypeResponsePrivate(
    GetSdkTypeResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * Parses a APIGateway GetSdkType response element from \a xml.
 */
void GetSdkTypeResponsePrivate::parseGetSdkTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSdkTypeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace APIGateway
} // namespace QtAws
