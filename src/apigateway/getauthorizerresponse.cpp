// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getauthorizerresponse.h"
#include "getauthorizerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetAuthorizerResponse
 * \brief The GetAuthorizerResponse class provides an interace for ApiGateway GetAuthorizer responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getAuthorizer
 */

/*!
 * Constructs a GetAuthorizerResponse object for \a reply to \a request, with parent \a parent.
 */
GetAuthorizerResponse::GetAuthorizerResponse(
        const GetAuthorizerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new GetAuthorizerResponsePrivate(this), parent)
{
    setRequest(new GetAuthorizerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAuthorizerRequest * GetAuthorizerResponse::request() const
{
    Q_D(const GetAuthorizerResponse);
    return static_cast<const GetAuthorizerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway GetAuthorizer \a response.
 */
void GetAuthorizerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAuthorizerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::GetAuthorizerResponsePrivate
 * \brief The GetAuthorizerResponsePrivate class provides private implementation for GetAuthorizerResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetAuthorizerResponsePrivate object with public implementation \a q.
 */
GetAuthorizerResponsePrivate::GetAuthorizerResponsePrivate(
    GetAuthorizerResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway GetAuthorizer response element from \a xml.
 */
void GetAuthorizerResponsePrivate::parseGetAuthorizerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAuthorizerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
