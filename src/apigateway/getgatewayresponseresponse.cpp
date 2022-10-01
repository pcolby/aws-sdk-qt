// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getgatewayresponseresponse.h"
#include "getgatewayresponseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetGatewayResponseResponse
 * \brief The GetGatewayResponseResponse class provides an interace for ApiGateway GetGatewayResponse responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getGatewayResponse
 */

/*!
 * Constructs a GetGatewayResponseResponse object for \a reply to \a request, with parent \a parent.
 */
GetGatewayResponseResponse::GetGatewayResponseResponse(
        const GetGatewayResponseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new GetGatewayResponseResponsePrivate(this), parent)
{
    setRequest(new GetGatewayResponseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetGatewayResponseRequest * GetGatewayResponseResponse::request() const
{
    Q_D(const GetGatewayResponseResponse);
    return static_cast<const GetGatewayResponseRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway GetGatewayResponse \a response.
 */
void GetGatewayResponseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetGatewayResponseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::GetGatewayResponseResponsePrivate
 * \brief The GetGatewayResponseResponsePrivate class provides private implementation for GetGatewayResponseResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetGatewayResponseResponsePrivate object with public implementation \a q.
 */
GetGatewayResponseResponsePrivate::GetGatewayResponseResponsePrivate(
    GetGatewayResponseResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway GetGatewayResponse response element from \a xml.
 */
void GetGatewayResponseResponsePrivate::parseGetGatewayResponseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetGatewayResponseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
