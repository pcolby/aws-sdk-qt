// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getusageplankeysresponse.h"
#include "getusageplankeysresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetUsagePlanKeysResponse
 * \brief The GetUsagePlanKeysResponse class provides an interace for ApiGateway GetUsagePlanKeys responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getUsagePlanKeys
 */

/*!
 * Constructs a GetUsagePlanKeysResponse object for \a reply to \a request, with parent \a parent.
 */
GetUsagePlanKeysResponse::GetUsagePlanKeysResponse(
        const GetUsagePlanKeysRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new GetUsagePlanKeysResponsePrivate(this), parent)
{
    setRequest(new GetUsagePlanKeysRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetUsagePlanKeysRequest * GetUsagePlanKeysResponse::request() const
{
    Q_D(const GetUsagePlanKeysResponse);
    return static_cast<const GetUsagePlanKeysRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway GetUsagePlanKeys \a response.
 */
void GetUsagePlanKeysResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetUsagePlanKeysResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::GetUsagePlanKeysResponsePrivate
 * \brief The GetUsagePlanKeysResponsePrivate class provides private implementation for GetUsagePlanKeysResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetUsagePlanKeysResponsePrivate object with public implementation \a q.
 */
GetUsagePlanKeysResponsePrivate::GetUsagePlanKeysResponsePrivate(
    GetUsagePlanKeysResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway GetUsagePlanKeys response element from \a xml.
 */
void GetUsagePlanKeysResponsePrivate::parseGetUsagePlanKeysResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetUsagePlanKeysResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
