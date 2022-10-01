// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "starticd10cminferencejobresponse.h"
#include "starticd10cminferencejobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::StartICD10CMInferenceJobResponse
 * \brief The StartICD10CMInferenceJobResponse class provides an interace for ComprehendMedical StartICD10CMInferenceJob responses.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Comprehend Medical; extracts structured information from unstructured clinical text. Use these actions to gain insight
 *  in your documents.
 *
 * \sa ComprehendMedicalClient::startICD10CMInferenceJob
 */

/*!
 * Constructs a StartICD10CMInferenceJobResponse object for \a reply to \a request, with parent \a parent.
 */
StartICD10CMInferenceJobResponse::StartICD10CMInferenceJobResponse(
        const StartICD10CMInferenceJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendMedicalResponse(new StartICD10CMInferenceJobResponsePrivate(this), parent)
{
    setRequest(new StartICD10CMInferenceJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartICD10CMInferenceJobRequest * StartICD10CMInferenceJobResponse::request() const
{
    Q_D(const StartICD10CMInferenceJobResponse);
    return static_cast<const StartICD10CMInferenceJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ComprehendMedical StartICD10CMInferenceJob \a response.
 */
void StartICD10CMInferenceJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartICD10CMInferenceJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ComprehendMedical::StartICD10CMInferenceJobResponsePrivate
 * \brief The StartICD10CMInferenceJobResponsePrivate class provides private implementation for StartICD10CMInferenceJobResponse.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a StartICD10CMInferenceJobResponsePrivate object with public implementation \a q.
 */
StartICD10CMInferenceJobResponsePrivate::StartICD10CMInferenceJobResponsePrivate(
    StartICD10CMInferenceJobResponse * const q) : ComprehendMedicalResponsePrivate(q)
{

}

/*!
 * Parses a ComprehendMedical StartICD10CMInferenceJob response element from \a xml.
 */
void StartICD10CMInferenceJobResponsePrivate::parseStartICD10CMInferenceJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartICD10CMInferenceJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ComprehendMedical
} // namespace QtAws
