// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmodeltemplateresponse.h"
#include "getmodeltemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetModelTemplateResponse
 * \brief The GetModelTemplateResponse class provides an interace for ApiGateway GetModelTemplate responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getModelTemplate
 */

/*!
 * Constructs a GetModelTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
GetModelTemplateResponse::GetModelTemplateResponse(
        const GetModelTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new GetModelTemplateResponsePrivate(this), parent)
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
 * Parses a successful ApiGateway GetModelTemplate \a response.
 */
void GetModelTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetModelTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::GetModelTemplateResponsePrivate
 * \brief The GetModelTemplateResponsePrivate class provides private implementation for GetModelTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetModelTemplateResponsePrivate object with public implementation \a q.
 */
GetModelTemplateResponsePrivate::GetModelTemplateResponsePrivate(
    GetModelTemplateResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway GetModelTemplate response element from \a xml.
 */
void GetModelTemplateResponsePrivate::parseGetModelTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetModelTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
