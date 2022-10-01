// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listentitiesdetectionjobsresponse.h"
#include "listentitiesdetectionjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::ListEntitiesDetectionJobsResponse
 * \brief The ListEntitiesDetectionJobsResponse class provides an interace for Comprehend ListEntitiesDetectionJobs responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::listEntitiesDetectionJobs
 */

/*!
 * Constructs a ListEntitiesDetectionJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListEntitiesDetectionJobsResponse::ListEntitiesDetectionJobsResponse(
        const ListEntitiesDetectionJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new ListEntitiesDetectionJobsResponsePrivate(this), parent)
{
    setRequest(new ListEntitiesDetectionJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListEntitiesDetectionJobsRequest * ListEntitiesDetectionJobsResponse::request() const
{
    Q_D(const ListEntitiesDetectionJobsResponse);
    return static_cast<const ListEntitiesDetectionJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend ListEntitiesDetectionJobs \a response.
 */
void ListEntitiesDetectionJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListEntitiesDetectionJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::ListEntitiesDetectionJobsResponsePrivate
 * \brief The ListEntitiesDetectionJobsResponsePrivate class provides private implementation for ListEntitiesDetectionJobsResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a ListEntitiesDetectionJobsResponsePrivate object with public implementation \a q.
 */
ListEntitiesDetectionJobsResponsePrivate::ListEntitiesDetectionJobsResponsePrivate(
    ListEntitiesDetectionJobsResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend ListEntitiesDetectionJobs response element from \a xml.
 */
void ListEntitiesDetectionJobsResponsePrivate::parseListEntitiesDetectionJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListEntitiesDetectionJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
