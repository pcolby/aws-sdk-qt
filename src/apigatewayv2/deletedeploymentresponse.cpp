// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedeploymentresponse.h"
#include "deletedeploymentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::DeleteDeploymentResponse
 * \brief The DeleteDeploymentResponse class provides an interace for ApiGatewayV2 DeleteDeployment responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::deleteDeployment
 */

/*!
 * Constructs a DeleteDeploymentResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDeploymentResponse::DeleteDeploymentResponse(
        const DeleteDeploymentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new DeleteDeploymentResponsePrivate(this), parent)
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
 * Parses a successful ApiGatewayV2 DeleteDeployment \a response.
 */
void DeleteDeploymentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDeploymentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::DeleteDeploymentResponsePrivate
 * \brief The DeleteDeploymentResponsePrivate class provides private implementation for DeleteDeploymentResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a DeleteDeploymentResponsePrivate object with public implementation \a q.
 */
DeleteDeploymentResponsePrivate::DeleteDeploymentResponsePrivate(
    DeleteDeploymentResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 DeleteDeployment response element from \a xml.
 */
void DeleteDeploymentResponsePrivate::parseDeleteDeploymentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDeploymentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
