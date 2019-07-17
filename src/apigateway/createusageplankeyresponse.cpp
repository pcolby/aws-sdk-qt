/*
    Copyright 2013-2019 Paul Colby

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

#include "createusageplankeyresponse.h"
#include "createusageplankeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::CreateUsagePlanKeyResponse
 * \brief The CreateUsagePlanKeyResponse class provides an interace for APIGateway CreateUsagePlanKey responses.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::createUsagePlanKey
 */

/*!
 * Constructs a CreateUsagePlanKeyResponse object for \a reply to \a request, with parent \a parent.
 */
CreateUsagePlanKeyResponse::CreateUsagePlanKeyResponse(
        const CreateUsagePlanKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new CreateUsagePlanKeyResponsePrivate(this), parent)
{
    setRequest(new CreateUsagePlanKeyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateUsagePlanKeyRequest * CreateUsagePlanKeyResponse::request() const
{
    Q_D(const CreateUsagePlanKeyResponse);
    return static_cast<const CreateUsagePlanKeyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful APIGateway CreateUsagePlanKey \a response.
 */
void CreateUsagePlanKeyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateUsagePlanKeyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::APIGateway::CreateUsagePlanKeyResponsePrivate
 * \brief The CreateUsagePlanKeyResponsePrivate class provides private implementation for CreateUsagePlanKeyResponse.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a CreateUsagePlanKeyResponsePrivate object with public implementation \a q.
 */
CreateUsagePlanKeyResponsePrivate::CreateUsagePlanKeyResponsePrivate(
    CreateUsagePlanKeyResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * Parses a APIGateway CreateUsagePlanKey response element from \a xml.
 */
void CreateUsagePlanKeyResponsePrivate::parseCreateUsagePlanKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateUsagePlanKeyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace APIGateway
} // namespace QtAws
