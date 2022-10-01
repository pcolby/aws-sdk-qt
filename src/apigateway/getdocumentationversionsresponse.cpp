// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdocumentationversionsresponse.h"
#include "getdocumentationversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetDocumentationVersionsResponse
 * \brief The GetDocumentationVersionsResponse class provides an interace for ApiGateway GetDocumentationVersions responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getDocumentationVersions
 */

/*!
 * Constructs a GetDocumentationVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
GetDocumentationVersionsResponse::GetDocumentationVersionsResponse(
        const GetDocumentationVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new GetDocumentationVersionsResponsePrivate(this), parent)
{
    setRequest(new GetDocumentationVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDocumentationVersionsRequest * GetDocumentationVersionsResponse::request() const
{
    Q_D(const GetDocumentationVersionsResponse);
    return static_cast<const GetDocumentationVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway GetDocumentationVersions \a response.
 */
void GetDocumentationVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDocumentationVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::GetDocumentationVersionsResponsePrivate
 * \brief The GetDocumentationVersionsResponsePrivate class provides private implementation for GetDocumentationVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetDocumentationVersionsResponsePrivate object with public implementation \a q.
 */
GetDocumentationVersionsResponsePrivate::GetDocumentationVersionsResponsePrivate(
    GetDocumentationVersionsResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway GetDocumentationVersions response element from \a xml.
 */
void GetDocumentationVersionsResponsePrivate::parseGetDocumentationVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDocumentationVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
