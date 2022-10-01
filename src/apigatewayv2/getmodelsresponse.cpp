// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmodelsresponse.h"
#include "getmodelsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetModelsResponse
 * \brief The GetModelsResponse class provides an interace for ApiGatewayV2 GetModels responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getModels
 */

/*!
 * Constructs a GetModelsResponse object for \a reply to \a request, with parent \a parent.
 */
GetModelsResponse::GetModelsResponse(
        const GetModelsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new GetModelsResponsePrivate(this), parent)
{
    setRequest(new GetModelsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetModelsRequest * GetModelsResponse::request() const
{
    Q_D(const GetModelsResponse);
    return static_cast<const GetModelsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 GetModels \a response.
 */
void GetModelsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetModelsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::GetModelsResponsePrivate
 * \brief The GetModelsResponsePrivate class provides private implementation for GetModelsResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetModelsResponsePrivate object with public implementation \a q.
 */
GetModelsResponsePrivate::GetModelsResponsePrivate(
    GetModelsResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 GetModels response element from \a xml.
 */
void GetModelsResponsePrivate::parseGetModelsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetModelsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
