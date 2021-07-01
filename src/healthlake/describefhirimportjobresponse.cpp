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

#include "describefhirimportjobresponse.h"
#include "describefhirimportjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace HealthLake {

/*!
 * \class QtAws::HealthLake::DescribeFHIRImportJobResponse
 * \brief The DescribeFHIRImportJobResponse class provides an interace for HealthLake DescribeFHIRImportJob responses.
 *
 * \inmodule QtAwsHealthLake
 *
 *  Amazon HealthLake is a HIPAA eligibile service that allows customers to store, transform, query, and analyze their
 *  FHIR-formatted data in a consistent fashion in the
 *
 * \sa HealthLakeClient::describeFHIRImportJob
 */

/*!
 * Constructs a DescribeFHIRImportJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeFHIRImportJobResponse::DescribeFHIRImportJobResponse(
        const DescribeFHIRImportJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : HealthLakeResponse(new DescribeFHIRImportJobResponsePrivate(this), parent)
{
    setRequest(new DescribeFHIRImportJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeFHIRImportJobRequest * DescribeFHIRImportJobResponse::request() const
{
    Q_D(const DescribeFHIRImportJobResponse);
    return static_cast<const DescribeFHIRImportJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful HealthLake DescribeFHIRImportJob \a response.
 */
void DescribeFHIRImportJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeFHIRImportJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::HealthLake::DescribeFHIRImportJobResponsePrivate
 * \brief The DescribeFHIRImportJobResponsePrivate class provides private implementation for DescribeFHIRImportJobResponse.
 * \internal
 *
 * \inmodule QtAwsHealthLake
 */

/*!
 * Constructs a DescribeFHIRImportJobResponsePrivate object with public implementation \a q.
 */
DescribeFHIRImportJobResponsePrivate::DescribeFHIRImportJobResponsePrivate(
    DescribeFHIRImportJobResponse * const q) : HealthLakeResponsePrivate(q)
{

}

/*!
 * Parses a HealthLake DescribeFHIRImportJob response element from \a xml.
 */
void DescribeFHIRImportJobResponsePrivate::parseDescribeFHIRImportJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeFHIRImportJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace HealthLake
} // namespace QtAws
