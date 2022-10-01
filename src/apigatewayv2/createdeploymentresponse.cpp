// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdeploymentresponse.h"
#include "createdeploymentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::CreateDeploymentResponse
 * \brief The CreateDeploymentResponse class provides an interace for ApiGatewayV2 CreateDeployment responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::createDeployment
 */

/*!
 * Constructs a CreateDeploymentResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDeploymentResponse::CreateDeploymentResponse(
        const CreateDeploymentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new CreateDeploymentResponsePrivate(this), parent)
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
 * Parses a successful ApiGatewayV2 CreateDeployment \a response.
 */
void CreateDeploymentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDeploymentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::CreateDeploymentResponsePrivate
 * \brief The CreateDeploymentResponsePrivate class provides private implementation for CreateDeploymentResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a CreateDeploymentResponsePrivate object with public implementation \a q.
 */
CreateDeploymentResponsePrivate::CreateDeploymentResponsePrivate(
    CreateDeploymentResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 CreateDeployment response element from \a xml.
 */
void CreateDeploymentResponsePrivate::parseCreateDeploymentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDeploymentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
