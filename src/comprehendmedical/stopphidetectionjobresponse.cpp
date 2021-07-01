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
 *  Amazon Comprehend Medical extracts structured information from unstructured clinical text. Use these actions to gain
 *  insight in your documents.
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
