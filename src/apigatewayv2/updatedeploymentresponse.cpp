// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedeploymentresponse.h"
#include "updatedeploymentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::UpdateDeploymentResponse
 * \brief The UpdateDeploymentResponse class provides an interace for ApiGatewayV2 UpdateDeployment responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::updateDeployment
 */

/*!
 * Constructs a UpdateDeploymentResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDeploymentResponse::UpdateDeploymentResponse(
        const UpdateDeploymentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new UpdateDeploymentResponsePrivate(this), parent)
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
 * Parses a successful ApiGatewayV2 UpdateDeployment \a response.
 */
void UpdateDeploymentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDeploymentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::UpdateDeploymentResponsePrivate
 * \brief The UpdateDeploymentResponsePrivate class provides private implementation for UpdateDeploymentResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a UpdateDeploymentResponsePrivate object with public implementation \a q.
 */
UpdateDeploymentResponsePrivate::UpdateDeploymentResponsePrivate(
    UpdateDeploymentResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 UpdateDeployment response element from \a xml.
 */
void UpdateDeploymentResponsePrivate::parseUpdateDeploymentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDeploymentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
