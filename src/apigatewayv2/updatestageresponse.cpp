/*
    Copyright 2013-2019 Paul Colby

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

#include "updatestageresponse.h"
#include "updatestageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::UpdateStageResponse
 * \brief The UpdateStageResponse class provides an interace for ApiGatewayV2 UpdateStage responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::updateStage
 */

/*!
 * Constructs a UpdateStageResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateStageResponse::UpdateStageResponse(
        const UpdateStageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new UpdateStageResponsePrivate(this), parent)
{
    setRequest(new UpdateStageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateStageRequest * UpdateStageResponse::request() const
{
    Q_D(const UpdateStageResponse);
    return static_cast<const UpdateStageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 UpdateStage \a response.
 */
void UpdateStageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateStageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::UpdateStageResponsePrivate
 * \brief The UpdateStageResponsePrivate class provides private implementation for UpdateStageResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a UpdateStageResponsePrivate object with public implementation \a q.
 */
UpdateStageResponsePrivate::UpdateStageResponsePrivate(
    UpdateStageResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 UpdateStage response element from \a xml.
 */
void UpdateStageResponsePrivate::parseUpdateStageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateStageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
