// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteauthorizerresponse.h"
#include "deleteauthorizerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::DeleteAuthorizerResponse
 * \brief The DeleteAuthorizerResponse class provides an interace for ApiGateway DeleteAuthorizer responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::deleteAuthorizer
 */

/*!
 * Constructs a DeleteAuthorizerResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAuthorizerResponse::DeleteAuthorizerResponse(
        const DeleteAuthorizerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new DeleteAuthorizerResponsePrivate(this), parent)
{
    setRequest(new DeleteAuthorizerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAuthorizerRequest * DeleteAuthorizerResponse::request() const
{
    Q_D(const DeleteAuthorizerResponse);
    return static_cast<const DeleteAuthorizerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway DeleteAuthorizer \a response.
 */
void DeleteAuthorizerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAuthorizerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::DeleteAuthorizerResponsePrivate
 * \brief The DeleteAuthorizerResponsePrivate class provides private implementation for DeleteAuthorizerResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a DeleteAuthorizerResponsePrivate object with public implementation \a q.
 */
DeleteAuthorizerResponsePrivate::DeleteAuthorizerResponsePrivate(
    DeleteAuthorizerResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway DeleteAuthorizer response element from \a xml.
 */
void DeleteAuthorizerResponsePrivate::parseDeleteAuthorizerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAuthorizerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
