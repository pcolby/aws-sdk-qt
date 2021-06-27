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

#include "updatemodelresponse.h"
#include "updatemodelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::UpdateModelResponse
 * \brief The UpdateModelResponse class provides an interace for APIGateway UpdateModel responses.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::updateModel
 */

/*!
 * Constructs a UpdateModelResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateModelResponse::UpdateModelResponse(
        const UpdateModelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new UpdateModelResponsePrivate(this), parent)
{
    setRequest(new UpdateModelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateModelRequest * UpdateModelResponse::request() const
{
    return static_cast<const UpdateModelRequest *>(APIGatewayResponse::request());
}

/*!
 * \reimp
 * Parses a successful APIGateway UpdateModel \a response.
 */
void UpdateModelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateModelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::APIGateway::UpdateModelResponsePrivate
 * \brief The UpdateModelResponsePrivate class provides private implementation for UpdateModelResponse.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a UpdateModelResponsePrivate object with public implementation \a q.
 */
UpdateModelResponsePrivate::UpdateModelResponsePrivate(
    UpdateModelResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * Parses a APIGateway UpdateModel response element from \a xml.
 */
void UpdateModelResponsePrivate::parseUpdateModelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateModelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace APIGateway
} // namespace QtAws
