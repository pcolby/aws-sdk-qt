// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
