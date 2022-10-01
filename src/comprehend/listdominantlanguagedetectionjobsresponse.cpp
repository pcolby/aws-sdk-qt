// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdominantlanguagedetectionjobsresponse.h"
#include "listdominantlanguagedetectionjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::ListDominantLanguageDetectionJobsResponse
 * \brief The ListDominantLanguageDetectionJobsResponse class provides an interace for Comprehend ListDominantLanguageDetectionJobs responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::listDominantLanguageDetectionJobs
 */

/*!
 * Constructs a ListDominantLanguageDetectionJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDominantLanguageDetectionJobsResponse::ListDominantLanguageDetectionJobsResponse(
        const ListDominantLanguageDetectionJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new ListDominantLanguageDetectionJobsResponsePrivate(this), parent)
{
    setRequest(new ListDominantLanguageDetectionJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDominantLanguageDetectionJobsRequest * ListDominantLanguageDetectionJobsResponse::request() const
{
    Q_D(const ListDominantLanguageDetectionJobsResponse);
    return static_cast<const ListDominantLanguageDetectionJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend ListDominantLanguageDetectionJobs \a response.
 */
void ListDominantLanguageDetectionJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDominantLanguageDetectionJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::ListDominantLanguageDetectionJobsResponsePrivate
 * \brief The ListDominantLanguageDetectionJobsResponsePrivate class provides private implementation for ListDominantLanguageDetectionJobsResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a ListDominantLanguageDetectionJobsResponsePrivate object with public implementation \a q.
 */
ListDominantLanguageDetectionJobsResponsePrivate::ListDominantLanguageDetectionJobsResponsePrivate(
    ListDominantLanguageDetectionJobsResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend ListDominantLanguageDetectionJobs response element from \a xml.
 */
void ListDominantLanguageDetectionJobsResponsePrivate::parseListDominantLanguageDetectionJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDominantLanguageDetectionJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
