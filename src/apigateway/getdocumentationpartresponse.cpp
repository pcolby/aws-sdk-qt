// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdocumentationpartresponse.h"
#include "getdocumentationpartresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetDocumentationPartResponse
 * \brief The GetDocumentationPartResponse class provides an interace for ApiGateway GetDocumentationPart responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getDocumentationPart
 */

/*!
 * Constructs a GetDocumentationPartResponse object for \a reply to \a request, with parent \a parent.
 */
GetDocumentationPartResponse::GetDocumentationPartResponse(
        const GetDocumentationPartRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new GetDocumentationPartResponsePrivate(this), parent)
{
    setRequest(new GetDocumentationPartRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDocumentationPartRequest * GetDocumentationPartResponse::request() const
{
    Q_D(const GetDocumentationPartResponse);
    return static_cast<const GetDocumentationPartRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway GetDocumentationPart \a response.
 */
void GetDocumentationPartResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDocumentationPartResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::GetDocumentationPartResponsePrivate
 * \brief The GetDocumentationPartResponsePrivate class provides private implementation for GetDocumentationPartResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetDocumentationPartResponsePrivate object with public implementation \a q.
 */
GetDocumentationPartResponsePrivate::GetDocumentationPartResponsePrivate(
    GetDocumentationPartResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway GetDocumentationPart response element from \a xml.
 */
void GetDocumentationPartResponsePrivate::parseGetDocumentationPartResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDocumentationPartResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
