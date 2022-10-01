// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getvpclinksresponse.h"
#include "getvpclinksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetVpcLinksResponse
 * \brief The GetVpcLinksResponse class provides an interace for ApiGateway GetVpcLinks responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getVpcLinks
 */

/*!
 * Constructs a GetVpcLinksResponse object for \a reply to \a request, with parent \a parent.
 */
GetVpcLinksResponse::GetVpcLinksResponse(
        const GetVpcLinksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new GetVpcLinksResponsePrivate(this), parent)
{
    setRequest(new GetVpcLinksRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetVpcLinksRequest * GetVpcLinksResponse::request() const
{
    Q_D(const GetVpcLinksResponse);
    return static_cast<const GetVpcLinksRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway GetVpcLinks \a response.
 */
void GetVpcLinksResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetVpcLinksResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::GetVpcLinksResponsePrivate
 * \brief The GetVpcLinksResponsePrivate class provides private implementation for GetVpcLinksResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetVpcLinksResponsePrivate object with public implementation \a q.
 */
GetVpcLinksResponsePrivate::GetVpcLinksResponsePrivate(
    GetVpcLinksResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway GetVpcLinks response element from \a xml.
 */
void GetVpcLinksResponsePrivate::parseGetVpcLinksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetVpcLinksResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
