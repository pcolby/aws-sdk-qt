// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describekeyphrasesdetectionjobresponse.h"
#include "describekeyphrasesdetectionjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::DescribeKeyPhrasesDetectionJobResponse
 * \brief The DescribeKeyPhrasesDetectionJobResponse class provides an interace for Comprehend DescribeKeyPhrasesDetectionJob responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::describeKeyPhrasesDetectionJob
 */

/*!
 * Constructs a DescribeKeyPhrasesDetectionJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeKeyPhrasesDetectionJobResponse::DescribeKeyPhrasesDetectionJobResponse(
        const DescribeKeyPhrasesDetectionJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new DescribeKeyPhrasesDetectionJobResponsePrivate(this), parent)
{
    setRequest(new DescribeKeyPhrasesDetectionJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeKeyPhrasesDetectionJobRequest * DescribeKeyPhrasesDetectionJobResponse::request() const
{
    Q_D(const DescribeKeyPhrasesDetectionJobResponse);
    return static_cast<const DescribeKeyPhrasesDetectionJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend DescribeKeyPhrasesDetectionJob \a response.
 */
void DescribeKeyPhrasesDetectionJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeKeyPhrasesDetectionJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::DescribeKeyPhrasesDetectionJobResponsePrivate
 * \brief The DescribeKeyPhrasesDetectionJobResponsePrivate class provides private implementation for DescribeKeyPhrasesDetectionJobResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a DescribeKeyPhrasesDetectionJobResponsePrivate object with public implementation \a q.
 */
DescribeKeyPhrasesDetectionJobResponsePrivate::DescribeKeyPhrasesDetectionJobResponsePrivate(
    DescribeKeyPhrasesDetectionJobResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend DescribeKeyPhrasesDetectionJob response element from \a xml.
 */
void DescribeKeyPhrasesDetectionJobResponsePrivate::parseDescribeKeyPhrasesDetectionJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeKeyPhrasesDetectionJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
