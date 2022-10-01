// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
