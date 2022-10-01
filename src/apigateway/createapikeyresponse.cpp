// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createapikeyresponse.h"
#include "createapikeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::CreateApiKeyResponse
 * \brief The CreateApiKeyResponse class provides an interace for ApiGateway CreateApiKey responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::createApiKey
 */

/*!
 * Constructs a CreateApiKeyResponse object for \a reply to \a request, with parent \a parent.
 */
CreateApiKeyResponse::CreateApiKeyResponse(
        const CreateApiKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new CreateApiKeyResponsePrivate(this), parent)
{
    setRequest(new CreateApiKeyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateApiKeyRequest * CreateApiKeyResponse::request() const
{
    Q_D(const CreateApiKeyResponse);
    return static_cast<const CreateApiKeyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway CreateApiKey \a response.
 */
void CreateApiKeyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateApiKeyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::CreateApiKeyResponsePrivate
 * \brief The CreateApiKeyResponsePrivate class provides private implementation for CreateApiKeyResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a CreateApiKeyResponsePrivate object with public implementation \a q.
 */
CreateApiKeyResponsePrivate::CreateApiKeyResponsePrivate(
    CreateApiKeyResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway CreateApiKey response element from \a xml.
 */
void CreateApiKeyResponsePrivate::parseCreateApiKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateApiKeyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
