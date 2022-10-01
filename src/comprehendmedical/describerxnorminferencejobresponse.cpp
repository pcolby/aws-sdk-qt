// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
