// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopsnomedctinferencejobresponse.h"
#include "stopsnomedctinferencejobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::StopSNOMEDCTInferenceJobResponse
 * \brief The StopSNOMEDCTInferenceJobResponse class provides an interace for ComprehendMedical StopSNOMEDCTInferenceJob responses.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Comprehend Medical; extracts structured information from unstructured clinical text. Use these actions to gain insight
 *  in your documents.
 *
 * \sa ComprehendMedicalClient::stopSNOMEDCTInferenceJob
 */

/*!
 * Constructs a StopSNOMEDCTInferenceJobResponse object for \a reply to \a request, with parent \a parent.
 */
StopSNOMEDCTInferenceJobResponse::StopSNOMEDCTInferenceJobResponse(
        const StopSNOMEDCTInferenceJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendMedicalResponse(new StopSNOMEDCTInferenceJobResponsePrivate(this), parent)
{
    setRequest(new StopSNOMEDCTInferenceJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopSNOMEDCTInferenceJobRequest * StopSNOMEDCTInferenceJobResponse::request() const
{
    Q_D(const StopSNOMEDCTInferenceJobResponse);
    return static_cast<const StopSNOMEDCTInferenceJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ComprehendMedical StopSNOMEDCTInferenceJob \a response.
 */
void StopSNOMEDCTInferenceJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopSNOMEDCTInferenceJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ComprehendMedical::StopSNOMEDCTInferenceJobResponsePrivate
 * \brief The StopSNOMEDCTInferenceJobResponsePrivate class provides private implementation for StopSNOMEDCTInferenceJobResponse.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a StopSNOMEDCTInferenceJobResponsePrivate object with public implementation \a q.
 */
StopSNOMEDCTInferenceJobResponsePrivate::StopSNOMEDCTInferenceJobResponsePrivate(
    StopSNOMEDCTInferenceJobResponse * const q) : ComprehendMedicalResponsePrivate(q)
{

}

/*!
 * Parses a ComprehendMedical StopSNOMEDCTInferenceJob response element from \a xml.
 */
void StopSNOMEDCTInferenceJobResponsePrivate::parseStopSNOMEDCTInferenceJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopSNOMEDCTInferenceJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ComprehendMedical
} // namespace QtAws
