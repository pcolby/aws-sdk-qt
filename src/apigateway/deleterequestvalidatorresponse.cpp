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
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::DeleteRequestValidatorResponse
 * \brief The DeleteRequestValidatorResponse class provides an interace for ApiGateway DeleteRequestValidator responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::deleteRequestValidator
 */

/*!
 * Constructs a DeleteRequestValidatorResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteRequestValidatorResponse::DeleteRequestValidatorResponse(
        const DeleteRequestValidatorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new DeleteRequestValidatorResponsePrivate(this), parent)
{
    setRequest(new DeleteRequestValidatorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteRequestValidatorRequest * DeleteRequestValidatorResponse::request() const
{
    Q_D(const DeleteRequestValidatorResponse);
    return static_cast<const DeleteRequestValidatorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway DeleteRequestValidator \a response.
 */
void DeleteRequestValidatorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteRequestValidatorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::DeleteRequestValidatorResponsePrivate
 * \brief The DeleteRequestValidatorResponsePrivate class provides private implementation for DeleteRequestValidatorResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a DeleteRequestValidatorResponsePrivate object with public implementation \a q.
 */
DeleteRequestValidatorResponsePrivate::DeleteRequestValidatorResponsePrivate(
    DeleteRequestValidatorResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway DeleteRequestValidator response element from \a xml.
 */
void DeleteRequestValidatorResponsePrivate::parseDeleteRequestValidatorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRequestValidatorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
