// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getapikeysresponse.h"
#include "getapikeysresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetApiKeysResponse
 * \brief The GetApiKeysResponse class provides an interace for ApiGateway GetApiKeys responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getApiKeys
 */

/*!
 * Constructs a GetApiKeysResponse object for \a reply to \a request, with parent \a parent.
 */
GetApiKeysResponse::GetApiKeysResponse(
        const GetApiKeysRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new GetApiKeysResponsePrivate(this), parent)
{
    setRequest(new GetApiKeysRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetApiKeysRequest * GetApiKeysResponse::request() const
{
    Q_D(const GetApiKeysResponse);
    return static_cast<const GetApiKeysRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway GetApiKeys \a response.
 */
void GetApiKeysResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetApiKeysResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::GetApiKeysResponsePrivate
 * \brief The GetApiKeysResponsePrivate class provides private implementation for GetApiKeysResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetApiKeysResponsePrivate object with public implementation \a q.
 */
GetApiKeysResponsePrivate::GetApiKeysResponsePrivate(
    GetApiKeysResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway GetApiKeys response element from \a xml.
 */
void GetApiKeysResponsePrivate::parseGetApiKeysResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetApiKeysResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
