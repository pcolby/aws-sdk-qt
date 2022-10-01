// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdocumentationversionresponse.h"
#include "getdocumentationversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetDocumentationVersionResponse
 * \brief The GetDocumentationVersionResponse class provides an interace for ApiGateway GetDocumentationVersion responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getDocumentationVersion
 */

/*!
 * Constructs a GetDocumentationVersionResponse object for \a reply to \a request, with parent \a parent.
 */
GetDocumentationVersionResponse::GetDocumentationVersionResponse(
        const GetDocumentationVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new GetDocumentationVersionResponsePrivate(this), parent)
{
    setRequest(new GetDocumentationVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDocumentationVersionRequest * GetDocumentationVersionResponse::request() const
{
    Q_D(const GetDocumentationVersionResponse);
    return static_cast<const GetDocumentationVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway GetDocumentationVersion \a response.
 */
void GetDocumentationVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDocumentationVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::GetDocumentationVersionResponsePrivate
 * \brief The GetDocumentationVersionResponsePrivate class provides private implementation for GetDocumentationVersionResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetDocumentationVersionResponsePrivate object with public implementation \a q.
 */
GetDocumentationVersionResponsePrivate::GetDocumentationVersionResponsePrivate(
    GetDocumentationVersionResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway GetDocumentationVersion response element from \a xml.
 */
void GetDocumentationVersionResponsePrivate::parseGetDocumentationVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDocumentationVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
