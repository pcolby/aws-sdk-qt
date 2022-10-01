// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "importapikeysresponse.h"
#include "importapikeysresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::ImportApiKeysResponse
 * \brief The ImportApiKeysResponse class provides an interace for ApiGateway ImportApiKeys responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::importApiKeys
 */

/*!
 * Constructs a ImportApiKeysResponse object for \a reply to \a request, with parent \a parent.
 */
ImportApiKeysResponse::ImportApiKeysResponse(
        const ImportApiKeysRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new ImportApiKeysResponsePrivate(this), parent)
{
    setRequest(new ImportApiKeysRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ImportApiKeysRequest * ImportApiKeysResponse::request() const
{
    Q_D(const ImportApiKeysResponse);
    return static_cast<const ImportApiKeysRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway ImportApiKeys \a response.
 */
void ImportApiKeysResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ImportApiKeysResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::ImportApiKeysResponsePrivate
 * \brief The ImportApiKeysResponsePrivate class provides private implementation for ImportApiKeysResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a ImportApiKeysResponsePrivate object with public implementation \a q.
 */
ImportApiKeysResponsePrivate::ImportApiKeysResponsePrivate(
    ImportApiKeysResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway ImportApiKeys response element from \a xml.
 */
void ImportApiKeysResponsePrivate::parseImportApiKeysResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ImportApiKeysResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
