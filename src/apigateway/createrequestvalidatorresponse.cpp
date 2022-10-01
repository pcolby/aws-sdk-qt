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

#include "createrequestvalidatorresponse.h"
#include "createrequestvalidatorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::CreateRequestValidatorResponse
 * \brief The CreateRequestValidatorResponse class provides an interace for ApiGateway CreateRequestValidator responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::createRequestValidator
 */

/*!
 * Constructs a CreateRequestValidatorResponse object for \a reply to \a request, with parent \a parent.
 */
CreateRequestValidatorResponse::CreateRequestValidatorResponse(
        const CreateRequestValidatorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new CreateRequestValidatorResponsePrivate(this), parent)
{
    setRequest(new CreateRequestValidatorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateRequestValidatorRequest * CreateRequestValidatorResponse::request() const
{
    Q_D(const CreateRequestValidatorResponse);
    return static_cast<const CreateRequestValidatorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway CreateRequestValidator \a response.
 */
void CreateRequestValidatorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateRequestValidatorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::CreateRequestValidatorResponsePrivate
 * \brief The CreateRequestValidatorResponsePrivate class provides private implementation for CreateRequestValidatorResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a CreateRequestValidatorResponsePrivate object with public implementation \a q.
 */
CreateRequestValidatorResponsePrivate::CreateRequestValidatorResponsePrivate(
    CreateRequestValidatorResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway CreateRequestValidator response element from \a xml.
 */
void CreateRequestValidatorResponsePrivate::parseCreateRequestValidatorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateRequestValidatorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
