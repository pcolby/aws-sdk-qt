// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "importrestapiresponse.h"
#include "importrestapiresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::ImportRestApiResponse
 * \brief The ImportRestApiResponse class provides an interace for ApiGateway ImportRestApi responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::importRestApi
 */

/*!
 * Constructs a ImportRestApiResponse object for \a reply to \a request, with parent \a parent.
 */
ImportRestApiResponse::ImportRestApiResponse(
        const ImportRestApiRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new ImportRestApiResponsePrivate(this), parent)
{
    setRequest(new ImportRestApiRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ImportRestApiRequest * ImportRestApiResponse::request() const
{
    Q_D(const ImportRestApiResponse);
    return static_cast<const ImportRestApiRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway ImportRestApi \a response.
 */
void ImportRestApiResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ImportRestApiResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::ImportRestApiResponsePrivate
 * \brief The ImportRestApiResponsePrivate class provides private implementation for ImportRestApiResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a ImportRestApiResponsePrivate object with public implementation \a q.
 */
ImportRestApiResponsePrivate::ImportRestApiResponsePrivate(
    ImportRestApiResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway ImportRestApi response element from \a xml.
 */
void ImportRestApiResponsePrivate::parseImportRestApiResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ImportRestApiResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
