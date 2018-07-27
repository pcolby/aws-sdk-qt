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

#include "getstatusresponse.h"
#include "getstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ImportExport {

/*!
 * \class QtAws::ImportExport::GetStatusResponse
 * \brief The GetStatusResponse class provides an interace for ImportExport GetStatus responses.
 *
 * \inmodule QtAwsImportExport
 *
 *  <fullname>AWS Import/Export Service</fullname> AWS Import/Export accelerates transferring large amounts of data between
 *  the AWS cloud and portable storage devices that you mail to us. AWS Import/Export transfers data directly onto and off
 *  of your storage devices using Amazon's high-speed internal network and bypassing the Internet. For large data sets, AWS
 *
 * \sa ImportExportClient::getStatus
 */

/*!
 * Constructs a GetStatusResponse object for \a reply to \a request, with parent \a parent.
 */
GetStatusResponse::GetStatusResponse(
        const GetStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ImportExportResponse(new GetStatusResponsePrivate(this), parent)
{
    setRequest(new GetStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetStatusRequest * GetStatusResponse::request() const
{
    Q_D(const GetStatusResponse);
    return static_cast<const GetStatusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ImportExport GetStatus \a response.
 */
void GetStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ImportExport::GetStatusResponsePrivate
 * \brief The GetStatusResponsePrivate class provides private implementation for GetStatusResponse.
 * \internal
 *
 * \inmodule QtAwsImportExport
 */

/*!
 * Constructs a GetStatusResponsePrivate object with public implementation \a q.
 */
GetStatusResponsePrivate::GetStatusResponsePrivate(
    GetStatusResponse * const q) : ImportExportResponsePrivate(q)
{

}

/*!
 * Parses a ImportExport GetStatus response element from \a xml.
 */
void GetStatusResponsePrivate::parseGetStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ImportExport
} // namespace QtAws
