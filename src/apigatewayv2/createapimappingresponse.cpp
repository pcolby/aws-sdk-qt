// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createapimappingresponse.h"
#include "createapimappingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::CreateApiMappingResponse
 * \brief The CreateApiMappingResponse class provides an interace for ApiGatewayV2 CreateApiMapping responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::createApiMapping
 */

/*!
 * Constructs a CreateApiMappingResponse object for \a reply to \a request, with parent \a parent.
 */
CreateApiMappingResponse::CreateApiMappingResponse(
        const CreateApiMappingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new CreateApiMappingResponsePrivate(this), parent)
{
    setRequest(new CreateApiMappingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateApiMappingRequest * CreateApiMappingResponse::request() const
{
    Q_D(const CreateApiMappingResponse);
    return static_cast<const CreateApiMappingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 CreateApiMapping \a response.
 */
void CreateApiMappingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateApiMappingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::CreateApiMappingResponsePrivate
 * \brief The CreateApiMappingResponsePrivate class provides private implementation for CreateApiMappingResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a CreateApiMappingResponsePrivate object with public implementation \a q.
 */
CreateApiMappingResponsePrivate::CreateApiMappingResponsePrivate(
    CreateApiMappingResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 CreateApiMapping response element from \a xml.
 */
void CreateApiMappingResponsePrivate::parseCreateApiMappingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateApiMappingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
