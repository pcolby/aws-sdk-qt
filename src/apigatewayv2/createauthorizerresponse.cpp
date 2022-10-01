// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createauthorizerresponse.h"
#include "createauthorizerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::CreateAuthorizerResponse
 * \brief The CreateAuthorizerResponse class provides an interace for ApiGatewayV2 CreateAuthorizer responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::createAuthorizer
 */

/*!
 * Constructs a CreateAuthorizerResponse object for \a reply to \a request, with parent \a parent.
 */
CreateAuthorizerResponse::CreateAuthorizerResponse(
        const CreateAuthorizerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new CreateAuthorizerResponsePrivate(this), parent)
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
 * Parses a successful ApiGatewayV2 CreateAuthorizer \a response.
 */
void CreateAuthorizerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateAuthorizerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::CreateAuthorizerResponsePrivate
 * \brief The CreateAuthorizerResponsePrivate class provides private implementation for CreateAuthorizerResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a CreateAuthorizerResponsePrivate object with public implementation \a q.
 */
CreateAuthorizerResponsePrivate::CreateAuthorizerResponsePrivate(
    CreateAuthorizerResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 CreateAuthorizer response element from \a xml.
 */
void CreateAuthorizerResponsePrivate::parseCreateAuthorizerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAuthorizerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
