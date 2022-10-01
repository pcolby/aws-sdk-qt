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
