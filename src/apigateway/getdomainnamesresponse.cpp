// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdomainnamesresponse.h"
#include "getdomainnamesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetDomainNamesResponse
 * \brief The GetDomainNamesResponse class provides an interace for ApiGateway GetDomainNames responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getDomainNames
 */

/*!
 * Constructs a GetDomainNamesResponse object for \a reply to \a request, with parent \a parent.
 */
GetDomainNamesResponse::GetDomainNamesResponse(
        const GetDomainNamesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new GetDomainNamesResponsePrivate(this), parent)
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
 * Parses a successful ApiGateway GetDomainNames \a response.
 */
void GetDomainNamesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDomainNamesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::GetDomainNamesResponsePrivate
 * \brief The GetDomainNamesResponsePrivate class provides private implementation for GetDomainNamesResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetDomainNamesResponsePrivate object with public implementation \a q.
 */
GetDomainNamesResponsePrivate::GetDomainNamesResponsePrivate(
    GetDomainNamesResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway GetDomainNames response element from \a xml.
 */
void GetDomainNamesResponsePrivate::parseGetDomainNamesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDomainNamesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
