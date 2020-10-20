/*
    Copyright 2013-2020 Paul Colby

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

#include "createapiresponse.h"
#include "createapiresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::CreateApiResponse
 * \brief The CreateApiResponse class provides an interace for ApiGatewayV2 CreateApi responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::createApi
 */

/*!
 * Constructs a CreateApiResponse object for \a reply to \a request, with parent \a parent.
 */
CreateApiResponse::CreateApiResponse(
        const CreateApiRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new CreateApiResponsePrivate(this), parent)
{
    setRequest(new CreateApiRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateApiRequest * CreateApiResponse::request() const
{
    Q_D(const CreateApiResponse);
    return static_cast<const CreateApiRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 CreateApi \a response.
 */
void CreateApiResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateApiResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::CreateApiResponsePrivate
 * \brief The CreateApiResponsePrivate class provides private implementation for CreateApiResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a CreateApiResponsePrivate object with public implementation \a q.
 */
CreateApiResponsePrivate::CreateApiResponsePrivate(
    CreateApiResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 CreateApi response element from \a xml.
 */
void CreateApiResponsePrivate::parseCreateApiResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateApiResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
