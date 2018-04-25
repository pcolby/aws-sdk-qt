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

#include "updatebasepathmappingresponse.h"
#include "updatebasepathmappingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::UpdateBasePathMappingResponse
 * \brief The UpdateBasePathMappingResponse class provides an interace for APIGateway UpdateBasePathMapping responses.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::updateBasePathMapping
 */

/*!
 * Constructs a UpdateBasePathMappingResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateBasePathMappingResponse::UpdateBasePathMappingResponse(
        const UpdateBasePathMappingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new UpdateBasePathMappingResponsePrivate(this), parent)
{
    setRequest(new UpdateBasePathMappingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateBasePathMappingRequest * UpdateBasePathMappingResponse::request() const
{
    Q_D(const UpdateBasePathMappingResponse);
    return static_cast<const UpdateBasePathMappingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful APIGateway UpdateBasePathMapping \a response.
 */
void UpdateBasePathMappingResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateBasePathMappingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::APIGateway::UpdateBasePathMappingResponsePrivate
 * \brief The UpdateBasePathMappingResponsePrivate class provides private implementation for UpdateBasePathMappingResponse.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a UpdateBasePathMappingResponsePrivate object with public implementation \a q.
 */
UpdateBasePathMappingResponsePrivate::UpdateBasePathMappingResponsePrivate(
    UpdateBasePathMappingResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * Parses a APIGateway UpdateBasePathMapping response element from \a xml.
 */
void UpdateBasePathMappingResponsePrivate::parseUpdateBasePathMappingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateBasePathMappingResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
