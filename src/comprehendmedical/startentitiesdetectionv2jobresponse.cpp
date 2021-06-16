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

#include "startentitiesdetectionv2jobresponse.h"
#include "startentitiesdetectionv2jobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::StartEntitiesDetectionV2JobResponse
 * \brief The StartEntitiesDetectionV2JobResponse class provides an interace for ComprehendMedical StartEntitiesDetectionV2Job responses.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Amazon Comprehend Medical extracts structured information from unstructured clinical text. Use these actions to gain
 *  insight in your documents.
 *
 * \sa ComprehendMedicalClient::startEntitiesDetectionV2Job
 */

/*!
 * Constructs a StartEntitiesDetectionV2JobResponse object for \a reply to \a request, with parent \a parent.
 */
StartEntitiesDetectionV2JobResponse::StartEntitiesDetectionV2JobResponse(
        const StartEntitiesDetectionV2JobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendMedicalResponse(new StartEntitiesDetectionV2JobResponsePrivate(this), parent)
{
    setRequest(new StartEntitiesDetectionV2JobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartEntitiesDetectionV2JobRequest * StartEntitiesDetectionV2JobResponse::request() const
{
    Q_D(const StartEntitiesDetectionV2JobResponse);
    return static_cast<const StartEntitiesDetectionV2JobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ComprehendMedical StartEntitiesDetectionV2Job \a response.
 */
void StartEntitiesDetectionV2JobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartEntitiesDetectionV2JobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ComprehendMedical::StartEntitiesDetectionV2JobResponsePrivate
 * \brief The StartEntitiesDetectionV2JobResponsePrivate class provides private implementation for StartEntitiesDetectionV2JobResponse.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a StartEntitiesDetectionV2JobResponsePrivate object with public implementation \a q.
 */
StartEntitiesDetectionV2JobResponsePrivate::StartEntitiesDetectionV2JobResponsePrivate(
    StartEntitiesDetectionV2JobResponse * const q) : ComprehendMedicalResponsePrivate(q)
{

}

/*!
 * Parses a ComprehendMedical StartEntitiesDetectionV2Job response element from \a xml.
 */
void StartEntitiesDetectionV2JobResponsePrivate::parseStartEntitiesDetectionV2JobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartEntitiesDetectionV2JobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ComprehendMedical
} // namespace QtAws
