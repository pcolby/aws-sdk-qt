// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putmethodresponseresponse.h"
#include "putmethodresponseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::PutMethodResponseResponse
 * \brief The PutMethodResponseResponse class provides an interace for ApiGateway PutMethodResponse responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::putMethodResponse
 */

/*!
 * Constructs a PutMethodResponseResponse object for \a reply to \a request, with parent \a parent.
 */
PutMethodResponseResponse::PutMethodResponseResponse(
        const PutMethodResponseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new PutMethodResponseResponsePrivate(this), parent)
{
    setRequest(new PutMethodResponseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutMethodResponseRequest * PutMethodResponseResponse::request() const
{
    Q_D(const PutMethodResponseResponse);
    return static_cast<const PutMethodResponseRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway PutMethodResponse \a response.
 */
void PutMethodResponseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutMethodResponseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::PutMethodResponseResponsePrivate
 * \brief The PutMethodResponseResponsePrivate class provides private implementation for PutMethodResponseResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a PutMethodResponseResponsePrivate object with public implementation \a q.
 */
PutMethodResponseResponsePrivate::PutMethodResponseResponsePrivate(
    PutMethodResponseResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway PutMethodResponse response element from \a xml.
 */
void PutMethodResponseResponsePrivate::parsePutMethodResponseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutMethodResponseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
