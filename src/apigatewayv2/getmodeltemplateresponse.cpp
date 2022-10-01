// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmodeltemplateresponse.h"
#include "getmodeltemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetModelTemplateResponse
 * \brief The GetModelTemplateResponse class provides an interace for ApiGatewayV2 GetModelTemplate responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getModelTemplate
 */

/*!
 * Constructs a GetModelTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
GetModelTemplateResponse::GetModelTemplateResponse(
        const GetModelTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new GetModelTemplateResponsePrivate(this), parent)
{
    setRequest(new GetModelTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetModelTemplateRequest * GetModelTemplateResponse::request() const
{
    Q_D(const GetModelTemplateResponse);
    return static_cast<const GetModelTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 GetModelTemplate \a response.
 */
void GetModelTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetModelTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::GetModelTemplateResponsePrivate
 * \brief The GetModelTemplateResponsePrivate class provides private implementation for GetModelTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetModelTemplateResponsePrivate object with public implementation \a q.
 */
GetModelTemplateResponsePrivate::GetModelTemplateResponsePrivate(
    GetModelTemplateResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 GetModelTemplate response element from \a xml.
 */
void GetModelTemplateResponsePrivate::parseGetModelTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetModelTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
