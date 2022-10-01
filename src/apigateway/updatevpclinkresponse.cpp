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

#include "updatevpclinkresponse.h"
#include "updatevpclinkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::UpdateVpcLinkResponse
 * \brief The UpdateVpcLinkResponse class provides an interace for ApiGateway UpdateVpcLink responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::updateVpcLink
 */

/*!
 * Constructs a UpdateVpcLinkResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateVpcLinkResponse::UpdateVpcLinkResponse(
        const UpdateVpcLinkRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new UpdateVpcLinkResponsePrivate(this), parent)
{
    setRequest(new UpdateVpcLinkRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateVpcLinkRequest * UpdateVpcLinkResponse::request() const
{
    Q_D(const UpdateVpcLinkResponse);
    return static_cast<const UpdateVpcLinkRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway UpdateVpcLink \a response.
 */
void UpdateVpcLinkResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateVpcLinkResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::UpdateVpcLinkResponsePrivate
 * \brief The UpdateVpcLinkResponsePrivate class provides private implementation for UpdateVpcLinkResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a UpdateVpcLinkResponsePrivate object with public implementation \a q.
 */
UpdateVpcLinkResponsePrivate::UpdateVpcLinkResponsePrivate(
    UpdateVpcLinkResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway UpdateVpcLink response element from \a xml.
 */
void UpdateVpcLinkResponsePrivate::parseUpdateVpcLinkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateVpcLinkResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
