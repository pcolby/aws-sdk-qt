// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describephidetectionjobresponse.h"
#include "describephidetectionjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::DescribePHIDetectionJobResponse
 * \brief The DescribePHIDetectionJobResponse class provides an interace for ComprehendMedical DescribePHIDetectionJob responses.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Comprehend Medical; extracts structured information from unstructured clinical text. Use these actions to gain insight
 *  in your documents.
 *
 * \sa ComprehendMedicalClient::describePHIDetectionJob
 */

/*!
 * Constructs a DescribePHIDetectionJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribePHIDetectionJobResponse::DescribePHIDetectionJobResponse(
        const DescribePHIDetectionJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendMedicalResponse(new DescribePHIDetectionJobResponsePrivate(this), parent)
{
    setRequest(new DescribePHIDetectionJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribePHIDetectionJobRequest * DescribePHIDetectionJobResponse::request() const
{
    Q_D(const DescribePHIDetectionJobResponse);
    return static_cast<const DescribePHIDetectionJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ComprehendMedical DescribePHIDetectionJob \a response.
 */
void DescribePHIDetectionJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribePHIDetectionJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ComprehendMedical::DescribePHIDetectionJobResponsePrivate
 * \brief The DescribePHIDetectionJobResponsePrivate class provides private implementation for DescribePHIDetectionJobResponse.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a DescribePHIDetectionJobResponsePrivate object with public implementation \a q.
 */
DescribePHIDetectionJobResponsePrivate::DescribePHIDetectionJobResponsePrivate(
    DescribePHIDetectionJobResponse * const q) : ComprehendMedicalResponsePrivate(q)
{

}

/*!
 * Parses a ComprehendMedical DescribePHIDetectionJob response element from \a xml.
 */
void DescribePHIDetectionJobResponsePrivate::parseDescribePHIDetectionJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribePHIDetectionJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ComprehendMedical
} // namespace QtAws
