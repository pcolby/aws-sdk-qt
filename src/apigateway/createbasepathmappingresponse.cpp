// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createbasepathmappingresponse.h"
#include "createbasepathmappingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::CreateBasePathMappingResponse
 * \brief The CreateBasePathMappingResponse class provides an interace for ApiGateway CreateBasePathMapping responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::createBasePathMapping
 */

/*!
 * Constructs a CreateBasePathMappingResponse object for \a reply to \a request, with parent \a parent.
 */
CreateBasePathMappingResponse::CreateBasePathMappingResponse(
        const CreateBasePathMappingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new CreateBasePathMappingResponsePrivate(this), parent)
{
    setRequest(new CreateBasePathMappingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateBasePathMappingRequest * CreateBasePathMappingResponse::request() const
{
    Q_D(const CreateBasePathMappingResponse);
    return static_cast<const CreateBasePathMappingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway CreateBasePathMapping \a response.
 */
void CreateBasePathMappingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateBasePathMappingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::CreateBasePathMappingResponsePrivate
 * \brief The CreateBasePathMappingResponsePrivate class provides private implementation for CreateBasePathMappingResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a CreateBasePathMappingResponsePrivate object with public implementation \a q.
 */
CreateBasePathMappingResponsePrivate::CreateBasePathMappingResponsePrivate(
    CreateBasePathMappingResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway CreateBasePathMapping response element from \a xml.
 */
void CreateBasePathMappingResponsePrivate::parseCreateBasePathMappingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateBasePathMappingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
