// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getstageresponse.h"
#include "getstageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetStageResponse
 * \brief The GetStageResponse class provides an interace for ApiGateway GetStage responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getStage
 */

/*!
 * Constructs a GetStageResponse object for \a reply to \a request, with parent \a parent.
 */
GetStageResponse::GetStageResponse(
        const GetStageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new GetStageResponsePrivate(this), parent)
{
    setRequest(new GetStageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetStageRequest * GetStageResponse::request() const
{
    Q_D(const GetStageResponse);
    return static_cast<const GetStageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway GetStage \a response.
 */
void GetStageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetStageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::GetStageResponsePrivate
 * \brief The GetStageResponsePrivate class provides private implementation for GetStageResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetStageResponsePrivate object with public implementation \a q.
 */
GetStageResponsePrivate::GetStageResponsePrivate(
    GetStageResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway GetStage response element from \a xml.
 */
void GetStageResponsePrivate::parseGetStageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetStageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
