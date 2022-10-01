// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getapimappingresponse.h"
#include "getapimappingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetApiMappingResponse
 * \brief The GetApiMappingResponse class provides an interace for ApiGatewayV2 GetApiMapping responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getApiMapping
 */

/*!
 * Constructs a GetApiMappingResponse object for \a reply to \a request, with parent \a parent.
 */
GetApiMappingResponse::GetApiMappingResponse(
        const GetApiMappingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new GetApiMappingResponsePrivate(this), parent)
{
    setRequest(new GetApiMappingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetApiMappingRequest * GetApiMappingResponse::request() const
{
    Q_D(const GetApiMappingResponse);
    return static_cast<const GetApiMappingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 GetApiMapping \a response.
 */
void GetApiMappingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetApiMappingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::GetApiMappingResponsePrivate
 * \brief The GetApiMappingResponsePrivate class provides private implementation for GetApiMappingResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetApiMappingResponsePrivate object with public implementation \a q.
 */
GetApiMappingResponsePrivate::GetApiMappingResponsePrivate(
    GetApiMappingResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 GetApiMapping response element from \a xml.
 */
void GetApiMappingResponsePrivate::parseGetApiMappingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetApiMappingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
