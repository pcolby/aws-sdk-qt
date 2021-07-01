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

#include "startfhirexportjobresponse.h"
#include "startfhirexportjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace HealthLake {

/*!
 * \class QtAws::HealthLake::StartFHIRExportJobResponse
 * \brief The StartFHIRExportJobResponse class provides an interace for HealthLake StartFHIRExportJob responses.
 *
 * \inmodule QtAwsHealthLake
 *
 *  Amazon HealthLake is a HIPAA eligibile service that allows customers to store, transform, query, and analyze their
 *  FHIR-formatted data in a consistent fashion in the
 *
 * \sa HealthLakeClient::startFHIRExportJob
 */

/*!
 * Constructs a StartFHIRExportJobResponse object for \a reply to \a request, with parent \a parent.
 */
StartFHIRExportJobResponse::StartFHIRExportJobResponse(
        const StartFHIRExportJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : HealthLakeResponse(new StartFHIRExportJobResponsePrivate(this), parent)
{
    setRequest(new StartFHIRExportJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartFHIRExportJobRequest * StartFHIRExportJobResponse::request() const
{
    Q_D(const StartFHIRExportJobResponse);
    return static_cast<const StartFHIRExportJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful HealthLake StartFHIRExportJob \a response.
 */
void StartFHIRExportJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartFHIRExportJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::HealthLake::StartFHIRExportJobResponsePrivate
 * \brief The StartFHIRExportJobResponsePrivate class provides private implementation for StartFHIRExportJobResponse.
 * \internal
 *
 * \inmodule QtAwsHealthLake
 */

/*!
 * Constructs a StartFHIRExportJobResponsePrivate object with public implementation \a q.
 */
StartFHIRExportJobResponsePrivate::StartFHIRExportJobResponsePrivate(
    StartFHIRExportJobResponse * const q) : HealthLakeResponsePrivate(q)
{

}

/*!
 * Parses a HealthLake StartFHIRExportJob response element from \a xml.
 */
void StartFHIRExportJobResponsePrivate::parseStartFHIRExportJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartFHIRExportJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace HealthLake
} // namespace QtAws
