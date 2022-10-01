// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createauthorizerresponse.h"
#include "createauthorizerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::CreateAuthorizerResponse
 * \brief The CreateAuthorizerResponse class provides an interace for ApiGateway CreateAuthorizer responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::createAuthorizer
 */

/*!
 * Constructs a CreateAuthorizerResponse object for \a reply to \a request, with parent \a parent.
 */
CreateAuthorizerResponse::CreateAuthorizerResponse(
        const CreateAuthorizerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new CreateAuthorizerResponsePrivate(this), parent)
{
    setRequest(new CreateAuthorizerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateAuthorizerRequest * CreateAuthorizerResponse::request() const
{
    Q_D(const CreateAuthorizerResponse);
    return static_cast<const CreateAuthorizerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway CreateAuthorizer \a response.
 */
void CreateAuthorizerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateAuthorizerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::CreateAuthorizerResponsePrivate
 * \brief The CreateAuthorizerResponsePrivate class provides private implementation for CreateAuthorizerResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a CreateAuthorizerResponsePrivate object with public implementation \a q.
 */
CreateAuthorizerResponsePrivate::CreateAuthorizerResponsePrivate(
    CreateAuthorizerResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway CreateAuthorizer response element from \a xml.
 */
void CreateAuthorizerResponsePrivate::parseCreateAuthorizerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAuthorizerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
