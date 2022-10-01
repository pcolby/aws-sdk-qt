// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listjobrunsresponse.h"
#include "listjobrunsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::ListJobRunsResponse
 * \brief The ListJobRunsResponse class provides an interace for DataBrew ListJobRuns responses.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::listJobRuns
 */

/*!
 * Constructs a ListJobRunsResponse object for \a reply to \a request, with parent \a parent.
 */
ListJobRunsResponse::ListJobRunsResponse(
        const ListJobRunsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataBrewResponse(new ListJobRunsResponsePrivate(this), parent)
{
    setRequest(new ListJobRunsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListJobRunsRequest * ListJobRunsResponse::request() const
{
    Q_D(const ListJobRunsResponse);
    return static_cast<const ListJobRunsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataBrew ListJobRuns \a response.
 */
void ListJobRunsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListJobRunsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataBrew::ListJobRunsResponsePrivate
 * \brief The ListJobRunsResponsePrivate class provides private implementation for ListJobRunsResponse.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a ListJobRunsResponsePrivate object with public implementation \a q.
 */
ListJobRunsResponsePrivate::ListJobRunsResponsePrivate(
    ListJobRunsResponse * const q) : DataBrewResponsePrivate(q)
{

}

/*!
 * Parses a DataBrew ListJobRuns response element from \a xml.
 */
void ListJobRunsResponsePrivate::parseListJobRunsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListJobRunsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataBrew
} // namespace QtAws
