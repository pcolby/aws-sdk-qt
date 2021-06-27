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

#include "describedatasetexportjobresponse.h"
#include "describedatasetexportjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DescribeDatasetExportJobResponse
 * \brief The DescribeDatasetExportJobResponse class provides an interace for Personalize DescribeDatasetExportJob responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::describeDatasetExportJob
 */

/*!
 * Constructs a DescribeDatasetExportJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDatasetExportJobResponse::DescribeDatasetExportJobResponse(
        const DescribeDatasetExportJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new DescribeDatasetExportJobResponsePrivate(this), parent)
{
    setRequest(new DescribeDatasetExportJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDatasetExportJobRequest * DescribeDatasetExportJobResponse::request() const
{
    return static_cast<const DescribeDatasetExportJobRequest *>(PersonalizeResponse::request());
}

/*!
 * \reimp
 * Parses a successful Personalize DescribeDatasetExportJob \a response.
 */
void DescribeDatasetExportJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDatasetExportJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::DescribeDatasetExportJobResponsePrivate
 * \brief The DescribeDatasetExportJobResponsePrivate class provides private implementation for DescribeDatasetExportJobResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DescribeDatasetExportJobResponsePrivate object with public implementation \a q.
 */
DescribeDatasetExportJobResponsePrivate::DescribeDatasetExportJobResponsePrivate(
    DescribeDatasetExportJobResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize DescribeDatasetExportJob response element from \a xml.
 */
void DescribeDatasetExportJobResponsePrivate::parseDescribeDatasetExportJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDatasetExportJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws
