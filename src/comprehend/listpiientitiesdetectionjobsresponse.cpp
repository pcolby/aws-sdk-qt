// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listpiientitiesdetectionjobsresponse.h"
#include "listpiientitiesdetectionjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::ListPiiEntitiesDetectionJobsResponse
 * \brief The ListPiiEntitiesDetectionJobsResponse class provides an interace for Comprehend ListPiiEntitiesDetectionJobs responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::listPiiEntitiesDetectionJobs
 */

/*!
 * Constructs a ListPiiEntitiesDetectionJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListPiiEntitiesDetectionJobsResponse::ListPiiEntitiesDetectionJobsResponse(
        const ListPiiEntitiesDetectionJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new ListPiiEntitiesDetectionJobsResponsePrivate(this), parent)
{
    setRequest(new ListPiiEntitiesDetectionJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPiiEntitiesDetectionJobsRequest * ListPiiEntitiesDetectionJobsResponse::request() const
{
    Q_D(const ListPiiEntitiesDetectionJobsResponse);
    return static_cast<const ListPiiEntitiesDetectionJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend ListPiiEntitiesDetectionJobs \a response.
 */
void ListPiiEntitiesDetectionJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPiiEntitiesDetectionJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::ListPiiEntitiesDetectionJobsResponsePrivate
 * \brief The ListPiiEntitiesDetectionJobsResponsePrivate class provides private implementation for ListPiiEntitiesDetectionJobsResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a ListPiiEntitiesDetectionJobsResponsePrivate object with public implementation \a q.
 */
ListPiiEntitiesDetectionJobsResponsePrivate::ListPiiEntitiesDetectionJobsResponsePrivate(
    ListPiiEntitiesDetectionJobsResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend ListPiiEntitiesDetectionJobs response element from \a xml.
 */
void ListPiiEntitiesDetectionJobsResponsePrivate::parseListPiiEntitiesDetectionJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPiiEntitiesDetectionJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
