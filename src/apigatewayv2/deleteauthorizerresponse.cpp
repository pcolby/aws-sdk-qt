/*
    Copyright 2013-2020 Paul Colby

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

#include "deleteauthorizerresponse.h"
#include "deleteauthorizerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::DeleteAuthorizerResponse
 * \brief The DeleteAuthorizerResponse class provides an interace for ApiGatewayV2 DeleteAuthorizer responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::deleteAuthorizer
 */

/*!
 * Constructs a DeleteAuthorizerResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAuthorizerResponse::DeleteAuthorizerResponse(
        const DeleteAuthorizerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new DeleteAuthorizerResponsePrivate(this), parent)
{
    setRequest(new DeleteAuthorizerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAuthorizerRequest * DeleteAuthorizerResponse::request() const
{
    Q_D(const DeleteAuthorizerResponse);
    return static_cast<const DeleteAuthorizerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 DeleteAuthorizer \a response.
 */
void DeleteAuthorizerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAuthorizerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::DeleteAuthorizerResponsePrivate
 * \brief The DeleteAuthorizerResponsePrivate class provides private implementation for DeleteAuthorizerResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a DeleteAuthorizerResponsePrivate object with public implementation \a q.
 */
DeleteAuthorizerResponsePrivate::DeleteAuthorizerResponsePrivate(
    DeleteAuthorizerResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 DeleteAuthorizer response element from \a xml.
 */
void DeleteAuthorizerResponsePrivate::parseDeleteAuthorizerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAuthorizerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
