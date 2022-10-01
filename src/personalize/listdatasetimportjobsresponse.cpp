// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdatasetimportjobsresponse.h"
#include "listdatasetimportjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::ListDatasetImportJobsResponse
 * \brief The ListDatasetImportJobsResponse class provides an interace for Personalize ListDatasetImportJobs responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::listDatasetImportJobs
 */

/*!
 * Constructs a ListDatasetImportJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDatasetImportJobsResponse::ListDatasetImportJobsResponse(
        const ListDatasetImportJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new ListDatasetImportJobsResponsePrivate(this), parent)
{
    setRequest(new ListDatasetImportJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDatasetImportJobsRequest * ListDatasetImportJobsResponse::request() const
{
    Q_D(const ListDatasetImportJobsResponse);
    return static_cast<const ListDatasetImportJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Personalize ListDatasetImportJobs \a response.
 */
void ListDatasetImportJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDatasetImportJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::ListDatasetImportJobsResponsePrivate
 * \brief The ListDatasetImportJobsResponsePrivate class provides private implementation for ListDatasetImportJobsResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a ListDatasetImportJobsResponsePrivate object with public implementation \a q.
 */
ListDatasetImportJobsResponsePrivate::ListDatasetImportJobsResponsePrivate(
    ListDatasetImportJobsResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize ListDatasetImportJobs response element from \a xml.
 */
void ListDatasetImportJobsResponsePrivate::parseListDatasetImportJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDatasetImportJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws
