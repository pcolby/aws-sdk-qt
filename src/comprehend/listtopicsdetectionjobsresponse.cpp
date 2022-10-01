// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtopicsdetectionjobsresponse.h"
#include "listtopicsdetectionjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::ListTopicsDetectionJobsResponse
 * \brief The ListTopicsDetectionJobsResponse class provides an interace for Comprehend ListTopicsDetectionJobs responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::listTopicsDetectionJobs
 */

/*!
 * Constructs a ListTopicsDetectionJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListTopicsDetectionJobsResponse::ListTopicsDetectionJobsResponse(
        const ListTopicsDetectionJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new ListTopicsDetectionJobsResponsePrivate(this), parent)
{
    setRequest(new ListTopicsDetectionJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTopicsDetectionJobsRequest * ListTopicsDetectionJobsResponse::request() const
{
    Q_D(const ListTopicsDetectionJobsResponse);
    return static_cast<const ListTopicsDetectionJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend ListTopicsDetectionJobs \a response.
 */
void ListTopicsDetectionJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTopicsDetectionJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::ListTopicsDetectionJobsResponsePrivate
 * \brief The ListTopicsDetectionJobsResponsePrivate class provides private implementation for ListTopicsDetectionJobsResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a ListTopicsDetectionJobsResponsePrivate object with public implementation \a q.
 */
ListTopicsDetectionJobsResponsePrivate::ListTopicsDetectionJobsResponsePrivate(
    ListTopicsDetectionJobsResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend ListTopicsDetectionJobs response element from \a xml.
 */
void ListTopicsDetectionJobsResponsePrivate::parseListTopicsDetectionJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTopicsDetectionJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
