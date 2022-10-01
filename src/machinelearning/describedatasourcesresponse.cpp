// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_UNUSED(xml) ///< @todo
}

} // namespace MachineLearning
} // namespace QtAws
