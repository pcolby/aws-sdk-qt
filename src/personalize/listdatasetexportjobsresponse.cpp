// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdatasetexportjobsresponse.h"
#include "listdatasetexportjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::ListDatasetExportJobsResponse
 * \brief The ListDatasetExportJobsResponse class provides an interace for Personalize ListDatasetExportJobs responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::listDatasetExportJobs
 */

/*!
 * Constructs a ListDatasetExportJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDatasetExportJobsResponse::ListDatasetExportJobsResponse(
        const ListDatasetExportJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new ListDatasetExportJobsResponsePrivate(this), parent)
{
    setRequest(new ListDatasetExportJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDatasetExportJobsRequest * ListDatasetExportJobsResponse::request() const
{
    Q_D(const ListDatasetExportJobsResponse);
    return static_cast<const ListDatasetExportJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Personalize ListDatasetExportJobs \a response.
 */
void ListDatasetExportJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDatasetExportJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::ListDatasetExportJobsResponsePrivate
 * \brief The ListDatasetExportJobsResponsePrivate class provides private implementation for ListDatasetExportJobsResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a ListDatasetExportJobsResponsePrivate object with public implementation \a q.
 */
ListDatasetExportJobsResponsePrivate::ListDatasetExportJobsResponsePrivate(
    ListDatasetExportJobsResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize ListDatasetExportJobs response element from \a xml.
 */
void ListDatasetExportJobsResponsePrivate::parseListDatasetExportJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDatasetExportJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws
