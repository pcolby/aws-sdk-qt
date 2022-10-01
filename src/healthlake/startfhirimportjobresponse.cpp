// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
