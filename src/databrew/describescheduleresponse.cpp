// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describescheduleresponse.h"
#include "describescheduleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::DescribeScheduleResponse
 * \brief The DescribeScheduleResponse class provides an interace for DataBrew DescribeSchedule responses.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::describeSchedule
 */

/*!
 * Constructs a DescribeScheduleResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeScheduleResponse::DescribeScheduleResponse(
        const DescribeScheduleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataBrewResponse(new DescribeScheduleResponsePrivate(this), parent)
{
    setRequest(new DescribeScheduleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeScheduleRequest * DescribeScheduleResponse::request() const
{
    Q_D(const DescribeScheduleResponse);
    return static_cast<const DescribeScheduleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataBrew DescribeSchedule \a response.
 */
void DescribeScheduleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeScheduleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataBrew::DescribeScheduleResponsePrivate
 * \brief The DescribeScheduleResponsePrivate class provides private implementation for DescribeScheduleResponse.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a DescribeScheduleResponsePrivate object with public implementation \a q.
 */
DescribeScheduleResponsePrivate::DescribeScheduleResponsePrivate(
    DescribeScheduleResponse * const q) : DataBrewResponsePrivate(q)
{

}

/*!
 * Parses a DataBrew DescribeSchedule response element from \a xml.
 */
void DescribeScheduleResponsePrivate::parseDescribeScheduleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeScheduleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataBrew
} // namespace QtAws
