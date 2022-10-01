// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getclientcertificatesresponse.h"
#include "getclientcertificatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetClientCertificatesResponse
 * \brief The GetClientCertificatesResponse class provides an interace for ApiGateway GetClientCertificates responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getClientCertificates
 */

/*!
 * Constructs a GetClientCertificatesResponse object for \a reply to \a request, with parent \a parent.
 */
GetClientCertificatesResponse::GetClientCertificatesResponse(
        const GetClientCertificatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new GetClientCertificatesResponsePrivate(this), parent)
{
    setRequest(new GetClientCertificatesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetClientCertificatesRequest * GetClientCertificatesResponse::request() const
{
    Q_D(const GetClientCertificatesResponse);
    return static_cast<const GetClientCertificatesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway GetClientCertificates \a response.
 */
void GetClientCertificatesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetClientCertificatesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::GetClientCertificatesResponsePrivate
 * \brief The GetClientCertificatesResponsePrivate class provides private implementation for GetClientCertificatesResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetClientCertificatesResponsePrivate object with public implementation \a q.
 */
GetClientCertificatesResponsePrivate::GetClientCertificatesResponsePrivate(
    GetClientCertificatesResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway GetClientCertificates response element from \a xml.
 */
void GetClientCertificatesResponsePrivate::parseGetClientCertificatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetClientCertificatesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
