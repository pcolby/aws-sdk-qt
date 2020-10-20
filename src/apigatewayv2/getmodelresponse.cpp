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

#include "getmodelresponse.h"
#include "getmodelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetModelResponse
 * \brief The GetModelResponse class provides an interace for ApiGatewayV2 GetModel responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getModel
 */

/*!
 * Constructs a GetModelResponse object for \a reply to \a request, with parent \a parent.
 */
GetModelResponse::GetModelResponse(
        const GetModelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new GetModelResponsePrivate(this), parent)
{
    setRequest(new GetModelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetModelRequest * GetModelResponse::request() const
{
    Q_D(const GetModelResponse);
    return static_cast<const GetModelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 GetModel \a response.
 */
void GetModelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetModelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::GetModelResponsePrivate
 * \brief The GetModelResponsePrivate class provides private implementation for GetModelResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetModelResponsePrivate object with public implementation \a q.
 */
GetModelResponsePrivate::GetModelResponsePrivate(
    GetModelResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 GetModel response element from \a xml.
 */
void GetModelResponsePrivate::parseGetModelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetModelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
