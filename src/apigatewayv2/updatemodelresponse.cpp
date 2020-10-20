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

#include "updatemodelresponse.h"
#include "updatemodelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::UpdateModelResponse
 * \brief The UpdateModelResponse class provides an interace for ApiGatewayV2 UpdateModel responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::updateModel
 */

/*!
 * Constructs a UpdateModelResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateModelResponse::UpdateModelResponse(
        const UpdateModelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new UpdateModelResponsePrivate(this), parent)
{
    setRequest(new UpdateModelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateModelRequest * UpdateModelResponse::request() const
{
    Q_D(const UpdateModelResponse);
    return static_cast<const UpdateModelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 UpdateModel \a response.
 */
void UpdateModelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateModelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::UpdateModelResponsePrivate
 * \brief The UpdateModelResponsePrivate class provides private implementation for UpdateModelResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a UpdateModelResponsePrivate object with public implementation \a q.
 */
UpdateModelResponsePrivate::UpdateModelResponsePrivate(
    UpdateModelResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 UpdateModel response element from \a xml.
 */
void UpdateModelResponsePrivate::parseUpdateModelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateModelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
