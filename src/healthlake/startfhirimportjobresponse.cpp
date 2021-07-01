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

#include "startfhirimportjobresponse.h"
#include "startfhirimportjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace HealthLake {

/*!
 * \class QtAws::HealthLake::StartFHIRImportJobResponse
 * \brief The StartFHIRImportJobResponse class provides an interace for HealthLake StartFHIRImportJob responses.
 *
 * \inmodule QtAwsHealthLake
 *
 *  Amazon HealthLake is a HIPAA eligibile service that allows customers to store, transform, query, and analyze their
 *  FHIR-formatted data in a consistent fashion in the
 *
 * \sa HealthLakeClient::startFHIRImportJob
 */

/*!
 * Constructs a StartFHIRImportJobResponse object for \a reply to \a request, with parent \a parent.
 */
StartFHIRImportJobResponse::StartFHIRImportJobResponse(
        const StartFHIRImportJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : HealthLakeResponse(new StartFHIRImportJobResponsePrivate(this), parent)
{
    setRequest(new StartFHIRImportJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartFHIRImportJobRequest * StartFHIRImportJobResponse::request() const
{
    Q_D(const StartFHIRImportJobResponse);
    return static_cast<const StartFHIRImportJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful HealthLake StartFHIRImportJob \a response.
 */
void StartFHIRImportJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartFHIRImportJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::HealthLake::StartFHIRImportJobResponsePrivate
 * \brief The StartFHIRImportJobResponsePrivate class provides private implementation for StartFHIRImportJobResponse.
 * \internal
 *
 * \inmodule QtAwsHealthLake
 */

/*!
 * Constructs a StartFHIRImportJobResponsePrivate object with public implementation \a q.
 */
StartFHIRImportJobResponsePrivate::StartFHIRImportJobResponsePrivate(
    StartFHIRImportJobResponse * const q) : HealthLakeResponsePrivate(q)
{

}

/*!
 * Parses a HealthLake StartFHIRImportJob response element from \a xml.
 */
void StartFHIRImportJobResponsePrivate::parseStartFHIRImportJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartFHIRImportJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace HealthLake
} // namespace QtAws
