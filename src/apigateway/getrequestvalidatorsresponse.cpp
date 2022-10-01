// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getrequestvalidatorsresponse.h"
#include "getrequestvalidatorsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetRequestValidatorsResponse
 * \brief The GetRequestValidatorsResponse class provides an interace for ApiGateway GetRequestValidators responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getRequestValidators
 */

/*!
 * Constructs a GetRequestValidatorsResponse object for \a reply to \a request, with parent \a parent.
 */
GetRequestValidatorsResponse::GetRequestValidatorsResponse(
        const GetRequestValidatorsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new GetRequestValidatorsResponsePrivate(this), parent)
{
    setRequest(new GetRequestValidatorsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRequestValidatorsRequest * GetRequestValidatorsResponse::request() const
{
    Q_D(const GetRequestValidatorsResponse);
    return static_cast<const GetRequestValidatorsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway GetRequestValidators \a response.
 */
void GetRequestValidatorsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRequestValidatorsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::GetRequestValidatorsResponsePrivate
 * \brief The GetRequestValidatorsResponsePrivate class provides private implementation for GetRequestValidatorsResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetRequestValidatorsResponsePrivate object with public implementation \a q.
 */
GetRequestValidatorsResponsePrivate::GetRequestValidatorsResponsePrivate(
    GetRequestValidatorsResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway GetRequestValidators response element from \a xml.
 */
void GetRequestValidatorsResponsePrivate::parseGetRequestValidatorsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRequestValidatorsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
