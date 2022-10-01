// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getauthorizerresponse.h"
#include "getauthorizerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetAuthorizerResponse
 * \brief The GetAuthorizerResponse class provides an interace for ApiGatewayV2 GetAuthorizer responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getAuthorizer
 */

/*!
 * Constructs a GetAuthorizerResponse object for \a reply to \a request, with parent \a parent.
 */
GetAuthorizerResponse::GetAuthorizerResponse(
        const GetAuthorizerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new GetAuthorizerResponsePrivate(this), parent)
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
 * Parses a successful ApiGatewayV2 GetAuthorizer \a response.
 */
void GetAuthorizerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAuthorizerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::GetAuthorizerResponsePrivate
 * \brief The GetAuthorizerResponsePrivate class provides private implementation for GetAuthorizerResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetAuthorizerResponsePrivate object with public implementation \a q.
 */
GetAuthorizerResponsePrivate::GetAuthorizerResponsePrivate(
    GetAuthorizerResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 GetAuthorizer response element from \a xml.
 */
void GetAuthorizerResponsePrivate::parseGetAuthorizerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAuthorizerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
