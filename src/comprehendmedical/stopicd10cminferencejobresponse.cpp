// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopicd10cminferencejobresponse.h"
#include "stopicd10cminferencejobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::StopICD10CMInferenceJobResponse
 * \brief The StopICD10CMInferenceJobResponse class provides an interace for ComprehendMedical StopICD10CMInferenceJob responses.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Comprehend Medical; extracts structured information from unstructured clinical text. Use these actions to gain insight
 *  in your documents.
 *
 * \sa ComprehendMedicalClient::stopICD10CMInferenceJob
 */

/*!
 * Constructs a StopICD10CMInferenceJobResponse object for \a reply to \a request, with parent \a parent.
 */
StopICD10CMInferenceJobResponse::StopICD10CMInferenceJobResponse(
        const StopICD10CMInferenceJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendMedicalResponse(new StopICD10CMInferenceJobResponsePrivate(this), parent)
{
    setRequest(new StopICD10CMInferenceJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopICD10CMInferenceJobRequest * StopICD10CMInferenceJobResponse::request() const
{
    Q_D(const StopICD10CMInferenceJobResponse);
    return static_cast<const StopICD10CMInferenceJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ComprehendMedical StopICD10CMInferenceJob \a response.
 */
void StopICD10CMInferenceJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopICD10CMInferenceJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ComprehendMedical::StopICD10CMInferenceJobResponsePrivate
 * \brief The StopICD10CMInferenceJobResponsePrivate class provides private implementation for StopICD10CMInferenceJobResponse.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a StopICD10CMInferenceJobResponsePrivate object with public implementation \a q.
 */
StopICD10CMInferenceJobResponsePrivate::StopICD10CMInferenceJobResponsePrivate(
    StopICD10CMInferenceJobResponse * const q) : ComprehendMedicalResponsePrivate(q)
{

}

/*!
 * Parses a ComprehendMedical StopICD10CMInferenceJob response element from \a xml.
 */
void StopICD10CMInferenceJobResponsePrivate::parseStopICD10CMInferenceJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopICD10CMInferenceJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ComprehendMedical
} // namespace QtAws
