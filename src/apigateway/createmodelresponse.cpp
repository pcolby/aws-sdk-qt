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

#include "createmodelresponse.h"
#include "createmodelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::CreateModelResponse
 * \brief The CreateModelResponse class provides an interace for ApiGateway CreateModel responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::createModel
 */

/*!
 * Constructs a CreateModelResponse object for \a reply to \a request, with parent \a parent.
 */
CreateModelResponse::CreateModelResponse(
        const CreateModelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new CreateModelResponsePrivate(this), parent)
{
    setRequest(new CreateModelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateModelRequest * CreateModelResponse::request() const
{
    Q_D(const CreateModelResponse);
    return static_cast<const CreateModelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway CreateModel \a response.
 */
void CreateModelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateModelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::CreateModelResponsePrivate
 * \brief The CreateModelResponsePrivate class provides private implementation for CreateModelResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a CreateModelResponsePrivate object with public implementation \a q.
 */
CreateModelResponsePrivate::CreateModelResponsePrivate(
    CreateModelResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway CreateModel response element from \a xml.
 */
void CreateModelResponsePrivate::parseCreateModelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateModelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
