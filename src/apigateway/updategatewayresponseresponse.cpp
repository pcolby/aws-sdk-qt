// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updategatewayresponseresponse.h"
#include "updategatewayresponseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::UpdateGatewayResponseResponse
 * \brief The UpdateGatewayResponseResponse class provides an interace for ApiGateway UpdateGatewayResponse responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::updateGatewayResponse
 */

/*!
 * Constructs a UpdateGatewayResponseResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateGatewayResponseResponse::UpdateGatewayResponseResponse(
        const UpdateGatewayResponseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new UpdateGatewayResponseResponsePrivate(this), parent)
{
    setRequest(new UpdateGatewayResponseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateGatewayResponseRequest * UpdateGatewayResponseResponse::request() const
{
    Q_D(const UpdateGatewayResponseResponse);
    return static_cast<const UpdateGatewayResponseRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway UpdateGatewayResponse \a response.
 */
void UpdateGatewayResponseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateGatewayResponseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::UpdateGatewayResponseResponsePrivate
 * \brief The UpdateGatewayResponseResponsePrivate class provides private implementation for UpdateGatewayResponseResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a UpdateGatewayResponseResponsePrivate object with public implementation \a q.
 */
UpdateGatewayResponseResponsePrivate::UpdateGatewayResponseResponsePrivate(
    UpdateGatewayResponseResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway UpdateGatewayResponse response element from \a xml.
 */
void UpdateGatewayResponseResponsePrivate::parseUpdateGatewayResponseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateGatewayResponseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
