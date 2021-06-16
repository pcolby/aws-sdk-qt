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

#include "getapikeysresponse.h"
#include "getapikeysresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::GetApiKeysResponse
 * \brief The GetApiKeysResponse class provides an interace for APIGateway GetApiKeys responses.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::getApiKeys
 */

/*!
 * Constructs a GetApiKeysResponse object for \a reply to \a request, with parent \a parent.
 */
GetApiKeysResponse::GetApiKeysResponse(
        const GetApiKeysRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetApiKeysResponsePrivate(this), parent)
{
    setRequest(new GetApiKeysRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetApiKeysRequest * GetApiKeysResponse::request() const
{
    Q_D(const GetApiKeysResponse);
    return static_cast<const GetApiKeysRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful APIGateway GetApiKeys \a response.
 */
void GetApiKeysResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetApiKeysResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::APIGateway::GetApiKeysResponsePrivate
 * \brief The GetApiKeysResponsePrivate class provides private implementation for GetApiKeysResponse.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a GetApiKeysResponsePrivate object with public implementation \a q.
 */
GetApiKeysResponsePrivate::GetApiKeysResponsePrivate(
    GetApiKeysResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * Parses a APIGateway GetApiKeys response element from \a xml.
 */
void GetApiKeysResponsePrivate::parseGetApiKeysResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetApiKeysResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace APIGateway
} // namespace QtAws
