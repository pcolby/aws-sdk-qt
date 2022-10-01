// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbasepathmappingsresponse.h"
#include "getbasepathmappingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetBasePathMappingsResponse
 * \brief The GetBasePathMappingsResponse class provides an interace for ApiGateway GetBasePathMappings responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getBasePathMappings
 */

/*!
 * Constructs a GetBasePathMappingsResponse object for \a reply to \a request, with parent \a parent.
 */
GetBasePathMappingsResponse::GetBasePathMappingsResponse(
        const GetBasePathMappingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new GetBasePathMappingsResponsePrivate(this), parent)
{
    setRequest(new GetBasePathMappingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBasePathMappingsRequest * GetBasePathMappingsResponse::request() const
{
    Q_D(const GetBasePathMappingsResponse);
    return static_cast<const GetBasePathMappingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway GetBasePathMappings \a response.
 */
void GetBasePathMappingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBasePathMappingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::GetBasePathMappingsResponsePrivate
 * \brief The GetBasePathMappingsResponsePrivate class provides private implementation for GetBasePathMappingsResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetBasePathMappingsResponsePrivate object with public implementation \a q.
 */
GetBasePathMappingsResponsePrivate::GetBasePathMappingsResponsePrivate(
    GetBasePathMappingsResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway GetBasePathMappings response element from \a xml.
 */
void GetBasePathMappingsResponsePrivate::parseGetBasePathMappingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBasePathMappingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
