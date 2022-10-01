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
