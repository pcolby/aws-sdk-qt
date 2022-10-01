// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stoprxnorminferencejobresponse.h"
#include "stoprxnorminferencejobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::StopRxNormInferenceJobResponse
 * \brief The StopRxNormInferenceJobResponse class provides an interace for ComprehendMedical StopRxNormInferenceJob responses.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Comprehend Medical; extracts structured information from unstructured clinical text. Use these actions to gain insight
 *  in your documents.
 *
 * \sa ComprehendMedicalClient::stopRxNormInferenceJob
 */

/*!
 * Constructs a StopRxNormInferenceJobResponse object for \a reply to \a request, with parent \a parent.
 */
StopRxNormInferenceJobResponse::StopRxNormInferenceJobResponse(
        const StopRxNormInferenceJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendMedicalResponse(new StopRxNormInferenceJobResponsePrivate(this), parent)
{
    setRequest(new StopRxNormInferenceJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopRxNormInferenceJobRequest * StopRxNormInferenceJobResponse::request() const
{
    Q_D(const StopRxNormInferenceJobResponse);
    return static_cast<const StopRxNormInferenceJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ComprehendMedical StopRxNormInferenceJob \a response.
 */
void StopRxNormInferenceJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopRxNormInferenceJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ComprehendMedical::StopRxNormInferenceJobResponsePrivate
 * \brief The StopRxNormInferenceJobResponsePrivate class provides private implementation for StopRxNormInferenceJobResponse.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a StopRxNormInferenceJobResponsePrivate object with public implementation \a q.
 */
StopRxNormInferenceJobResponsePrivate::StopRxNormInferenceJobResponsePrivate(
    StopRxNormInferenceJobResponse * const q) : ComprehendMedicalResponsePrivate(q)
{

}

/*!
 * Parses a ComprehendMedical StopRxNormInferenceJob response element from \a xml.
 */
void StopRxNormInferenceJobResponsePrivate::parseStopRxNormInferenceJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopRxNormInferenceJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ComprehendMedical
} // namespace QtAws
