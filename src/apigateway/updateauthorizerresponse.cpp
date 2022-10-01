// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateauthorizerresponse.h"
#include "updateauthorizerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::UpdateAuthorizerResponse
 * \brief The UpdateAuthorizerResponse class provides an interace for ApiGateway UpdateAuthorizer responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::updateAuthorizer
 */

/*!
 * Constructs a UpdateAuthorizerResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateAuthorizerResponse::UpdateAuthorizerResponse(
        const UpdateAuthorizerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new UpdateAuthorizerResponsePrivate(this), parent)
{
    setRequest(new UpdateAuthorizerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateAuthorizerRequest * UpdateAuthorizerResponse::request() const
{
    Q_D(const UpdateAuthorizerResponse);
    return static_cast<const UpdateAuthorizerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway UpdateAuthorizer \a response.
 */
void UpdateAuthorizerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateAuthorizerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::UpdateAuthorizerResponsePrivate
 * \brief The UpdateAuthorizerResponsePrivate class provides private implementation for UpdateAuthorizerResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a UpdateAuthorizerResponsePrivate object with public implementation \a q.
 */
UpdateAuthorizerResponsePrivate::UpdateAuthorizerResponsePrivate(
    UpdateAuthorizerResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway UpdateAuthorizer response element from \a xml.
 */
void UpdateAuthorizerResponsePrivate::parseUpdateAuthorizerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAuthorizerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
