// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startphidetectionjobresponse.h"
#include "startphidetectionjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::StartPHIDetectionJobResponse
 * \brief The StartPHIDetectionJobResponse class provides an interace for ComprehendMedical StartPHIDetectionJob responses.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Comprehend Medical; extracts structured information from unstructured clinical text. Use these actions to gain insight
 *  in your documents.
 *
 * \sa ComprehendMedicalClient::startPHIDetectionJob
 */

/*!
 * Constructs a StartPHIDetectionJobResponse object for \a reply to \a request, with parent \a parent.
 */
StartPHIDetectionJobResponse::StartPHIDetectionJobResponse(
        const StartPHIDetectionJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendMedicalResponse(new StartPHIDetectionJobResponsePrivate(this), parent)
{
    setRequest(new StartPHIDetectionJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartPHIDetectionJobRequest * StartPHIDetectionJobResponse::request() const
{
    Q_D(const StartPHIDetectionJobResponse);
    return static_cast<const StartPHIDetectionJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ComprehendMedical StartPHIDetectionJob \a response.
 */
void StartPHIDetectionJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartPHIDetectionJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ComprehendMedical::StartPHIDetectionJobResponsePrivate
 * \brief The StartPHIDetectionJobResponsePrivate class provides private implementation for StartPHIDetectionJobResponse.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a StartPHIDetectionJobResponsePrivate object with public implementation \a q.
 */
StartPHIDetectionJobResponsePrivate::StartPHIDetectionJobResponsePrivate(
    StartPHIDetectionJobResponse * const q) : ComprehendMedicalResponsePrivate(q)
{

}

/*!
 * Parses a ComprehendMedical StartPHIDetectionJob response element from \a xml.
 */
void StartPHIDetectionJobResponsePrivate::parseStartPHIDetectionJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartPHIDetectionJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ComprehendMedical
} // namespace QtAws
