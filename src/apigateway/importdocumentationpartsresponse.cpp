// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "importdocumentationpartsresponse.h"
#include "importdocumentationpartsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::ImportDocumentationPartsResponse
 * \brief The ImportDocumentationPartsResponse class provides an interace for ApiGateway ImportDocumentationParts responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::importDocumentationParts
 */

/*!
 * Constructs a ImportDocumentationPartsResponse object for \a reply to \a request, with parent \a parent.
 */
ImportDocumentationPartsResponse::ImportDocumentationPartsResponse(
        const ImportDocumentationPartsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new ImportDocumentationPartsResponsePrivate(this), parent)
{
    setRequest(new ImportDocumentationPartsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ImportDocumentationPartsRequest * ImportDocumentationPartsResponse::request() const
{
    Q_D(const ImportDocumentationPartsResponse);
    return static_cast<const ImportDocumentationPartsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway ImportDocumentationParts \a response.
 */
void ImportDocumentationPartsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ImportDocumentationPartsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::ImportDocumentationPartsResponsePrivate
 * \brief The ImportDocumentationPartsResponsePrivate class provides private implementation for ImportDocumentationPartsResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a ImportDocumentationPartsResponsePrivate object with public implementation \a q.
 */
ImportDocumentationPartsResponsePrivate::ImportDocumentationPartsResponsePrivate(
    ImportDocumentationPartsResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway ImportDocumentationParts response element from \a xml.
 */
void ImportDocumentationPartsResponsePrivate::parseImportDocumentationPartsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ImportDocumentationPartsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
