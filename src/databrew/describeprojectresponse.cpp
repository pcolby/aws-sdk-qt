// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeprojectresponse.h"
#include "describeprojectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::DescribeProjectResponse
 * \brief The DescribeProjectResponse class provides an interace for DataBrew DescribeProject responses.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::describeProject
 */

/*!
 * Constructs a DescribeProjectResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeProjectResponse::DescribeProjectResponse(
        const DescribeProjectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataBrewResponse(new DescribeProjectResponsePrivate(this), parent)
{
    setRequest(new DescribeProjectRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeProjectRequest * DescribeProjectResponse::request() const
{
    Q_D(const DescribeProjectResponse);
    return static_cast<const DescribeProjectRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataBrew DescribeProject \a response.
 */
void DescribeProjectResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeProjectResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataBrew::DescribeProjectResponsePrivate
 * \brief The DescribeProjectResponsePrivate class provides private implementation for DescribeProjectResponse.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a DescribeProjectResponsePrivate object with public implementation \a q.
 */
DescribeProjectResponsePrivate::DescribeProjectResponsePrivate(
    DescribeProjectResponse * const q) : DataBrewResponsePrivate(q)
{

}

/*!
 * Parses a DataBrew DescribeProject response element from \a xml.
 */
void DescribeProjectResponsePrivate::parseDescribeProjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeProjectResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataBrew
} // namespace QtAws
