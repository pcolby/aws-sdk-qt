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

#include "deleteusageplankeyresponse.h"
#include "deleteusageplankeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::DeleteUsagePlanKeyResponse
 * \brief The DeleteUsagePlanKeyResponse class provides an interace for APIGateway DeleteUsagePlanKey responses.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::deleteUsagePlanKey
 */

/*!
 * Constructs a DeleteUsagePlanKeyResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteUsagePlanKeyResponse::DeleteUsagePlanKeyResponse(
        const DeleteUsagePlanKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new DeleteUsagePlanKeyResponsePrivate(this), parent)
{
    setRequest(new DeleteUsagePlanKeyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteUsagePlanKeyRequest * DeleteUsagePlanKeyResponse::request() const
{
    Q_D(const DeleteUsagePlanKeyResponse);
    return static_cast<const DeleteUsagePlanKeyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful APIGateway DeleteUsagePlanKey \a response.
 */
void DeleteUsagePlanKeyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteUsagePlanKeyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::APIGateway::DeleteUsagePlanKeyResponsePrivate
 * \brief The DeleteUsagePlanKeyResponsePrivate class provides private implementation for DeleteUsagePlanKeyResponse.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a DeleteUsagePlanKeyResponsePrivate object with public implementation \a q.
 */
DeleteUsagePlanKeyResponsePrivate::DeleteUsagePlanKeyResponsePrivate(
    DeleteUsagePlanKeyResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * Parses a APIGateway DeleteUsagePlanKey response element from \a xml.
 */
void DeleteUsagePlanKeyResponsePrivate::parseDeleteUsagePlanKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteUsagePlanKeyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace APIGateway
} // namespace QtAws
