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

#include "getcatalogimportstatusresponse.h"
#include "getcatalogimportstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetCatalogImportStatusResponse
 * \brief The GetCatalogImportStatusResponse class provides an interace for Glue GetCatalogImportStatus responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getCatalogImportStatus
 */

/*!
 * Constructs a GetCatalogImportStatusResponse object for \a reply to \a request, with parent \a parent.
 */
GetCatalogImportStatusResponse::GetCatalogImportStatusResponse(
        const GetCatalogImportStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetCatalogImportStatusResponsePrivate(this), parent)
{
    setRequest(new GetCatalogImportStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCatalogImportStatusRequest * GetCatalogImportStatusResponse::request() const
{
    return static_cast<const GetCatalogImportStatusRequest *>(GlueResponse::request());
}

/*!
 * \reimp
 * Parses a successful Glue GetCatalogImportStatus \a response.
 */
void GetCatalogImportStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetCatalogImportStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetCatalogImportStatusResponsePrivate
 * \brief The GetCatalogImportStatusResponsePrivate class provides private implementation for GetCatalogImportStatusResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetCatalogImportStatusResponsePrivate object with public implementation \a q.
 */
GetCatalogImportStatusResponsePrivate::GetCatalogImportStatusResponsePrivate(
    GetCatalogImportStatusResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetCatalogImportStatus response element from \a xml.
 */
void GetCatalogImportStatusResponsePrivate::parseGetCatalogImportStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCatalogImportStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
