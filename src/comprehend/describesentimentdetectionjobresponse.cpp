// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describesentimentdetectionjobresponse.h"
#include "describesentimentdetectionjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::DescribeSentimentDetectionJobResponse
 * \brief The DescribeSentimentDetectionJobResponse class provides an interace for Comprehend DescribeSentimentDetectionJob responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::describeSentimentDetectionJob
 */

/*!
 * Constructs a DescribeSentimentDetectionJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeSentimentDetectionJobResponse::DescribeSentimentDetectionJobResponse(
        const DescribeSentimentDetectionJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new DescribeSentimentDetectionJobResponsePrivate(this), parent)
{
    setRequest(new DescribeSentimentDetectionJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeSentimentDetectionJobRequest * DescribeSentimentDetectionJobResponse::request() const
{
    Q_D(const DescribeSentimentDetectionJobResponse);
    return static_cast<const DescribeSentimentDetectionJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend DescribeSentimentDetectionJob \a response.
 */
void DescribeSentimentDetectionJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeSentimentDetectionJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::DescribeSentimentDetectionJobResponsePrivate
 * \brief The DescribeSentimentDetectionJobResponsePrivate class provides private implementation for DescribeSentimentDetectionJobResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a DescribeSentimentDetectionJobResponsePrivate object with public implementation \a q.
 */
DescribeSentimentDetectionJobResponsePrivate::DescribeSentimentDetectionJobResponsePrivate(
    DescribeSentimentDetectionJobResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend DescribeSentimentDetectionJob response element from \a xml.
 */
void DescribeSentimentDetectionJobResponsePrivate::parseDescribeSentimentDetectionJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSentimentDetectionJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
