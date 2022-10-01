// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getvpclinkresponse.h"
#include "getvpclinkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetVpcLinkResponse
 * \brief The GetVpcLinkResponse class provides an interace for ApiGateway GetVpcLink responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getVpcLink
 */

/*!
 * Constructs a GetVpcLinkResponse object for \a reply to \a request, with parent \a parent.
 */
GetVpcLinkResponse::GetVpcLinkResponse(
        const GetVpcLinkRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new GetVpcLinkResponsePrivate(this), parent)
{
    setRequest(new GetVpcLinkRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetVpcLinkRequest * GetVpcLinkResponse::request() const
{
    Q_D(const GetVpcLinkResponse);
    return static_cast<const GetVpcLinkRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway GetVpcLink \a response.
 */
void GetVpcLinkResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetVpcLinkResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::GetVpcLinkResponsePrivate
 * \brief The GetVpcLinkResponsePrivate class provides private implementation for GetVpcLinkResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetVpcLinkResponsePrivate object with public implementation \a q.
 */
GetVpcLinkResponsePrivate::GetVpcLinkResponsePrivate(
    GetVpcLinkResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway GetVpcLink response element from \a xml.
 */
void GetVpcLinkResponsePrivate::parseGetVpcLinkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetVpcLinkResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
