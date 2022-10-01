// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedeploymentresponse.h"
#include "updatedeploymentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::UpdateDeploymentResponse
 * \brief The UpdateDeploymentResponse class provides an interace for ApiGateway UpdateDeployment responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::updateDeployment
 */

/*!
 * Constructs a UpdateDeploymentResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDeploymentResponse::UpdateDeploymentResponse(
        const UpdateDeploymentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new UpdateDeploymentResponsePrivate(this), parent)
{
    setRequest(new UpdateDeploymentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDeploymentRequest * UpdateDeploymentResponse::request() const
{
    Q_D(const UpdateDeploymentResponse);
    return static_cast<const UpdateDeploymentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway UpdateDeployment \a response.
 */
void UpdateDeploymentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDeploymentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::UpdateDeploymentResponsePrivate
 * \brief The UpdateDeploymentResponsePrivate class provides private implementation for UpdateDeploymentResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a UpdateDeploymentResponsePrivate object with public implementation \a q.
 */
UpdateDeploymentResponsePrivate::UpdateDeploymentResponsePrivate(
    UpdateDeploymentResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway UpdateDeployment response element from \a xml.
 */
void UpdateDeploymentResponsePrivate::parseUpdateDeploymentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDeploymentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
