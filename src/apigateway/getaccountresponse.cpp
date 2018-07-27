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

#include "getaccountresponse.h"
#include "getaccountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::GetAccountResponse
 * \brief The GetAccountResponse class provides an interace for APIGateway GetAccount responses.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::getAccount
 */

/*!
 * Constructs a GetAccountResponse object for \a reply to \a request, with parent \a parent.
 */
GetAccountResponse::GetAccountResponse(
        const GetAccountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetAccountResponsePrivate(this), parent)
{
    setRequest(new GetAccountRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAccountRequest * GetAccountResponse::request() const
{
    Q_D(const GetAccountResponse);
    return static_cast<const GetAccountRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful APIGateway GetAccount \a response.
 */
void GetAccountResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAccountResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::APIGateway::GetAccountResponsePrivate
 * \brief The GetAccountResponsePrivate class provides private implementation for GetAccountResponse.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a GetAccountResponsePrivate object with public implementation \a q.
 */
GetAccountResponsePrivate::GetAccountResponsePrivate(
    GetAccountResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * Parses a APIGateway GetAccount response element from \a xml.
 */
void GetAccountResponsePrivate::parseGetAccountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAccountResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace APIGateway
} // namespace QtAws
