// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getusageplansresponse.h"
#include "getusageplansresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetUsagePlansResponse
 * \brief The GetUsagePlansResponse class provides an interace for ApiGateway GetUsagePlans responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getUsagePlans
 */

/*!
 * Constructs a GetUsagePlansResponse object for \a reply to \a request, with parent \a parent.
 */
GetUsagePlansResponse::GetUsagePlansResponse(
        const GetUsagePlansRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new GetUsagePlansResponsePrivate(this), parent)
{
    setRequest(new GetUsagePlansRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetUsagePlansRequest * GetUsagePlansResponse::request() const
{
    Q_D(const GetUsagePlansResponse);
    return static_cast<const GetUsagePlansRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway GetUsagePlans \a response.
 */
void GetUsagePlansResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetUsagePlansResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::GetUsagePlansResponsePrivate
 * \brief The GetUsagePlansResponsePrivate class provides private implementation for GetUsagePlansResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetUsagePlansResponsePrivate object with public implementation \a q.
 */
GetUsagePlansResponsePrivate::GetUsagePlansResponsePrivate(
    GetUsagePlansResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway GetUsagePlans response element from \a xml.
 */
void GetUsagePlansResponsePrivate::parseGetUsagePlansResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetUsagePlansResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
