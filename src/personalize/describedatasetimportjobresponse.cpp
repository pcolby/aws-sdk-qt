/*
    Copyright 2013-2019 Paul Colby

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

#include "describedatasetimportjobresponse.h"
#include "describedatasetimportjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DescribeDatasetImportJobResponse
 * \brief The DescribeDatasetImportJobResponse class provides an interace for Personalize DescribeDatasetImportJob responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::describeDatasetImportJob
 */

/*!
 * Constructs a DescribeDatasetImportJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDatasetImportJobResponse::DescribeDatasetImportJobResponse(
        const DescribeDatasetImportJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new DescribeDatasetImportJobResponsePrivate(this), parent)
{
    setRequest(new DescribeDatasetImportJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDatasetImportJobRequest * DescribeDatasetImportJobResponse::request() const
{
    Q_D(const DescribeDatasetImportJobResponse);
    return static_cast<const DescribeDatasetImportJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Personalize DescribeDatasetImportJob \a response.
 */
void DescribeDatasetImportJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDatasetImportJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::DescribeDatasetImportJobResponsePrivate
 * \brief The DescribeDatasetImportJobResponsePrivate class provides private implementation for DescribeDatasetImportJobResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DescribeDatasetImportJobResponsePrivate object with public implementation \a q.
 */
DescribeDatasetImportJobResponsePrivate::DescribeDatasetImportJobResponsePrivate(
    DescribeDatasetImportJobResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize DescribeDatasetImportJob response element from \a xml.
 */
void DescribeDatasetImportJobResponsePrivate::parseDescribeDatasetImportJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDatasetImportJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws
