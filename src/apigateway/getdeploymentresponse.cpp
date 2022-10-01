// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdeploymentresponse.h"
#include "getdeploymentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetDeploymentResponse
 * \brief The GetDeploymentResponse class provides an interace for ApiGateway GetDeployment responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getDeployment
 */

/*!
 * Constructs a GetDeploymentResponse object for \a reply to \a request, with parent \a parent.
 */
GetDeploymentResponse::GetDeploymentResponse(
        const GetDeploymentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new GetDeploymentResponsePrivate(this), parent)
{
    setRequest(new GetDeploymentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDeploymentRequest * GetDeploymentResponse::request() const
{
    Q_D(const GetDeploymentResponse);
    return static_cast<const GetDeploymentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway GetDeployment \a response.
 */
void GetDeploymentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDeploymentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::GetDeploymentResponsePrivate
 * \brief The GetDeploymentResponsePrivate class provides private implementation for GetDeploymentResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetDeploymentResponsePrivate object with public implementation \a q.
 */
GetDeploymentResponsePrivate::GetDeploymentResponsePrivate(
    GetDeploymentResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway GetDeployment response element from \a xml.
 */
void GetDeploymentResponsePrivate::parseGetDeploymentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDeploymentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
