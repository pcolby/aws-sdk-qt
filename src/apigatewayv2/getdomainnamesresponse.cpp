// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdomainnamesresponse.h"
#include "getdomainnamesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetDomainNamesResponse
 * \brief The GetDomainNamesResponse class provides an interace for ApiGatewayV2 GetDomainNames responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getDomainNames
 */

/*!
 * Constructs a GetDomainNamesResponse object for \a reply to \a request, with parent \a parent.
 */
GetDomainNamesResponse::GetDomainNamesResponse(
        const GetDomainNamesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new GetDomainNamesResponsePrivate(this), parent)
{
    setRequest(new GetDomainNamesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDomainNamesRequest * GetDomainNamesResponse::request() const
{
    Q_D(const GetDomainNamesResponse);
    return static_cast<const GetDomainNamesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 GetDomainNames \a response.
 */
void GetDomainNamesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDomainNamesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::GetDomainNamesResponsePrivate
 * \brief The GetDomainNamesResponsePrivate class provides private implementation for GetDomainNamesResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetDomainNamesResponsePrivate object with public implementation \a q.
 */
GetDomainNamesResponsePrivate::GetDomainNamesResponsePrivate(
    GetDomainNamesResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 GetDomainNames response element from \a xml.
 */
void GetDomainNamesResponsePrivate::parseGetDomainNamesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDomainNamesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
