// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startkeyphrasesdetectionjobresponse.h"
#include "startkeyphrasesdetectionjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::StartKeyPhrasesDetectionJobResponse
 * \brief The StartKeyPhrasesDetectionJobResponse class provides an interace for Comprehend StartKeyPhrasesDetectionJob responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::startKeyPhrasesDetectionJob
 */

/*!
 * Constructs a StartKeyPhrasesDetectionJobResponse object for \a reply to \a request, with parent \a parent.
 */
StartKeyPhrasesDetectionJobResponse::StartKeyPhrasesDetectionJobResponse(
        const StartKeyPhrasesDetectionJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new StartKeyPhrasesDetectionJobResponsePrivate(this), parent)
{
    setRequest(new StartKeyPhrasesDetectionJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartKeyPhrasesDetectionJobRequest * StartKeyPhrasesDetectionJobResponse::request() const
{
    Q_D(const StartKeyPhrasesDetectionJobResponse);
    return static_cast<const StartKeyPhrasesDetectionJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend StartKeyPhrasesDetectionJob \a response.
 */
void StartKeyPhrasesDetectionJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartKeyPhrasesDetectionJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::StartKeyPhrasesDetectionJobResponsePrivate
 * \brief The StartKeyPhrasesDetectionJobResponsePrivate class provides private implementation for StartKeyPhrasesDetectionJobResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a StartKeyPhrasesDetectionJobResponsePrivate object with public implementation \a q.
 */
StartKeyPhrasesDetectionJobResponsePrivate::StartKeyPhrasesDetectionJobResponsePrivate(
    StartKeyPhrasesDetectionJobResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend StartKeyPhrasesDetectionJob response element from \a xml.
 */
void StartKeyPhrasesDetectionJobResponsePrivate::parseStartKeyPhrasesDetectionJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartKeyPhrasesDetectionJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
