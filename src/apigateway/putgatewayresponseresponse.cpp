// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putgatewayresponseresponse.h"
#include "putgatewayresponseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::PutGatewayResponseResponse
 * \brief The PutGatewayResponseResponse class provides an interace for ApiGateway PutGatewayResponse responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::putGatewayResponse
 */

/*!
 * Constructs a PutGatewayResponseResponse object for \a reply to \a request, with parent \a parent.
 */
PutGatewayResponseResponse::PutGatewayResponseResponse(
        const PutGatewayResponseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new PutGatewayResponseResponsePrivate(this), parent)
{
    setRequest(new PutGatewayResponseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutGatewayResponseRequest * PutGatewayResponseResponse::request() const
{
    Q_D(const PutGatewayResponseResponse);
    return static_cast<const PutGatewayResponseRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway PutGatewayResponse \a response.
 */
void PutGatewayResponseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutGatewayResponseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::PutGatewayResponseResponsePrivate
 * \brief The PutGatewayResponseResponsePrivate class provides private implementation for PutGatewayResponseResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a PutGatewayResponseResponsePrivate object with public implementation \a q.
 */
PutGatewayResponseResponsePrivate::PutGatewayResponseResponsePrivate(
    PutGatewayResponseResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway PutGatewayResponse response element from \a xml.
 */
void PutGatewayResponseResponsePrivate::parsePutGatewayResponseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutGatewayResponseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
