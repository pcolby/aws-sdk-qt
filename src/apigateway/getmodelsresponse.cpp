// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmodelsresponse.h"
#include "getmodelsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetModelsResponse
 * \brief The GetModelsResponse class provides an interace for ApiGateway GetModels responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getModels
 */

/*!
 * Constructs a GetModelsResponse object for \a reply to \a request, with parent \a parent.
 */
GetModelsResponse::GetModelsResponse(
        const GetModelsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new GetModelsResponsePrivate(this), parent)
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
 * Parses a successful ApiGateway GetModels \a response.
 */
void GetModelsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetModelsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::GetModelsResponsePrivate
 * \brief The GetModelsResponsePrivate class provides private implementation for GetModelsResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetModelsResponsePrivate object with public implementation \a q.
 */
GetModelsResponsePrivate::GetModelsResponsePrivate(
    GetModelsResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway GetModels response element from \a xml.
 */
void GetModelsResponsePrivate::parseGetModelsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetModelsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
