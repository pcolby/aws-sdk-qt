// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmethodresponseresponse.h"
#include "getmethodresponseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetMethodResponseResponse
 * \brief The GetMethodResponseResponse class provides an interace for ApiGateway GetMethodResponse responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getMethodResponse
 */

/*!
 * Constructs a GetMethodResponseResponse object for \a reply to \a request, with parent \a parent.
 */
GetMethodResponseResponse::GetMethodResponseResponse(
        const GetMethodResponseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new GetMethodResponseResponsePrivate(this), parent)
{
    setRequest(new GetMethodResponseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetMethodResponseRequest * GetMethodResponseResponse::request() const
{
    Q_D(const GetMethodResponseResponse);
    return static_cast<const GetMethodResponseRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway GetMethodResponse \a response.
 */
void GetMethodResponseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetMethodResponseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::GetMethodResponseResponsePrivate
 * \brief The GetMethodResponseResponsePrivate class provides private implementation for GetMethodResponseResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetMethodResponseResponsePrivate object with public implementation \a q.
 */
GetMethodResponseResponsePrivate::GetMethodResponseResponsePrivate(
    GetMethodResponseResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway GetMethodResponse response element from \a xml.
 */
void GetMethodResponseResponsePrivate::parseGetMethodResponseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMethodResponseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
