// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopphidetectionjobresponse.h"
#include "stopphidetectionjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::StopPHIDetectionJobResponse
 * \brief The StopPHIDetectionJobResponse class provides an interace for ComprehendMedical StopPHIDetectionJob responses.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Comprehend Medical; extracts structured information from unstructured clinical text. Use these actions to gain insight
 *  in your documents.
 *
 * \sa ComprehendMedicalClient::stopPHIDetectionJob
 */

/*!
 * Constructs a StopPHIDetectionJobResponse object for \a reply to \a request, with parent \a parent.
 */
StopPHIDetectionJobResponse::StopPHIDetectionJobResponse(
        const StopPHIDetectionJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendMedicalResponse(new StopPHIDetectionJobResponsePrivate(this), parent)
{
    setRequest(new StopPHIDetectionJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopPHIDetectionJobRequest * StopPHIDetectionJobResponse::request() const
{
    Q_D(const StopPHIDetectionJobResponse);
    return static_cast<const StopPHIDetectionJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ComprehendMedical StopPHIDetectionJob \a response.
 */
void StopPHIDetectionJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopPHIDetectionJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ComprehendMedical::StopPHIDetectionJobResponsePrivate
 * \brief The StopPHIDetectionJobResponsePrivate class provides private implementation for StopPHIDetectionJobResponse.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a StopPHIDetectionJobResponsePrivate object with public implementation \a q.
 */
StopPHIDetectionJobResponsePrivate::StopPHIDetectionJobResponsePrivate(
    StopPHIDetectionJobResponse * const q) : ComprehendMedicalResponsePrivate(q)
{

}

/*!
 * Parses a ComprehendMedical StopPHIDetectionJob response element from \a xml.
 */
void StopPHIDetectionJobResponsePrivate::parseStopPHIDetectionJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopPHIDetectionJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ComprehendMedical
} // namespace QtAws
