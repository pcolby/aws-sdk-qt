// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getusageplankeyresponse.h"
#include "getusageplankeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetUsagePlanKeyResponse
 * \brief The GetUsagePlanKeyResponse class provides an interace for ApiGateway GetUsagePlanKey responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getUsagePlanKey
 */

/*!
 * Constructs a GetUsagePlanKeyResponse object for \a reply to \a request, with parent \a parent.
 */
GetUsagePlanKeyResponse::GetUsagePlanKeyResponse(
        const GetUsagePlanKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new GetUsagePlanKeyResponsePrivate(this), parent)
{
    setRequest(new GetUsagePlanKeyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetUsagePlanKeyRequest * GetUsagePlanKeyResponse::request() const
{
    Q_D(const GetUsagePlanKeyResponse);
    return static_cast<const GetUsagePlanKeyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway GetUsagePlanKey \a response.
 */
void GetUsagePlanKeyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetUsagePlanKeyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::GetUsagePlanKeyResponsePrivate
 * \brief The GetUsagePlanKeyResponsePrivate class provides private implementation for GetUsagePlanKeyResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetUsagePlanKeyResponsePrivate object with public implementation \a q.
 */
GetUsagePlanKeyResponsePrivate::GetUsagePlanKeyResponsePrivate(
    GetUsagePlanKeyResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway GetUsagePlanKey response element from \a xml.
 */
void GetUsagePlanKeyResponsePrivate::parseGetUsagePlanKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetUsagePlanKeyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
