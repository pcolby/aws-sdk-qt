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

#include "createrestapiresponse.h"
#include "createrestapiresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::CreateRestApiResponse
 * \brief The CreateRestApiResponse class provides an interace for APIGateway CreateRestApi responses.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::createRestApi
 */

/*!
 * Constructs a CreateRestApiResponse object for \a reply to \a request, with parent \a parent.
 */
CreateRestApiResponse::CreateRestApiResponse(
        const CreateRestApiRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new CreateRestApiResponsePrivate(this), parent)
{
    setRequest(new CreateRestApiRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateRestApiRequest * CreateRestApiResponse::request() const
{
    Q_D(const CreateRestApiResponse);
    return static_cast<const CreateRestApiRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful APIGateway CreateRestApi \a response.
 */
void CreateRestApiResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateRestApiResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::APIGateway::CreateRestApiResponsePrivate
 * \brief The CreateRestApiResponsePrivate class provides private implementation for CreateRestApiResponse.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a CreateRestApiResponsePrivate object with public implementation \a q.
 */
CreateRestApiResponsePrivate::CreateRestApiResponsePrivate(
    CreateRestApiResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * Parses a APIGateway CreateRestApi response element from \a xml.
 */
void CreateRestApiResponsePrivate::parseCreateRestApiResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateRestApiResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
