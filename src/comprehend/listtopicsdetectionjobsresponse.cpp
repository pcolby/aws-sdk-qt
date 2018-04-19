/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

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
    Q_D(ListTopicsDetectionJobsResponse);
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
    /// @todo
}

} // namespace Comprehend
} // namespace QtAws
