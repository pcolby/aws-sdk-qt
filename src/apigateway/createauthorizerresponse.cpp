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

#include "createauthorizerresponse.h"
#include "createauthorizerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::CreateAuthorizerResponse
 * \brief The CreateAuthorizerResponse class provides an interace for APIGateway CreateAuthorizer responses.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::createAuthorizer
 */

/*!
 * Constructs a CreateAuthorizerResponse object for \a reply to \a request, with parent \a parent.
 */
CreateAuthorizerResponse::CreateAuthorizerResponse(
        const CreateAuthorizerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new CreateAuthorizerResponsePrivate(this), parent)
{
    setRequest(new CreateAuthorizerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateAuthorizerRequest * CreateAuthorizerResponse::request() const
{
    Q_D(const CreateAuthorizerResponse);
    return static_cast<const CreateAuthorizerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful APIGateway CreateAuthorizer \a response.
 */
void CreateAuthorizerResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateAuthorizerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::APIGateway::CreateAuthorizerResponsePrivate
 * \brief The CreateAuthorizerResponsePrivate class provides private implementation for CreateAuthorizerResponse.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a CreateAuthorizerResponsePrivate object with public implementation \a q.
 */
CreateAuthorizerResponsePrivate::CreateAuthorizerResponsePrivate(
    CreateAuthorizerResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * Parses a APIGateway CreateAuthorizer response element from \a xml.
 */
void CreateAuthorizerResponsePrivate::parseCreateAuthorizerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAuthorizerResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
