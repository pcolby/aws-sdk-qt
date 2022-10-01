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

#include "updateresourceresponse.h"
#include "updateresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::UpdateResourceResponse
 * \brief The UpdateResourceResponse class provides an interace for ApiGateway UpdateResource responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::updateResource
 */

/*!
 * Constructs a UpdateResourceResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateResourceResponse::UpdateResourceResponse(
        const UpdateResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new UpdateResourceResponsePrivate(this), parent)
{
    setRequest(new UpdateResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateResourceRequest * UpdateResourceResponse::request() const
{
    Q_D(const UpdateResourceResponse);
    return static_cast<const UpdateResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway UpdateResource \a response.
 */
void UpdateResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::UpdateResourceResponsePrivate
 * \brief The UpdateResourceResponsePrivate class provides private implementation for UpdateResourceResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a UpdateResourceResponsePrivate object with public implementation \a q.
 */
UpdateResourceResponsePrivate::UpdateResourceResponsePrivate(
    UpdateResourceResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway UpdateResource response element from \a xml.
 */
void UpdateResourceResponsePrivate::parseUpdateResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
