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
 *  Amazon Comprehend Medical extracts structured information from unstructured clinical text. Use these actions to gain
 *  insight in your documents.
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
    return static_cast<const StartICD10CMInferenceJobRequest *>(ComprehendMedicalResponse::request());
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
