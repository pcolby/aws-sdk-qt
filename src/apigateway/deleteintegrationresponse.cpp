// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteintegrationresponse.h"
#include "deleteintegrationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::DeleteIntegrationResponse
 * \brief The DeleteIntegrationResponse class provides an interace for ApiGateway DeleteIntegration responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::deleteIntegration
 */

/*!
 * Constructs a DeleteIntegrationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteIntegrationResponse::DeleteIntegrationResponse(
        const DeleteIntegrationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new DeleteIntegrationResponsePrivate(this), parent)
{
    setRequest(new DeleteIntegrationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteIntegrationRequest * DeleteIntegrationResponse::request() const
{
    Q_D(const DeleteIntegrationResponse);
    return static_cast<const DeleteIntegrationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway DeleteIntegration \a response.
 */
void DeleteIntegrationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteIntegrationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::DeleteIntegrationResponsePrivate
 * \brief The DeleteIntegrationResponsePrivate class provides private implementation for DeleteIntegrationResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a DeleteIntegrationResponsePrivate object with public implementation \a q.
 */
DeleteIntegrationResponsePrivate::DeleteIntegrationResponsePrivate(
    DeleteIntegrationResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway DeleteIntegration response element from \a xml.
 */
void DeleteIntegrationResponsePrivate::parseDeleteIntegrationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteIntegrationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
