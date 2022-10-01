// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmodelresponse.h"
#include "getmodelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetModelResponse
 * \brief The GetModelResponse class provides an interace for ApiGateway GetModel responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getModel
 */

/*!
 * Constructs a GetModelResponse object for \a reply to \a request, with parent \a parent.
 */
GetModelResponse::GetModelResponse(
        const GetModelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new GetModelResponsePrivate(this), parent)
{
    setRequest(new GetModelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetModelRequest * GetModelResponse::request() const
{
    Q_D(const GetModelResponse);
    return static_cast<const GetModelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway GetModel \a response.
 */
void GetModelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetModelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::GetModelResponsePrivate
 * \brief The GetModelResponsePrivate class provides private implementation for GetModelResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetModelResponsePrivate object with public implementation \a q.
 */
GetModelResponsePrivate::GetModelResponsePrivate(
    GetModelResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway GetModel response element from \a xml.
 */
void GetModelResponsePrivate::parseGetModelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetModelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
