// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putmethodresponse.h"
#include "putmethodresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::PutMethodResponse
 * \brief The PutMethodResponse class provides an interace for ApiGateway PutMethod responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::putMethod
 */

/*!
 * Constructs a PutMethodResponse object for \a reply to \a request, with parent \a parent.
 */
PutMethodResponse::PutMethodResponse(
        const PutMethodRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new PutMethodResponsePrivate(this), parent)
{
    setRequest(new PutMethodRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutMethodRequest * PutMethodResponse::request() const
{
    Q_D(const PutMethodResponse);
    return static_cast<const PutMethodRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway PutMethod \a response.
 */
void PutMethodResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutMethodResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::PutMethodResponsePrivate
 * \brief The PutMethodResponsePrivate class provides private implementation for PutMethodResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a PutMethodResponsePrivate object with public implementation \a q.
 */
PutMethodResponsePrivate::PutMethodResponsePrivate(
    PutMethodResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway PutMethod response element from \a xml.
 */
void PutMethodResponsePrivate::parsePutMethodResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutMethodResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
