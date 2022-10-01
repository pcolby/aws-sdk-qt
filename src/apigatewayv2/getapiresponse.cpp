// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getapiresponse.h"
#include "getapiresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetApiResponse
 * \brief The GetApiResponse class provides an interace for ApiGatewayV2 GetApi responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getApi
 */

/*!
 * Constructs a GetApiResponse object for \a reply to \a request, with parent \a parent.
 */
GetApiResponse::GetApiResponse(
        const GetApiRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new GetApiResponsePrivate(this), parent)
{
    setRequest(new GetApiRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetApiRequest * GetApiResponse::request() const
{
    Q_D(const GetApiResponse);
    return static_cast<const GetApiRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 GetApi \a response.
 */
void GetApiResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetApiResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::GetApiResponsePrivate
 * \brief The GetApiResponsePrivate class provides private implementation for GetApiResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetApiResponsePrivate object with public implementation \a q.
 */
GetApiResponsePrivate::GetApiResponsePrivate(
    GetApiResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 GetApi response element from \a xml.
 */
void GetApiResponsePrivate::parseGetApiResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetApiResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
