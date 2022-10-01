// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdocumentationpartsresponse.h"
#include "getdocumentationpartsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetDocumentationPartsResponse
 * \brief The GetDocumentationPartsResponse class provides an interace for ApiGateway GetDocumentationParts responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getDocumentationParts
 */

/*!
 * Constructs a GetDocumentationPartsResponse object for \a reply to \a request, with parent \a parent.
 */
GetDocumentationPartsResponse::GetDocumentationPartsResponse(
        const GetDocumentationPartsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new GetDocumentationPartsResponsePrivate(this), parent)
{
    setRequest(new GetDocumentationPartsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDocumentationPartsRequest * GetDocumentationPartsResponse::request() const
{
    Q_D(const GetDocumentationPartsResponse);
    return static_cast<const GetDocumentationPartsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway GetDocumentationParts \a response.
 */
void GetDocumentationPartsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDocumentationPartsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::GetDocumentationPartsResponsePrivate
 * \brief The GetDocumentationPartsResponsePrivate class provides private implementation for GetDocumentationPartsResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetDocumentationPartsResponsePrivate object with public implementation \a q.
 */
GetDocumentationPartsResponsePrivate::GetDocumentationPartsResponsePrivate(
    GetDocumentationPartsResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway GetDocumentationParts response element from \a xml.
 */
void GetDocumentationPartsResponsePrivate::parseGetDocumentationPartsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDocumentationPartsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
