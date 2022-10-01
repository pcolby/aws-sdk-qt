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

#include "updateusageresponse.h"
#include "updateusageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::UpdateUsageResponse
 * \brief The UpdateUsageResponse class provides an interace for ApiGateway UpdateUsage responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::updateUsage
 */

/*!
 * Constructs a UpdateUsageResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateUsageResponse::UpdateUsageResponse(
        const UpdateUsageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new UpdateUsageResponsePrivate(this), parent)
{
    setRequest(new UpdateUsageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateUsageRequest * UpdateUsageResponse::request() const
{
    Q_D(const UpdateUsageResponse);
    return static_cast<const UpdateUsageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway UpdateUsage \a response.
 */
void UpdateUsageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateUsageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::UpdateUsageResponsePrivate
 * \brief The UpdateUsageResponsePrivate class provides private implementation for UpdateUsageResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a UpdateUsageResponsePrivate object with public implementation \a q.
 */
UpdateUsageResponsePrivate::UpdateUsageResponsePrivate(
    UpdateUsageResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway UpdateUsage response element from \a xml.
 */
void UpdateUsageResponsePrivate::parseUpdateUsageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateUsageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
