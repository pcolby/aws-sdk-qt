// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startdominantlanguagedetectionjobresponse.h"
#include "startdominantlanguagedetectionjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::StartDominantLanguageDetectionJobResponse
 * \brief The StartDominantLanguageDetectionJobResponse class provides an interace for Comprehend StartDominantLanguageDetectionJob responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::startDominantLanguageDetectionJob
 */

/*!
 * Constructs a StartDominantLanguageDetectionJobResponse object for \a reply to \a request, with parent \a parent.
 */
StartDominantLanguageDetectionJobResponse::StartDominantLanguageDetectionJobResponse(
        const StartDominantLanguageDetectionJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new StartDominantLanguageDetectionJobResponsePrivate(this), parent)
{
    setRequest(new StartDominantLanguageDetectionJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartDominantLanguageDetectionJobRequest * StartDominantLanguageDetectionJobResponse::request() const
{
    Q_D(const StartDominantLanguageDetectionJobResponse);
    return static_cast<const StartDominantLanguageDetectionJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend StartDominantLanguageDetectionJob \a response.
 */
void StartDominantLanguageDetectionJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartDominantLanguageDetectionJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::StartDominantLanguageDetectionJobResponsePrivate
 * \brief The StartDominantLanguageDetectionJobResponsePrivate class provides private implementation for StartDominantLanguageDetectionJobResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a StartDominantLanguageDetectionJobResponsePrivate object with public implementation \a q.
 */
StartDominantLanguageDetectionJobResponsePrivate::StartDominantLanguageDetectionJobResponsePrivate(
    StartDominantLanguageDetectionJobResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend StartDominantLanguageDetectionJob response element from \a xml.
 */
void StartDominantLanguageDetectionJobResponsePrivate::parseStartDominantLanguageDetectionJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartDominantLanguageDetectionJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
