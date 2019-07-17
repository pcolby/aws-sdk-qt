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

#include "putrestapiresponse.h"
#include "putrestapiresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::PutRestApiResponse
 * \brief The PutRestApiResponse class provides an interace for APIGateway PutRestApi responses.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::putRestApi
 */

/*!
 * Constructs a PutRestApiResponse object for \a reply to \a request, with parent \a parent.
 */
PutRestApiResponse::PutRestApiResponse(
        const PutRestApiRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new PutRestApiResponsePrivate(this), parent)
{
    setRequest(new PutRestApiRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutRestApiRequest * PutRestApiResponse::request() const
{
    Q_D(const PutRestApiResponse);
    return static_cast<const PutRestApiRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful APIGateway PutRestApi \a response.
 */
void PutRestApiResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutRestApiResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::APIGateway::PutRestApiResponsePrivate
 * \brief The PutRestApiResponsePrivate class provides private implementation for PutRestApiResponse.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a PutRestApiResponsePrivate object with public implementation \a q.
 */
PutRestApiResponsePrivate::PutRestApiResponsePrivate(
    PutRestApiResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * Parses a APIGateway PutRestApi response element from \a xml.
 */
void PutRestApiResponsePrivate::parsePutRestApiResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutRestApiResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace APIGateway
} // namespace QtAws
