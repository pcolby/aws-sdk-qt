// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describejobresponse.h"
#include "describejobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::DescribeJobResponse
 * \brief The DescribeJobResponse class provides an interace for DataBrew DescribeJob responses.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::describeJob
 */

/*!
 * Constructs a DescribeJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeJobResponse::DescribeJobResponse(
        const DescribeJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataBrewResponse(new DescribeJobResponsePrivate(this), parent)
{
    setRequest(new DescribeJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeJobRequest * DescribeJobResponse::request() const
{
    Q_D(const DescribeJobResponse);
    return static_cast<const DescribeJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataBrew DescribeJob \a response.
 */
void DescribeJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataBrew::DescribeJobResponsePrivate
 * \brief The DescribeJobResponsePrivate class provides private implementation for DescribeJobResponse.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a DescribeJobResponsePrivate object with public implementation \a q.
 */
DescribeJobResponsePrivate::DescribeJobResponsePrivate(
    DescribeJobResponse * const q) : DataBrewResponsePrivate(q)
{

}

/*!
 * Parses a DataBrew DescribeJob response element from \a xml.
 */
void DescribeJobResponsePrivate::parseDescribeJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataBrew
} // namespace QtAws
