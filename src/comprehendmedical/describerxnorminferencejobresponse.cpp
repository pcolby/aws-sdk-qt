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

#include "describerxnorminferencejobresponse.h"
#include "describerxnorminferencejobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::DescribeRxNormInferenceJobResponse
 * \brief The DescribeRxNormInferenceJobResponse class provides an interace for ComprehendMedical DescribeRxNormInferenceJob responses.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Comprehend Medical; extracts structured information from unstructured clinical text. Use these actions to gain insight
 *  in your documents.
 *
 * \sa ComprehendMedicalClient::describeRxNormInferenceJob
 */

/*!
 * Constructs a DescribeRxNormInferenceJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeRxNormInferenceJobResponse::DescribeRxNormInferenceJobResponse(
        const DescribeRxNormInferenceJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendMedicalResponse(new DescribeRxNormInferenceJobResponsePrivate(this), parent)
{
    setRequest(new DescribeRxNormInferenceJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeRxNormInferenceJobRequest * DescribeRxNormInferenceJobResponse::request() const
{
    Q_D(const DescribeRxNormInferenceJobResponse);
    return static_cast<const DescribeRxNormInferenceJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ComprehendMedical DescribeRxNormInferenceJob \a response.
 */
void DescribeRxNormInferenceJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeRxNormInferenceJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ComprehendMedical::DescribeRxNormInferenceJobResponsePrivate
 * \brief The DescribeRxNormInferenceJobResponsePrivate class provides private implementation for DescribeRxNormInferenceJobResponse.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a DescribeRxNormInferenceJobResponsePrivate object with public implementation \a q.
 */
DescribeRxNormInferenceJobResponsePrivate::DescribeRxNormInferenceJobResponsePrivate(
    DescribeRxNormInferenceJobResponse * const q) : ComprehendMedicalResponsePrivate(q)
{

}

/*!
 * Parses a ComprehendMedical DescribeRxNormInferenceJob response element from \a xml.
 */
void DescribeRxNormInferenceJobResponsePrivate::parseDescribeRxNormInferenceJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeRxNormInferenceJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ComprehendMedical
} // namespace QtAws
