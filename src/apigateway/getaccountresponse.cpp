// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getaccountresponse.h"
#include "getaccountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetAccountResponse
 * \brief The GetAccountResponse class provides an interace for ApiGateway GetAccount responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getAccount
 */

/*!
 * Constructs a GetAccountResponse object for \a reply to \a request, with parent \a parent.
 */
GetAccountResponse::GetAccountResponse(
        const GetAccountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new GetAccountResponsePrivate(this), parent)
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
 * Parses a successful ApiGateway GetAccount \a response.
 */
void GetAccountResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAccountResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::GetAccountResponsePrivate
 * \brief The GetAccountResponsePrivate class provides private implementation for GetAccountResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetAccountResponsePrivate object with public implementation \a q.
 */
GetAccountResponsePrivate::GetAccountResponsePrivate(
    GetAccountResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway GetAccount response element from \a xml.
 */
void GetAccountResponsePrivate::parseGetAccountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAccountResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
