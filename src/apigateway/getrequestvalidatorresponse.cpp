// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getrequestvalidatorresponse.h"
#include "getrequestvalidatorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetRequestValidatorResponse
 * \brief The GetRequestValidatorResponse class provides an interace for ApiGateway GetRequestValidator responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getRequestValidator
 */

/*!
 * Constructs a GetRequestValidatorResponse object for \a reply to \a request, with parent \a parent.
 */
GetRequestValidatorResponse::GetRequestValidatorResponse(
        const GetRequestValidatorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new GetRequestValidatorResponsePrivate(this), parent)
{
    setRequest(new GetRequestValidatorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRequestValidatorRequest * GetRequestValidatorResponse::request() const
{
    Q_D(const GetRequestValidatorResponse);
    return static_cast<const GetRequestValidatorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway GetRequestValidator \a response.
 */
void GetRequestValidatorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRequestValidatorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::GetRequestValidatorResponsePrivate
 * \brief The GetRequestValidatorResponsePrivate class provides private implementation for GetRequestValidatorResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetRequestValidatorResponsePrivate object with public implementation \a q.
 */
GetRequestValidatorResponsePrivate::GetRequestValidatorResponsePrivate(
    GetRequestValidatorResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway GetRequestValidator response element from \a xml.
 */
void GetRequestValidatorResponsePrivate::parseGetRequestValidatorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRequestValidatorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
