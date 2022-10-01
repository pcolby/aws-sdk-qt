// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getauthorizersresponse.h"
#include "getauthorizersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetAuthorizersResponse
 * \brief The GetAuthorizersResponse class provides an interace for ApiGateway GetAuthorizers responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getAuthorizers
 */

/*!
 * Constructs a GetAuthorizersResponse object for \a reply to \a request, with parent \a parent.
 */
GetAuthorizersResponse::GetAuthorizersResponse(
        const GetAuthorizersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new GetAuthorizersResponsePrivate(this), parent)
{
    setRequest(new GetAuthorizersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAuthorizersRequest * GetAuthorizersResponse::request() const
{
    Q_D(const GetAuthorizersResponse);
    return static_cast<const GetAuthorizersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway GetAuthorizers \a response.
 */
void GetAuthorizersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAuthorizersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::GetAuthorizersResponsePrivate
 * \brief The GetAuthorizersResponsePrivate class provides private implementation for GetAuthorizersResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetAuthorizersResponsePrivate object with public implementation \a q.
 */
GetAuthorizersResponsePrivate::GetAuthorizersResponsePrivate(
    GetAuthorizersResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway GetAuthorizers response element from \a xml.
 */
void GetAuthorizersResponsePrivate::parseGetAuthorizersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAuthorizersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
