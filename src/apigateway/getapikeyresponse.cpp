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

#include "getapikeyresponse.h"
#include "getapikeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::GetApiKeyResponse
 * \brief The GetApiKeyResponse class provides an interace for APIGateway GetApiKey responses.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::getApiKey
 */

/*!
 * Constructs a GetApiKeyResponse object for \a reply to \a request, with parent \a parent.
 */
GetApiKeyResponse::GetApiKeyResponse(
        const GetApiKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetApiKeyResponsePrivate(this), parent)
{
    setRequest(new GetApiKeyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetApiKeyRequest * GetApiKeyResponse::request() const
{
    Q_D(const GetApiKeyResponse);
    return static_cast<const GetApiKeyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful APIGateway GetApiKey \a response.
 */
void GetApiKeyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetApiKeyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::APIGateway::GetApiKeyResponsePrivate
 * \brief The GetApiKeyResponsePrivate class provides private implementation for GetApiKeyResponse.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a GetApiKeyResponsePrivate object with public implementation \a q.
 */
GetApiKeyResponsePrivate::GetApiKeyResponsePrivate(
    GetApiKeyResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * Parses a APIGateway GetApiKey response element from \a xml.
 */
void GetApiKeyResponsePrivate::parseGetApiKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetApiKeyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace APIGateway
} // namespace QtAws
