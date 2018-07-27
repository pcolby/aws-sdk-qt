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

#include "updaterequestvalidatorresponse.h"
#include "updaterequestvalidatorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::UpdateRequestValidatorResponse
 * \brief The UpdateRequestValidatorResponse class provides an interace for APIGateway UpdateRequestValidator responses.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::updateRequestValidator
 */

/*!
 * Constructs a UpdateRequestValidatorResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateRequestValidatorResponse::UpdateRequestValidatorResponse(
        const UpdateRequestValidatorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new UpdateRequestValidatorResponsePrivate(this), parent)
{
    setRequest(new UpdateRequestValidatorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateRequestValidatorRequest * UpdateRequestValidatorResponse::request() const
{
    Q_D(const UpdateRequestValidatorResponse);
    return static_cast<const UpdateRequestValidatorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful APIGateway UpdateRequestValidator \a response.
 */
void UpdateRequestValidatorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateRequestValidatorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::APIGateway::UpdateRequestValidatorResponsePrivate
 * \brief The UpdateRequestValidatorResponsePrivate class provides private implementation for UpdateRequestValidatorResponse.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a UpdateRequestValidatorResponsePrivate object with public implementation \a q.
 */
UpdateRequestValidatorResponsePrivate::UpdateRequestValidatorResponsePrivate(
    UpdateRequestValidatorResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * Parses a APIGateway UpdateRequestValidator response element from \a xml.
 */
void UpdateRequestValidatorResponsePrivate::parseUpdateRequestValidatorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateRequestValidatorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace APIGateway
} // namespace QtAws
