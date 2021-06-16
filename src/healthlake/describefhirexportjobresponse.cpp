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

#include "describefhirexportjobresponse.h"
#include "describefhirexportjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace HealthLake {

/*!
 * \class QtAws::HealthLake::DescribeFHIRExportJobResponse
 * \brief The DescribeFHIRExportJobResponse class provides an interace for HealthLake DescribeFHIRExportJob responses.
 *
 * \inmodule QtAwsHealthLake
 *
 *  Amazon HealthLake is a HIPAA eligibile service that allows customers to store, transform, query, and analyze their
 *  FHIR-formatted data in a consistent fashion in the
 *
 * \sa HealthLakeClient::describeFHIRExportJob
 */

/*!
 * Constructs a DescribeFHIRExportJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeFHIRExportJobResponse::DescribeFHIRExportJobResponse(
        const DescribeFHIRExportJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : HealthLakeResponse(new DescribeFHIRExportJobResponsePrivate(this), parent)
{
    setRequest(new DescribeFHIRExportJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeFHIRExportJobRequest * DescribeFHIRExportJobResponse::request() const
{
    Q_D(const DescribeFHIRExportJobResponse);
    return static_cast<const DescribeFHIRExportJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful HealthLake DescribeFHIRExportJob \a response.
 */
void DescribeFHIRExportJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeFHIRExportJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::HealthLake::DescribeFHIRExportJobResponsePrivate
 * \brief The DescribeFHIRExportJobResponsePrivate class provides private implementation for DescribeFHIRExportJobResponse.
 * \internal
 *
 * \inmodule QtAwsHealthLake
 */

/*!
 * Constructs a DescribeFHIRExportJobResponsePrivate object with public implementation \a q.
 */
DescribeFHIRExportJobResponsePrivate::DescribeFHIRExportJobResponsePrivate(
    DescribeFHIRExportJobResponse * const q) : HealthLakeResponsePrivate(q)
{

}

/*!
 * Parses a HealthLake DescribeFHIRExportJob response element from \a xml.
 */
void DescribeFHIRExportJobResponsePrivate::parseDescribeFHIRExportJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeFHIRExportJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace HealthLake
} // namespace QtAws
