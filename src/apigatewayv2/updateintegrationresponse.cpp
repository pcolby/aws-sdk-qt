// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateintegrationresponse.h"
#include "updateintegrationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::UpdateIntegrationResponse
 * \brief The UpdateIntegrationResponse class provides an interace for ApiGatewayV2 UpdateIntegration responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::updateIntegration
 */

/*!
 * Constructs a UpdateIntegrationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateIntegrationResponse::UpdateIntegrationResponse(
        const UpdateIntegrationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new UpdateIntegrationResponsePrivate(this), parent)
{
    setRequest(new UpdateIntegrationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateIntegrationRequest * UpdateIntegrationResponse::request() const
{
    Q_D(const UpdateIntegrationResponse);
    return static_cast<const UpdateIntegrationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 UpdateIntegration \a response.
 */
void UpdateIntegrationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateIntegrationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::UpdateIntegrationResponsePrivate
 * \brief The UpdateIntegrationResponsePrivate class provides private implementation for UpdateIntegrationResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a UpdateIntegrationResponsePrivate object with public implementation \a q.
 */
UpdateIntegrationResponsePrivate::UpdateIntegrationResponsePrivate(
    UpdateIntegrationResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 UpdateIntegration response element from \a xml.
 */
void UpdateIntegrationResponsePrivate::parseUpdateIntegrationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateIntegrationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
