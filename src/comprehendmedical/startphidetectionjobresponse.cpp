/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
