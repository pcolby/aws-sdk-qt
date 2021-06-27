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

#include "deletedomainnameresponse.h"
#include "deletedomainnameresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::DeleteDomainNameResponse
 * \brief The DeleteDomainNameResponse class provides an interace for ApiGatewayV2 DeleteDomainName responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::deleteDomainName
 */

/*!
 * Constructs a DeleteDomainNameResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDomainNameResponse::DeleteDomainNameResponse(
        const DeleteDomainNameRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new DeleteDomainNameResponsePrivate(this), parent)
{
    setRequest(new DeleteDomainNameRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDomainNameRequest * DeleteDomainNameResponse::request() const
{
    return static_cast<const DeleteDomainNameRequest *>(ApiGatewayV2Response::request());
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 DeleteDomainName \a response.
 */
void DeleteDomainNameResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDomainNameResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::DeleteDomainNameResponsePrivate
 * \brief The DeleteDomainNameResponsePrivate class provides private implementation for DeleteDomainNameResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a DeleteDomainNameResponsePrivate object with public implementation \a q.
 */
DeleteDomainNameResponsePrivate::DeleteDomainNameResponsePrivate(
    DeleteDomainNameResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 DeleteDomainName response element from \a xml.
 */
void DeleteDomainNameResponsePrivate::parseDeleteDomainNameResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDomainNameResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
