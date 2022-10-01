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

#include "describesnomedctinferencejobresponse.h"
#include "describesnomedctinferencejobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::DescribeSNOMEDCTInferenceJobResponse
 * \brief The DescribeSNOMEDCTInferenceJobResponse class provides an interace for ComprehendMedical DescribeSNOMEDCTInferenceJob responses.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Comprehend Medical; extracts structured information from unstructured clinical text. Use these actions to gain insight
 *  in your documents.
 *
 * \sa ComprehendMedicalClient::describeSNOMEDCTInferenceJob
 */

/*!
 * Constructs a DescribeSNOMEDCTInferenceJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeSNOMEDCTInferenceJobResponse::DescribeSNOMEDCTInferenceJobResponse(
        const DescribeSNOMEDCTInferenceJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendMedicalResponse(new DescribeSNOMEDCTInferenceJobResponsePrivate(this), parent)
{
    setRequest(new DescribeSNOMEDCTInferenceJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeSNOMEDCTInferenceJobRequest * DescribeSNOMEDCTInferenceJobResponse::request() const
{
    Q_D(const DescribeSNOMEDCTInferenceJobResponse);
    return static_cast<const DescribeSNOMEDCTInferenceJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ComprehendMedical DescribeSNOMEDCTInferenceJob \a response.
 */
void DescribeSNOMEDCTInferenceJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeSNOMEDCTInferenceJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ComprehendMedical::DescribeSNOMEDCTInferenceJobResponsePrivate
 * \brief The DescribeSNOMEDCTInferenceJobResponsePrivate class provides private implementation for DescribeSNOMEDCTInferenceJobResponse.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a DescribeSNOMEDCTInferenceJobResponsePrivate object with public implementation \a q.
 */
DescribeSNOMEDCTInferenceJobResponsePrivate::DescribeSNOMEDCTInferenceJobResponsePrivate(
    DescribeSNOMEDCTInferenceJobResponse * const q) : ComprehendMedicalResponsePrivate(q)
{

}

/*!
 * Parses a ComprehendMedical DescribeSNOMEDCTInferenceJob response element from \a xml.
 */
void DescribeSNOMEDCTInferenceJobResponsePrivate::parseDescribeSNOMEDCTInferenceJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSNOMEDCTInferenceJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ComprehendMedical
} // namespace QtAws
