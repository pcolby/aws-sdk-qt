// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdeploymentsresponse.h"
#include "getdeploymentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetDeploymentsResponse
 * \brief The GetDeploymentsResponse class provides an interace for ApiGateway GetDeployments responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getDeployments
 */

/*!
 * Constructs a GetDeploymentsResponse object for \a reply to \a request, with parent \a parent.
 */
GetDeploymentsResponse::GetDeploymentsResponse(
        const GetDeploymentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new GetDeploymentsResponsePrivate(this), parent)
{
    setRequest(new GetDeploymentsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDeploymentsRequest * GetDeploymentsResponse::request() const
{
    Q_D(const GetDeploymentsResponse);
    return static_cast<const GetDeploymentsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway GetDeployments \a response.
 */
void GetDeploymentsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDeploymentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::GetDeploymentsResponsePrivate
 * \brief The GetDeploymentsResponsePrivate class provides private implementation for GetDeploymentsResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetDeploymentsResponsePrivate object with public implementation \a q.
 */
GetDeploymentsResponsePrivate::GetDeploymentsResponsePrivate(
    GetDeploymentsResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway GetDeployments response element from \a xml.
 */
void GetDeploymentsResponsePrivate::parseGetDeploymentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDeploymentsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
