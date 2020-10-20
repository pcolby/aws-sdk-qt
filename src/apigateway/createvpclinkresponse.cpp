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

#include "createvpclinkresponse.h"
#include "createvpclinkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::CreateVpcLinkResponse
 * \brief The CreateVpcLinkResponse class provides an interace for APIGateway CreateVpcLink responses.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::createVpcLink
 */

/*!
 * Constructs a CreateVpcLinkResponse object for \a reply to \a request, with parent \a parent.
 */
CreateVpcLinkResponse::CreateVpcLinkResponse(
        const CreateVpcLinkRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new CreateVpcLinkResponsePrivate(this), parent)
{
    setRequest(new CreateVpcLinkRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateVpcLinkRequest * CreateVpcLinkResponse::request() const
{
    Q_D(const CreateVpcLinkResponse);
    return static_cast<const CreateVpcLinkRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful APIGateway CreateVpcLink \a response.
 */
void CreateVpcLinkResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateVpcLinkResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::APIGateway::CreateVpcLinkResponsePrivate
 * \brief The CreateVpcLinkResponsePrivate class provides private implementation for CreateVpcLinkResponse.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a CreateVpcLinkResponsePrivate object with public implementation \a q.
 */
CreateVpcLinkResponsePrivate::CreateVpcLinkResponsePrivate(
    CreateVpcLinkResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * Parses a APIGateway CreateVpcLink response element from \a xml.
 */
void CreateVpcLinkResponsePrivate::parseCreateVpcLinkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateVpcLinkResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace APIGateway
} // namespace QtAws
