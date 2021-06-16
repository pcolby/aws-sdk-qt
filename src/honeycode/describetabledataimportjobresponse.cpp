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

#include "describetabledataimportjobresponse.h"
#include "describetabledataimportjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Honeycode {

/*!
 * \class QtAws::Honeycode::DescribeTableDataImportJobResponse
 * \brief The DescribeTableDataImportJobResponse class provides an interace for Honeycode DescribeTableDataImportJob responses.
 *
 * \inmodule QtAwsHoneycode
 *
 *  Amazon Honeycode is a fully managed service that allows you to quickly build mobile and web apps for teams—without
 *  programming. Build Honeycode apps for managing almost anything, like projects, customers, operations, approvals,
 *  resources, and even your team.
 *
 * \sa HoneycodeClient::describeTableDataImportJob
 */

/*!
 * Constructs a DescribeTableDataImportJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeTableDataImportJobResponse::DescribeTableDataImportJobResponse(
        const DescribeTableDataImportJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : HoneycodeResponse(new DescribeTableDataImportJobResponsePrivate(this), parent)
{
    setRequest(new DescribeTableDataImportJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeTableDataImportJobRequest * DescribeTableDataImportJobResponse::request() const
{
    Q_D(const DescribeTableDataImportJobResponse);
    return static_cast<const DescribeTableDataImportJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Honeycode DescribeTableDataImportJob \a response.
 */
void DescribeTableDataImportJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeTableDataImportJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Honeycode::DescribeTableDataImportJobResponsePrivate
 * \brief The DescribeTableDataImportJobResponsePrivate class provides private implementation for DescribeTableDataImportJobResponse.
 * \internal
 *
 * \inmodule QtAwsHoneycode
 */

/*!
 * Constructs a DescribeTableDataImportJobResponsePrivate object with public implementation \a q.
 */
DescribeTableDataImportJobResponsePrivate::DescribeTableDataImportJobResponsePrivate(
    DescribeTableDataImportJobResponse * const q) : HoneycodeResponsePrivate(q)
{

}

/*!
 * Parses a Honeycode DescribeTableDataImportJob response element from \a xml.
 */
void DescribeTableDataImportJobResponsePrivate::parseDescribeTableDataImportJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTableDataImportJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Honeycode
} // namespace QtAws
