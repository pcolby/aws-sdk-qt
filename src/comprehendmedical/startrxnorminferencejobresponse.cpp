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
