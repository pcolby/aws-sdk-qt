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

#include "createbasepathmappingresponse.h"
#include "createbasepathmappingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::CreateBasePathMappingResponse
 * \brief The CreateBasePathMappingResponse class provides an interace for APIGateway CreateBasePathMapping responses.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::createBasePathMapping
 */

/*!
 * Constructs a CreateBasePathMappingResponse object for \a reply to \a request, with parent \a parent.
 */
CreateBasePathMappingResponse::CreateBasePathMappingResponse(
        const CreateBasePathMappingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new CreateBasePathMappingResponsePrivate(this), parent)
{
    setRequest(new CreateBasePathMappingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateBasePathMappingRequest * CreateBasePathMappingResponse::request() const
{
    Q_D(const CreateBasePathMappingResponse);
    return static_cast<const CreateBasePathMappingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful APIGateway CreateBasePathMapping \a response.
 */
void CreateBasePathMappingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateBasePathMappingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::APIGateway::CreateBasePathMappingResponsePrivate
 * \brief The CreateBasePathMappingResponsePrivate class provides private implementation for CreateBasePathMappingResponse.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a CreateBasePathMappingResponsePrivate object with public implementation \a q.
 */
CreateBasePathMappingResponsePrivate::CreateBasePathMappingResponsePrivate(
    CreateBasePathMappingResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * Parses a APIGateway CreateBasePathMapping response element from \a xml.
 */
void CreateBasePathMappingResponsePrivate::parseCreateBasePathMappingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateBasePathMappingResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
