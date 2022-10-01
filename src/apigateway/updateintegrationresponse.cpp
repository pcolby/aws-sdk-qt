// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateintegrationresponse.h"
#include "updateintegrationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::UpdateIntegrationResponse
 * \brief The UpdateIntegrationResponse class provides an interace for ApiGateway UpdateIntegration responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::updateIntegration
 */

/*!
 * Constructs a UpdateIntegrationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateIntegrationResponse::UpdateIntegrationResponse(
        const UpdateIntegrationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new UpdateIntegrationResponsePrivate(this), parent)
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
 * Parses a successful ApiGateway UpdateIntegration \a response.
 */
void UpdateIntegrationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateIntegrationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::UpdateIntegrationResponsePrivate
 * \brief The UpdateIntegrationResponsePrivate class provides private implementation for UpdateIntegrationResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a UpdateIntegrationResponsePrivate object with public implementation \a q.
 */
UpdateIntegrationResponsePrivate::UpdateIntegrationResponsePrivate(
    UpdateIntegrationResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway UpdateIntegration response element from \a xml.
 */
void UpdateIntegrationResponsePrivate::parseUpdateIntegrationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateIntegrationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
