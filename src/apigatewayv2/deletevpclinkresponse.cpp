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

#include "deletevpclinkresponse.h"
#include "deletevpclinkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::DeleteVpcLinkResponse
 * \brief The DeleteVpcLinkResponse class provides an interace for ApiGatewayV2 DeleteVpcLink responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::deleteVpcLink
 */

/*!
 * Constructs a DeleteVpcLinkResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteVpcLinkResponse::DeleteVpcLinkResponse(
        const DeleteVpcLinkRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new DeleteVpcLinkResponsePrivate(this), parent)
{
    setRequest(new DeleteVpcLinkRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteVpcLinkRequest * DeleteVpcLinkResponse::request() const
{
    Q_D(const DeleteVpcLinkResponse);
    return static_cast<const DeleteVpcLinkRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 DeleteVpcLink \a response.
 */
void DeleteVpcLinkResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteVpcLinkResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::DeleteVpcLinkResponsePrivate
 * \brief The DeleteVpcLinkResponsePrivate class provides private implementation for DeleteVpcLinkResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a DeleteVpcLinkResponsePrivate object with public implementation \a q.
 */
DeleteVpcLinkResponsePrivate::DeleteVpcLinkResponsePrivate(
    DeleteVpcLinkResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 DeleteVpcLink response element from \a xml.
 */
void DeleteVpcLinkResponsePrivate::parseDeleteVpcLinkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteVpcLinkResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
