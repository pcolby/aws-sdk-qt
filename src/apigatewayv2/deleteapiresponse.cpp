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

#include "deleteapiresponse.h"
#include "deleteapiresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::DeleteApiResponse
 * \brief The DeleteApiResponse class provides an interace for ApiGatewayV2 DeleteApi responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::deleteApi
 */

/*!
 * Constructs a DeleteApiResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteApiResponse::DeleteApiResponse(
        const DeleteApiRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new DeleteApiResponsePrivate(this), parent)
{
    setRequest(new DeleteApiRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteApiRequest * DeleteApiResponse::request() const
{
    Q_D(const DeleteApiResponse);
    return static_cast<const DeleteApiRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 DeleteApi \a response.
 */
void DeleteApiResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteApiResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::DeleteApiResponsePrivate
 * \brief The DeleteApiResponsePrivate class provides private implementation for DeleteApiResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a DeleteApiResponsePrivate object with public implementation \a q.
 */
DeleteApiResponsePrivate::DeleteApiResponsePrivate(
    DeleteApiResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 DeleteApi response element from \a xml.
 */
void DeleteApiResponsePrivate::parseDeleteApiResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteApiResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
