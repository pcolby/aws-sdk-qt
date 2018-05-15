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

#include "describedatasourcesresponse.h"
#include "describedatasourcesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::DescribeDataSourcesResponse
 * \brief The DescribeDataSourcesResponse class provides an interace for MachineLearning DescribeDataSources responses.
 *
 * \inmodule QtAwsMachineLearning
 *
 *
 * \sa MachineLearningClient::describeDataSources
 */

/*!
 * Constructs a DescribeDataSourcesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDataSourcesResponse::DescribeDataSourcesResponse(
        const DescribeDataSourcesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MachineLearningResponse(new DescribeDataSourcesResponsePrivate(this), parent)
{
    setRequest(new DescribeDataSourcesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDataSourcesRequest * DescribeDataSourcesResponse::request() const
{
    Q_D(const DescribeDataSourcesResponse);
    return static_cast<const DescribeDataSourcesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MachineLearning DescribeDataSources \a response.
 */
void DescribeDataSourcesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDataSourcesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MachineLearning::DescribeDataSourcesResponsePrivate
 * \brief The DescribeDataSourcesResponsePrivate class provides private implementation for DescribeDataSourcesResponse.
 * \internal
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 * Constructs a DescribeDataSourcesResponsePrivate object with public implementation \a q.
 */
DescribeDataSourcesResponsePrivate::DescribeDataSourcesResponsePrivate(
    DescribeDataSourcesResponse * const q) : MachineLearningResponsePrivate(q)
{

}

/*!
 * Parses a MachineLearning DescribeDataSources response element from \a xml.
 */
void DescribeDataSourcesResponsePrivate::parseDescribeDataSourcesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDataSourcesResponse"));
    /// @todo
}

} // namespace MachineLearning
} // namespace QtAws
