// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedeploymentresponse.h"
#include "deletedeploymentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::DeleteDeploymentResponse
 * \brief The DeleteDeploymentResponse class provides an interace for ApiGateway DeleteDeployment responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::deleteDeployment
 */

/*!
 * Constructs a DeleteDeploymentResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDeploymentResponse::DeleteDeploymentResponse(
        const DeleteDeploymentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new DeleteDeploymentResponsePrivate(this), parent)
{
    setRequest(new DeleteDeploymentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDeploymentRequest * DeleteDeploymentResponse::request() const
{
    Q_D(const DeleteDeploymentResponse);
    return static_cast<const DeleteDeploymentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway DeleteDeployment \a response.
 */
void DeleteDeploymentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDeploymentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::DeleteDeploymentResponsePrivate
 * \brief The DeleteDeploymentResponsePrivate class provides private implementation for DeleteDeploymentResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a DeleteDeploymentResponsePrivate object with public implementation \a q.
 */
DeleteDeploymentResponsePrivate::DeleteDeploymentResponsePrivate(
    DeleteDeploymentResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway DeleteDeployment response element from \a xml.
 */
void DeleteDeploymentResponsePrivate::parseDeleteDeploymentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDeploymentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
