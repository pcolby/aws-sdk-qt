// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getusageplanresponse.h"
#include "getusageplanresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetUsagePlanResponse
 * \brief The GetUsagePlanResponse class provides an interace for ApiGateway GetUsagePlan responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getUsagePlan
 */

/*!
 * Constructs a GetUsagePlanResponse object for \a reply to \a request, with parent \a parent.
 */
GetUsagePlanResponse::GetUsagePlanResponse(
        const GetUsagePlanRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new GetUsagePlanResponsePrivate(this), parent)
{
    setRequest(new GetUsagePlanRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetUsagePlanRequest * GetUsagePlanResponse::request() const
{
    Q_D(const GetUsagePlanResponse);
    return static_cast<const GetUsagePlanRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway GetUsagePlan \a response.
 */
void GetUsagePlanResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetUsagePlanResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::GetUsagePlanResponsePrivate
 * \brief The GetUsagePlanResponsePrivate class provides private implementation for GetUsagePlanResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetUsagePlanResponsePrivate object with public implementation \a q.
 */
GetUsagePlanResponsePrivate::GetUsagePlanResponsePrivate(
    GetUsagePlanResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway GetUsagePlan response element from \a xml.
 */
void GetUsagePlanResponsePrivate::parseGetUsagePlanResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetUsagePlanResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
