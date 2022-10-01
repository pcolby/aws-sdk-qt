// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopdominantlanguagedetectionjobresponse.h"
#include "stopdominantlanguagedetectionjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::StopDominantLanguageDetectionJobResponse
 * \brief The StopDominantLanguageDetectionJobResponse class provides an interace for Comprehend StopDominantLanguageDetectionJob responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::stopDominantLanguageDetectionJob
 */

/*!
 * Constructs a StopDominantLanguageDetectionJobResponse object for \a reply to \a request, with parent \a parent.
 */
StopDominantLanguageDetectionJobResponse::StopDominantLanguageDetectionJobResponse(
        const StopDominantLanguageDetectionJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new StopDominantLanguageDetectionJobResponsePrivate(this), parent)
{
    setRequest(new StopDominantLanguageDetectionJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopDominantLanguageDetectionJobRequest * StopDominantLanguageDetectionJobResponse::request() const
{
    Q_D(const StopDominantLanguageDetectionJobResponse);
    return static_cast<const StopDominantLanguageDetectionJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend StopDominantLanguageDetectionJob \a response.
 */
void StopDominantLanguageDetectionJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopDominantLanguageDetectionJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::StopDominantLanguageDetectionJobResponsePrivate
 * \brief The StopDominantLanguageDetectionJobResponsePrivate class provides private implementation for StopDominantLanguageDetectionJobResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a StopDominantLanguageDetectionJobResponsePrivate object with public implementation \a q.
 */
StopDominantLanguageDetectionJobResponsePrivate::StopDominantLanguageDetectionJobResponsePrivate(
    StopDominantLanguageDetectionJobResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend StopDominantLanguageDetectionJob response element from \a xml.
 */
void StopDominantLanguageDetectionJobResponsePrivate::parseStopDominantLanguageDetectionJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopDominantLanguageDetectionJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
