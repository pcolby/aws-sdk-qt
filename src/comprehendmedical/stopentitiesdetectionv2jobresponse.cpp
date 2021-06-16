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

#include "stopentitiesdetectionv2jobresponse.h"
#include "stopentitiesdetectionv2jobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::StopEntitiesDetectionV2JobResponse
 * \brief The StopEntitiesDetectionV2JobResponse class provides an interace for ComprehendMedical StopEntitiesDetectionV2Job responses.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Amazon Comprehend Medical extracts structured information from unstructured clinical text. Use these actions to gain
 *  insight in your documents.
 *
 * \sa ComprehendMedicalClient::stopEntitiesDetectionV2Job
 */

/*!
 * Constructs a StopEntitiesDetectionV2JobResponse object for \a reply to \a request, with parent \a parent.
 */
StopEntitiesDetectionV2JobResponse::StopEntitiesDetectionV2JobResponse(
        const StopEntitiesDetectionV2JobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendMedicalResponse(new StopEntitiesDetectionV2JobResponsePrivate(this), parent)
{
    setRequest(new StopEntitiesDetectionV2JobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopEntitiesDetectionV2JobRequest * StopEntitiesDetectionV2JobResponse::request() const
{
    Q_D(const StopEntitiesDetectionV2JobResponse);
    return static_cast<const StopEntitiesDetectionV2JobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ComprehendMedical StopEntitiesDetectionV2Job \a response.
 */
void StopEntitiesDetectionV2JobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopEntitiesDetectionV2JobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ComprehendMedical::StopEntitiesDetectionV2JobResponsePrivate
 * \brief The StopEntitiesDetectionV2JobResponsePrivate class provides private implementation for StopEntitiesDetectionV2JobResponse.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a StopEntitiesDetectionV2JobResponsePrivate object with public implementation \a q.
 */
StopEntitiesDetectionV2JobResponsePrivate::StopEntitiesDetectionV2JobResponsePrivate(
    StopEntitiesDetectionV2JobResponse * const q) : ComprehendMedicalResponsePrivate(q)
{

}

/*!
 * Parses a ComprehendMedical StopEntitiesDetectionV2Job response element from \a xml.
 */
void StopEntitiesDetectionV2JobResponsePrivate::parseStopEntitiesDetectionV2JobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopEntitiesDetectionV2JobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ComprehendMedical
} // namespace QtAws
