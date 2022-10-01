// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getapikeyresponse.h"
#include "getapikeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetApiKeyResponse
 * \brief The GetApiKeyResponse class provides an interace for ApiGateway GetApiKey responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getApiKey
 */

/*!
 * Constructs a GetApiKeyResponse object for \a reply to \a request, with parent \a parent.
 */
GetApiKeyResponse::GetApiKeyResponse(
        const GetApiKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new GetApiKeyResponsePrivate(this), parent)
{
    setRequest(new GetApiKeyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetApiKeyRequest * GetApiKeyResponse::request() const
{
    Q_D(const GetApiKeyResponse);
    return static_cast<const GetApiKeyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway GetApiKey \a response.
 */
void GetApiKeyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetApiKeyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::GetApiKeyResponsePrivate
 * \brief The GetApiKeyResponsePrivate class provides private implementation for GetApiKeyResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetApiKeyResponsePrivate object with public implementation \a q.
 */
GetApiKeyResponsePrivate::GetApiKeyResponsePrivate(
    GetApiKeyResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway GetApiKey response element from \a xml.
 */
void GetApiKeyResponsePrivate::parseGetApiKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetApiKeyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
