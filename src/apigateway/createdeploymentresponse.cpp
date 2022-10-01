// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdeploymentresponse.h"
#include "createdeploymentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::CreateDeploymentResponse
 * \brief The CreateDeploymentResponse class provides an interace for ApiGateway CreateDeployment responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::createDeployment
 */

/*!
 * Constructs a CreateDeploymentResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDeploymentResponse::CreateDeploymentResponse(
        const CreateDeploymentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new CreateDeploymentResponsePrivate(this), parent)
{
    setRequest(new CreateDeploymentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDeploymentRequest * CreateDeploymentResponse::request() const
{
    Q_D(const CreateDeploymentResponse);
    return static_cast<const CreateDeploymentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway CreateDeployment \a response.
 */
void CreateDeploymentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDeploymentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::CreateDeploymentResponsePrivate
 * \brief The CreateDeploymentResponsePrivate class provides private implementation for CreateDeploymentResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a CreateDeploymentResponsePrivate object with public implementation \a q.
 */
CreateDeploymentResponsePrivate::CreateDeploymentResponsePrivate(
    CreateDeploymentResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway CreateDeployment response element from \a xml.
 */
void CreateDeploymentResponsePrivate::parseCreateDeploymentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDeploymentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
