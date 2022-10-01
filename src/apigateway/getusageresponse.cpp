// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getusageresponse.h"
#include "getusageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetUsageResponse
 * \brief The GetUsageResponse class provides an interace for ApiGateway GetUsage responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getUsage
 */

/*!
 * Constructs a GetUsageResponse object for \a reply to \a request, with parent \a parent.
 */
GetUsageResponse::GetUsageResponse(
        const GetUsageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new GetUsageResponsePrivate(this), parent)
{
    setRequest(new GetUsageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetUsageRequest * GetUsageResponse::request() const
{
    Q_D(const GetUsageResponse);
    return static_cast<const GetUsageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway GetUsage \a response.
 */
void GetUsageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetUsageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::GetUsageResponsePrivate
 * \brief The GetUsageResponsePrivate class provides private implementation for GetUsageResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetUsageResponsePrivate object with public implementation \a q.
 */
GetUsageResponsePrivate::GetUsageResponsePrivate(
    GetUsageResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway GetUsage response element from \a xml.
 */
void GetUsageResponsePrivate::parseGetUsageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetUsageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
