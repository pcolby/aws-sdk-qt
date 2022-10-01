// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getauthorizersresponse.h"
#include "getauthorizersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetAuthorizersResponse
 * \brief The GetAuthorizersResponse class provides an interace for ApiGatewayV2 GetAuthorizers responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getAuthorizers
 */

/*!
 * Constructs a GetAuthorizersResponse object for \a reply to \a request, with parent \a parent.
 */
GetAuthorizersResponse::GetAuthorizersResponse(
        const GetAuthorizersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new GetAuthorizersResponsePrivate(this), parent)
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
 * Parses a successful ApiGatewayV2 GetAuthorizers \a response.
 */
void GetAuthorizersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAuthorizersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::GetAuthorizersResponsePrivate
 * \brief The GetAuthorizersResponsePrivate class provides private implementation for GetAuthorizersResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetAuthorizersResponsePrivate object with public implementation \a q.
 */
GetAuthorizersResponsePrivate::GetAuthorizersResponsePrivate(
    GetAuthorizersResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 GetAuthorizers response element from \a xml.
 */
void GetAuthorizersResponsePrivate::parseGetAuthorizersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAuthorizersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
