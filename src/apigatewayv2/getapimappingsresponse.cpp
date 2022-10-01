// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getapimappingsresponse.h"
#include "getapimappingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetApiMappingsResponse
 * \brief The GetApiMappingsResponse class provides an interace for ApiGatewayV2 GetApiMappings responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getApiMappings
 */

/*!
 * Constructs a GetApiMappingsResponse object for \a reply to \a request, with parent \a parent.
 */
GetApiMappingsResponse::GetApiMappingsResponse(
        const GetApiMappingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new GetApiMappingsResponsePrivate(this), parent)
{
    setRequest(new GetApiMappingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetApiMappingsRequest * GetApiMappingsResponse::request() const
{
    Q_D(const GetApiMappingsResponse);
    return static_cast<const GetApiMappingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 GetApiMappings \a response.
 */
void GetApiMappingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetApiMappingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::GetApiMappingsResponsePrivate
 * \brief The GetApiMappingsResponsePrivate class provides private implementation for GetApiMappingsResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetApiMappingsResponsePrivate object with public implementation \a q.
 */
GetApiMappingsResponsePrivate::GetApiMappingsResponsePrivate(
    GetApiMappingsResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 GetApiMappings response element from \a xml.
 */
void GetApiMappingsResponsePrivate::parseGetApiMappingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetApiMappingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
