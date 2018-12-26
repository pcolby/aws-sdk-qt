/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
