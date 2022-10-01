// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getvpclinksresponse.h"
#include "getvpclinksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetVpcLinksResponse
 * \brief The GetVpcLinksResponse class provides an interace for ApiGatewayV2 GetVpcLinks responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getVpcLinks
 */

/*!
 * Constructs a GetVpcLinksResponse object for \a reply to \a request, with parent \a parent.
 */
GetVpcLinksResponse::GetVpcLinksResponse(
        const GetVpcLinksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new GetVpcLinksResponsePrivate(this), parent)
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
 * Parses a successful ApiGatewayV2 GetVpcLinks \a response.
 */
void GetVpcLinksResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetVpcLinksResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::GetVpcLinksResponsePrivate
 * \brief The GetVpcLinksResponsePrivate class provides private implementation for GetVpcLinksResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetVpcLinksResponsePrivate object with public implementation \a q.
 */
GetVpcLinksResponsePrivate::GetVpcLinksResponsePrivate(
    GetVpcLinksResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 GetVpcLinks response element from \a xml.
 */
void GetVpcLinksResponsePrivate::parseGetVpcLinksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetVpcLinksResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
