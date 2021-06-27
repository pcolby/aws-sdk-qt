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
 *  Amazon Comprehend Medical extracts structured information from unstructured clinical text. Use these actions to gain
 *  insight in your documents.
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
    return static_cast<const StopRxNormInferenceJobRequest *>(ComprehendMedicalResponse::request());
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
