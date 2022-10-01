// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbasepathmappingresponse.h"
#include "getbasepathmappingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetBasePathMappingResponse
 * \brief The GetBasePathMappingResponse class provides an interace for ApiGateway GetBasePathMapping responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getBasePathMapping
 */

/*!
 * Constructs a GetBasePathMappingResponse object for \a reply to \a request, with parent \a parent.
 */
GetBasePathMappingResponse::GetBasePathMappingResponse(
        const GetBasePathMappingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new GetBasePathMappingResponsePrivate(this), parent)
{
    setRequest(new GetBasePathMappingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBasePathMappingRequest * GetBasePathMappingResponse::request() const
{
    Q_D(const GetBasePathMappingResponse);
    return static_cast<const GetBasePathMappingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway GetBasePathMapping \a response.
 */
void GetBasePathMappingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBasePathMappingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::GetBasePathMappingResponsePrivate
 * \brief The GetBasePathMappingResponsePrivate class provides private implementation for GetBasePathMappingResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetBasePathMappingResponsePrivate object with public implementation \a q.
 */
GetBasePathMappingResponsePrivate::GetBasePathMappingResponsePrivate(
    GetBasePathMappingResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway GetBasePathMapping response element from \a xml.
 */
void GetBasePathMappingResponsePrivate::parseGetBasePathMappingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBasePathMappingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
