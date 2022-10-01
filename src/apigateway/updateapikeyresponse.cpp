// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateapikeyresponse.h"
#include "updateapikeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::UpdateApiKeyResponse
 * \brief The UpdateApiKeyResponse class provides an interace for ApiGateway UpdateApiKey responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::updateApiKey
 */

/*!
 * Constructs a UpdateApiKeyResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateApiKeyResponse::UpdateApiKeyResponse(
        const UpdateApiKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new UpdateApiKeyResponsePrivate(this), parent)
{
    setRequest(new UpdateApiKeyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateApiKeyRequest * UpdateApiKeyResponse::request() const
{
    Q_D(const UpdateApiKeyResponse);
    return static_cast<const UpdateApiKeyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway UpdateApiKey \a response.
 */
void UpdateApiKeyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateApiKeyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::UpdateApiKeyResponsePrivate
 * \brief The UpdateApiKeyResponsePrivate class provides private implementation for UpdateApiKeyResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a UpdateApiKeyResponsePrivate object with public implementation \a q.
 */
UpdateApiKeyResponsePrivate::UpdateApiKeyResponsePrivate(
    UpdateApiKeyResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway UpdateApiKey response element from \a xml.
 */
void UpdateApiKeyResponsePrivate::parseUpdateApiKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateApiKeyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
