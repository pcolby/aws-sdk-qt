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

#include "createdomainnameresponse.h"
#include "createdomainnameresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::CreateDomainNameResponse
 * \brief The CreateDomainNameResponse class provides an interace for APIGateway CreateDomainName responses.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::createDomainName
 */

/*!
 * Constructs a CreateDomainNameResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDomainNameResponse::CreateDomainNameResponse(
        const CreateDomainNameRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new CreateDomainNameResponsePrivate(this), parent)
{
    setRequest(new CreateDomainNameRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDomainNameRequest * CreateDomainNameResponse::request() const
{
    Q_D(const CreateDomainNameResponse);
    return static_cast<const CreateDomainNameRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful APIGateway CreateDomainName \a response.
 */
void CreateDomainNameResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDomainNameResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::APIGateway::CreateDomainNameResponsePrivate
 * \brief The CreateDomainNameResponsePrivate class provides private implementation for CreateDomainNameResponse.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a CreateDomainNameResponsePrivate object with public implementation \a q.
 */
CreateDomainNameResponsePrivate::CreateDomainNameResponsePrivate(
    CreateDomainNameResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * Parses a APIGateway CreateDomainName response element from \a xml.
 */
void CreateDomainNameResponsePrivate::parseCreateDomainNameResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDomainNameResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace APIGateway
} // namespace QtAws
