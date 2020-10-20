/*
    Copyright 2013-2020 Paul Colby

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

#include "getstagesresponse.h"
#include "getstagesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::GetStagesResponse
 * \brief The GetStagesResponse class provides an interace for APIGateway GetStages responses.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::getStages
 */

/*!
 * Constructs a GetStagesResponse object for \a reply to \a request, with parent \a parent.
 */
GetStagesResponse::GetStagesResponse(
        const GetStagesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetStagesResponsePrivate(this), parent)
{
    setRequest(new GetStagesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetStagesRequest * GetStagesResponse::request() const
{
    Q_D(const GetStagesResponse);
    return static_cast<const GetStagesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful APIGateway GetStages \a response.
 */
void GetStagesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetStagesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::APIGateway::GetStagesResponsePrivate
 * \brief The GetStagesResponsePrivate class provides private implementation for GetStagesResponse.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a GetStagesResponsePrivate object with public implementation \a q.
 */
GetStagesResponsePrivate::GetStagesResponsePrivate(
    GetStagesResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * Parses a APIGateway GetStages response element from \a xml.
 */
void GetStagesResponsePrivate::parseGetStagesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetStagesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace APIGateway
} // namespace QtAws
