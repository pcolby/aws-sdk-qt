// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateintegrationresponseresponse.h"
#include "updateintegrationresponseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::UpdateIntegrationResponseResponse
 * \brief The UpdateIntegrationResponseResponse class provides an interace for ApiGatewayV2 UpdateIntegrationResponse responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::updateIntegrationResponse
 */

/*!
 * Constructs a UpdateIntegrationResponseResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateIntegrationResponseResponse::UpdateIntegrationResponseResponse(
        const UpdateIntegrationResponseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new UpdateIntegrationResponseResponsePrivate(this), parent)
{
    setRequest(new UpdateIntegrationResponseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateIntegrationResponseRequest * UpdateIntegrationResponseResponse::request() const
{
    Q_D(const UpdateIntegrationResponseResponse);
    return static_cast<const UpdateIntegrationResponseRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 UpdateIntegrationResponse \a response.
 */
void UpdateIntegrationResponseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateIntegrationResponseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::UpdateIntegrationResponseResponsePrivate
 * \brief The UpdateIntegrationResponseResponsePrivate class provides private implementation for UpdateIntegrationResponseResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a UpdateIntegrationResponseResponsePrivate object with public implementation \a q.
 */
UpdateIntegrationResponseResponsePrivate::UpdateIntegrationResponseResponsePrivate(
    UpdateIntegrationResponseResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 UpdateIntegrationResponse response element from \a xml.
 */
void UpdateIntegrationResponseResponsePrivate::parseUpdateIntegrationResponseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateIntegrationResponseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
