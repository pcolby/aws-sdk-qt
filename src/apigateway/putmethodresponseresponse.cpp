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

#include "putmethodresponseresponse.h"
#include "putmethodresponseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::PutMethodResponseResponse
 * \brief The PutMethodResponseResponse class provides an interace for APIGateway PutMethodResponse responses.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::putMethodResponse
 */

/*!
 * Constructs a PutMethodResponseResponse object for \a reply to \a request, with parent \a parent.
 */
PutMethodResponseResponse::PutMethodResponseResponse(
        const PutMethodResponseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new PutMethodResponseResponsePrivate(this), parent)
{
    setRequest(new PutMethodResponseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutMethodResponseRequest * PutMethodResponseResponse::request() const
{
    Q_D(const PutMethodResponseResponse);
    return static_cast<const PutMethodResponseRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful APIGateway PutMethodResponse \a response.
 */
void PutMethodResponseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutMethodResponseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::APIGateway::PutMethodResponseResponsePrivate
 * \brief The PutMethodResponseResponsePrivate class provides private implementation for PutMethodResponseResponse.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a PutMethodResponseResponsePrivate object with public implementation \a q.
 */
PutMethodResponseResponsePrivate::PutMethodResponseResponsePrivate(
    PutMethodResponseResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * Parses a APIGateway PutMethodResponse response element from \a xml.
 */
void PutMethodResponseResponsePrivate::parsePutMethodResponseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutMethodResponseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace APIGateway
} // namespace QtAws
