// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedatasetresponse.h"
#include "describedatasetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::DescribeDatasetResponse
 * \brief The DescribeDatasetResponse class provides an interace for DataBrew DescribeDataset responses.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::describeDataset
 */

/*!
 * Constructs a DescribeDatasetResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDatasetResponse::DescribeDatasetResponse(
        const DescribeDatasetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataBrewResponse(new DescribeDatasetResponsePrivate(this), parent)
{
    setRequest(new DescribeDatasetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDatasetRequest * DescribeDatasetResponse::request() const
{
    Q_D(const DescribeDatasetResponse);
    return static_cast<const DescribeDatasetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataBrew DescribeDataset \a response.
 */
void DescribeDatasetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDatasetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataBrew::DescribeDatasetResponsePrivate
 * \brief The DescribeDatasetResponsePrivate class provides private implementation for DescribeDatasetResponse.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a DescribeDatasetResponsePrivate object with public implementation \a q.
 */
DescribeDatasetResponsePrivate::DescribeDatasetResponsePrivate(
    DescribeDatasetResponse * const q) : DataBrewResponsePrivate(q)
{

}

/*!
 * Parses a DataBrew DescribeDataset response element from \a xml.
 */
void DescribeDatasetResponsePrivate::parseDescribeDatasetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDatasetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataBrew
} // namespace QtAws
