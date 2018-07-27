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

#include "getmodelsresponse.h"
#include "getmodelsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::GetModelsResponse
 * \brief The GetModelsResponse class provides an interace for APIGateway GetModels responses.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::getModels
 */

/*!
 * Constructs a GetModelsResponse object for \a reply to \a request, with parent \a parent.
 */
GetModelsResponse::GetModelsResponse(
        const GetModelsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetModelsResponsePrivate(this), parent)
{
    setRequest(new GetModelsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetModelsRequest * GetModelsResponse::request() const
{
    Q_D(const GetModelsResponse);
    return static_cast<const GetModelsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful APIGateway GetModels \a response.
 */
void GetModelsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetModelsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::APIGateway::GetModelsResponsePrivate
 * \brief The GetModelsResponsePrivate class provides private implementation for GetModelsResponse.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a GetModelsResponsePrivate object with public implementation \a q.
 */
GetModelsResponsePrivate::GetModelsResponsePrivate(
    GetModelsResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * Parses a APIGateway GetModels response element from \a xml.
 */
void GetModelsResponsePrivate::parseGetModelsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetModelsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace APIGateway
} // namespace QtAws
