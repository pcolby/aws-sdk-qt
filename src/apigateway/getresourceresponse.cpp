// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getresourceresponse.h"
#include "getresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetResourceResponse
 * \brief The GetResourceResponse class provides an interace for ApiGateway GetResource responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getResource
 */

/*!
 * Constructs a GetResourceResponse object for \a reply to \a request, with parent \a parent.
 */
GetResourceResponse::GetResourceResponse(
        const GetResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new GetResourceResponsePrivate(this), parent)
{
    setRequest(new GetResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetResourceRequest * GetResourceResponse::request() const
{
    Q_D(const GetResourceResponse);
    return static_cast<const GetResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway GetResource \a response.
 */
void GetResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::GetResourceResponsePrivate
 * \brief The GetResourceResponsePrivate class provides private implementation for GetResourceResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetResourceResponsePrivate object with public implementation \a q.
 */
GetResourceResponsePrivate::GetResourceResponsePrivate(
    GetResourceResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway GetResource response element from \a xml.
 */
void GetResourceResponsePrivate::parseGetResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
