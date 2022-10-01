// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startsnomedctinferencejobresponse.h"
#include "startsnomedctinferencejobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::StartSNOMEDCTInferenceJobResponse
 * \brief The StartSNOMEDCTInferenceJobResponse class provides an interace for ComprehendMedical StartSNOMEDCTInferenceJob responses.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Comprehend Medical; extracts structured information from unstructured clinical text. Use these actions to gain insight
 *  in your documents.
 *
 * \sa ComprehendMedicalClient::startSNOMEDCTInferenceJob
 */

/*!
 * Constructs a StartSNOMEDCTInferenceJobResponse object for \a reply to \a request, with parent \a parent.
 */
StartSNOMEDCTInferenceJobResponse::StartSNOMEDCTInferenceJobResponse(
        const StartSNOMEDCTInferenceJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendMedicalResponse(new StartSNOMEDCTInferenceJobResponsePrivate(this), parent)
{
    setRequest(new StartSNOMEDCTInferenceJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartSNOMEDCTInferenceJobRequest * StartSNOMEDCTInferenceJobResponse::request() const
{
    Q_D(const StartSNOMEDCTInferenceJobResponse);
    return static_cast<const StartSNOMEDCTInferenceJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ComprehendMedical StartSNOMEDCTInferenceJob \a response.
 */
void StartSNOMEDCTInferenceJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartSNOMEDCTInferenceJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ComprehendMedical::StartSNOMEDCTInferenceJobResponsePrivate
 * \brief The StartSNOMEDCTInferenceJobResponsePrivate class provides private implementation for StartSNOMEDCTInferenceJobResponse.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a StartSNOMEDCTInferenceJobResponsePrivate object with public implementation \a q.
 */
StartSNOMEDCTInferenceJobResponsePrivate::StartSNOMEDCTInferenceJobResponsePrivate(
    StartSNOMEDCTInferenceJobResponse * const q) : ComprehendMedicalResponsePrivate(q)
{

}

/*!
 * Parses a ComprehendMedical StartSNOMEDCTInferenceJob response element from \a xml.
 */
void StartSNOMEDCTInferenceJobResponsePrivate::parseStartSNOMEDCTInferenceJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartSNOMEDCTInferenceJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ComprehendMedical
} // namespace QtAws
