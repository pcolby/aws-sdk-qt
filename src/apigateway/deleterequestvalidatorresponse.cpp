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

#include "deleterequestvalidatorresponse.h"
#include "deleterequestvalidatorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::DeleteRequestValidatorResponse
 * \brief The DeleteRequestValidatorResponse class provides an interace for APIGateway DeleteRequestValidator responses.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::deleteRequestValidator
 */

/*!
 * Constructs a DeleteRequestValidatorResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteRequestValidatorResponse::DeleteRequestValidatorResponse(
        const DeleteRequestValidatorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new DeleteRequestValidatorResponsePrivate(this), parent)
{
    setRequest(new DeleteRequestValidatorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteRequestValidatorRequest * DeleteRequestValidatorResponse::request() const
{
    return static_cast<const DeleteRequestValidatorRequest *>(APIGatewayResponse::request());
}

/*!
 * \reimp
 * Parses a successful APIGateway DeleteRequestValidator \a response.
 */
void DeleteRequestValidatorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteRequestValidatorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::APIGateway::DeleteRequestValidatorResponsePrivate
 * \brief The DeleteRequestValidatorResponsePrivate class provides private implementation for DeleteRequestValidatorResponse.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a DeleteRequestValidatorResponsePrivate object with public implementation \a q.
 */
DeleteRequestValidatorResponsePrivate::DeleteRequestValidatorResponsePrivate(
    DeleteRequestValidatorResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * Parses a APIGateway DeleteRequestValidator response element from \a xml.
 */
void DeleteRequestValidatorResponsePrivate::parseDeleteRequestValidatorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRequestValidatorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace APIGateway
} // namespace QtAws
