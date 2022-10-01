// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateintegrationresponseresponse.h"
#include "updateintegrationresponseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::UpdateIntegrationResponseResponse
 * \brief The UpdateIntegrationResponseResponse class provides an interace for ApiGateway UpdateIntegrationResponse responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::updateIntegrationResponse
 */

/*!
 * Constructs a UpdateIntegrationResponseResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateIntegrationResponseResponse::UpdateIntegrationResponseResponse(
        const UpdateIntegrationResponseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new UpdateIntegrationResponseResponsePrivate(this), parent)
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
 * Parses a successful ApiGateway UpdateIntegrationResponse \a response.
 */
void UpdateIntegrationResponseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateIntegrationResponseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::UpdateIntegrationResponseResponsePrivate
 * \brief The UpdateIntegrationResponseResponsePrivate class provides private implementation for UpdateIntegrationResponseResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a UpdateIntegrationResponseResponsePrivate object with public implementation \a q.
 */
UpdateIntegrationResponseResponsePrivate::UpdateIntegrationResponseResponsePrivate(
    UpdateIntegrationResponseResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway UpdateIntegrationResponse response element from \a xml.
 */
void UpdateIntegrationResponseResponsePrivate::parseUpdateIntegrationResponseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateIntegrationResponseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
