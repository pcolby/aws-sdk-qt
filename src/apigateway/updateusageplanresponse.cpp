/*
    Copyright 2013-2021 Paul Colby

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

#include "updateusageplanresponse.h"
#include "updateusageplanresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::UpdateUsagePlanResponse
 * \brief The UpdateUsagePlanResponse class provides an interace for ApiGateway UpdateUsagePlan responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::updateUsagePlan
 */

/*!
 * Constructs a UpdateUsagePlanResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateUsagePlanResponse::UpdateUsagePlanResponse(
        const UpdateUsagePlanRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new UpdateUsagePlanResponsePrivate(this), parent)
{
    setRequest(new UpdateUsagePlanRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateUsagePlanRequest * UpdateUsagePlanResponse::request() const
{
    Q_D(const UpdateUsagePlanResponse);
    return static_cast<const UpdateUsagePlanRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway UpdateUsagePlan \a response.
 */
void UpdateUsagePlanResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateUsagePlanResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::UpdateUsagePlanResponsePrivate
 * \brief The UpdateUsagePlanResponsePrivate class provides private implementation for UpdateUsagePlanResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a UpdateUsagePlanResponsePrivate object with public implementation \a q.
 */
UpdateUsagePlanResponsePrivate::UpdateUsagePlanResponsePrivate(
    UpdateUsagePlanResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway UpdateUsagePlan response element from \a xml.
 */
void UpdateUsagePlanResponsePrivate::parseUpdateUsagePlanResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateUsagePlanResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
