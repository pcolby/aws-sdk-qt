// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startrxnorminferencejobresponse.h"
#include "startrxnorminferencejobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::StartRxNormInferenceJobResponse
 * \brief The StartRxNormInferenceJobResponse class provides an interace for ComprehendMedical StartRxNormInferenceJob responses.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Comprehend Medical; extracts structured information from unstructured clinical text. Use these actions to gain insight
 *  in your documents.
 *
 * \sa ComprehendMedicalClient::startRxNormInferenceJob
 */

/*!
 * Constructs a StartRxNormInferenceJobResponse object for \a reply to \a request, with parent \a parent.
 */
StartRxNormInferenceJobResponse::StartRxNormInferenceJobResponse(
        const StartRxNormInferenceJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendMedicalResponse(new StartRxNormInferenceJobResponsePrivate(this), parent)
{
    setRequest(new StartRxNormInferenceJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartRxNormInferenceJobRequest * StartRxNormInferenceJobResponse::request() const
{
    Q_D(const StartRxNormInferenceJobResponse);
    return static_cast<const StartRxNormInferenceJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ComprehendMedical StartRxNormInferenceJob \a response.
 */
void StartRxNormInferenceJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartRxNormInferenceJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ComprehendMedical::StartRxNormInferenceJobResponsePrivate
 * \brief The StartRxNormInferenceJobResponsePrivate class provides private implementation for StartRxNormInferenceJobResponse.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a StartRxNormInferenceJobResponsePrivate object with public implementation \a q.
 */
StartRxNormInferenceJobResponsePrivate::StartRxNormInferenceJobResponsePrivate(
    StartRxNormInferenceJobResponse * const q) : ComprehendMedicalResponsePrivate(q)
{

}

/*!
 * Parses a ComprehendMedical StartRxNormInferenceJob response element from \a xml.
 */
void StartRxNormInferenceJobResponsePrivate::parseStartRxNormInferenceJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartRxNormInferenceJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ComprehendMedical
} // namespace QtAws
