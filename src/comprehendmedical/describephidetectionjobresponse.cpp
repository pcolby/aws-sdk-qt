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
 *  Amazon Comprehend Medical extracts structured information from unstructured clinical text. Use these actions to gain
 *  insight in your documents.
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
