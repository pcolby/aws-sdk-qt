// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
