// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteapikeyresponse.h"
#include "deleteapikeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::DeleteApiKeyResponse
 * \brief The DeleteApiKeyResponse class provides an interace for ApiGateway DeleteApiKey responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::deleteApiKey
 */

/*!
 * Constructs a DeleteApiKeyResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteApiKeyResponse::DeleteApiKeyResponse(
        const DeleteApiKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new DeleteApiKeyResponsePrivate(this), parent)
{
    setRequest(new DeleteApiKeyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteApiKeyRequest * DeleteApiKeyResponse::request() const
{
    Q_D(const DeleteApiKeyResponse);
    return static_cast<const DeleteApiKeyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway DeleteApiKey \a response.
 */
void DeleteApiKeyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteApiKeyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::DeleteApiKeyResponsePrivate
 * \brief The DeleteApiKeyResponsePrivate class provides private implementation for DeleteApiKeyResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a DeleteApiKeyResponsePrivate object with public implementation \a q.
 */
DeleteApiKeyResponsePrivate::DeleteApiKeyResponsePrivate(
    DeleteApiKeyResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway DeleteApiKey response element from \a xml.
 */
void DeleteApiKeyResponsePrivate::parseDeleteApiKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteApiKeyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
