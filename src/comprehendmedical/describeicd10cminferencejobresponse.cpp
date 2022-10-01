// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeicd10cminferencejobresponse.h"
#include "describeicd10cminferencejobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::DescribeICD10CMInferenceJobResponse
 * \brief The DescribeICD10CMInferenceJobResponse class provides an interace for ComprehendMedical DescribeICD10CMInferenceJob responses.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Comprehend Medical; extracts structured information from unstructured clinical text. Use these actions to gain insight
 *  in your documents.
 *
 * \sa ComprehendMedicalClient::describeICD10CMInferenceJob
 */

/*!
 * Constructs a DescribeICD10CMInferenceJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeICD10CMInferenceJobResponse::DescribeICD10CMInferenceJobResponse(
        const DescribeICD10CMInferenceJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendMedicalResponse(new DescribeICD10CMInferenceJobResponsePrivate(this), parent)
{
    setRequest(new DescribeICD10CMInferenceJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeICD10CMInferenceJobRequest * DescribeICD10CMInferenceJobResponse::request() const
{
    Q_D(const DescribeICD10CMInferenceJobResponse);
    return static_cast<const DescribeICD10CMInferenceJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ComprehendMedical DescribeICD10CMInferenceJob \a response.
 */
void DescribeICD10CMInferenceJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeICD10CMInferenceJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ComprehendMedical::DescribeICD10CMInferenceJobResponsePrivate
 * \brief The DescribeICD10CMInferenceJobResponsePrivate class provides private implementation for DescribeICD10CMInferenceJobResponse.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a DescribeICD10CMInferenceJobResponsePrivate object with public implementation \a q.
 */
DescribeICD10CMInferenceJobResponsePrivate::DescribeICD10CMInferenceJobResponsePrivate(
    DescribeICD10CMInferenceJobResponse * const q) : ComprehendMedicalResponsePrivate(q)
{

}

/*!
 * Parses a ComprehendMedical DescribeICD10CMInferenceJob response element from \a xml.
 */
void DescribeICD10CMInferenceJobResponsePrivate::parseDescribeICD10CMInferenceJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeICD10CMInferenceJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ComprehendMedical
} // namespace QtAws
