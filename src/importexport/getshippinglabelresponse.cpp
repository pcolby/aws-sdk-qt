/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getshippinglabelresponse.h"
#include "getshippinglabelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ImportExport {

/*!
 * \class QtAws::ImportExport::GetShippingLabelResponse
 * \brief The GetShippingLabelResponse class provides an interace for ImportExport GetShippingLabel responses.
 *
 * \inmodule QtAwsImportExport
 *
 *  <fullname>AWS Import/Export Service</fullname> AWS Import/Export accelerates transferring large amounts of data between
 *  the AWS cloud and portable storage devices that you mail to us. AWS Import/Export transfers data directly onto and off
 *  of your storage devices using Amazon's high-speed internal network and bypassing the Internet. For large data sets, AWS
 *
 * \sa ImportExportClient::getShippingLabel
 */

/*!
 * Constructs a GetShippingLabelResponse object for \a reply to \a request, with parent \a parent.
 */
GetShippingLabelResponse::GetShippingLabelResponse(
        const GetShippingLabelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ImportExportResponse(new GetShippingLabelResponsePrivate(this), parent)
{
    setRequest(new GetShippingLabelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetShippingLabelRequest * GetShippingLabelResponse::request() const
{
    Q_D(const GetShippingLabelResponse);
    return static_cast<const GetShippingLabelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ImportExport GetShippingLabel \a response.
 */
void GetShippingLabelResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetShippingLabelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ImportExport::GetShippingLabelResponsePrivate
 * \brief The GetShippingLabelResponsePrivate class provides private implementation for GetShippingLabelResponse.
 * \internal
 *
 * \inmodule QtAwsImportExport
 */

/*!
 * Constructs a GetShippingLabelResponsePrivate object with public implementation \a q.
 */
GetShippingLabelResponsePrivate::GetShippingLabelResponsePrivate(
    GetShippingLabelResponse * const q) : ImportExportResponsePrivate(q)
{

}

/*!
 * Parses a ImportExport GetShippingLabel response element from \a xml.
 */
void GetShippingLabelResponsePrivate::parseGetShippingLabelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetShippingLabelResponse"));
    /// @todo
}

} // namespace ImportExport
} // namespace QtAws
