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

#include "getexportresponse.h"
#include "getexportresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetExportResponse
 * \brief The GetExportResponse class provides an interace for ApiGateway GetExport responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getExport
 */

/*!
 * Constructs a GetExportResponse object for \a reply to \a request, with parent \a parent.
 */
GetExportResponse::GetExportResponse(
        const GetExportRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new GetExportResponsePrivate(this), parent)
{
    setRequest(new GetExportRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetExportRequest * GetExportResponse::request() const
{
    Q_D(const GetExportResponse);
    return static_cast<const GetExportRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway GetExport \a response.
 */
void GetExportResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetExportResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::GetExportResponsePrivate
 * \brief The GetExportResponsePrivate class provides private implementation for GetExportResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetExportResponsePrivate object with public implementation \a q.
 */
GetExportResponsePrivate::GetExportResponsePrivate(
    GetExportResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway GetExport response element from \a xml.
 */
void GetExportResponsePrivate::parseGetExportResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetExportResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
