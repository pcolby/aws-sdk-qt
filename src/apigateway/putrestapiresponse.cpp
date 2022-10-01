// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putrestapiresponse.h"
#include "putrestapiresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::PutRestApiResponse
 * \brief The PutRestApiResponse class provides an interace for ApiGateway PutRestApi responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::putRestApi
 */

/*!
 * Constructs a PutRestApiResponse object for \a reply to \a request, with parent \a parent.
 */
PutRestApiResponse::PutRestApiResponse(
        const PutRestApiRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new PutRestApiResponsePrivate(this), parent)
{
    setRequest(new PutRestApiRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutRestApiRequest * PutRestApiResponse::request() const
{
    Q_D(const PutRestApiResponse);
    return static_cast<const PutRestApiRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway PutRestApi \a response.
 */
void PutRestApiResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutRestApiResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::PutRestApiResponsePrivate
 * \brief The PutRestApiResponsePrivate class provides private implementation for PutRestApiResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a PutRestApiResponsePrivate object with public implementation \a q.
 */
PutRestApiResponsePrivate::PutRestApiResponsePrivate(
    PutRestApiResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway PutRestApi response element from \a xml.
 */
void PutRestApiResponsePrivate::parsePutRestApiResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutRestApiResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
