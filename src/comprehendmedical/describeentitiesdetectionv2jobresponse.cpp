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

#include "describeentitiesdetectionv2jobresponse.h"
#include "describeentitiesdetectionv2jobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::DescribeEntitiesDetectionV2JobResponse
 * \brief The DescribeEntitiesDetectionV2JobResponse class provides an interace for ComprehendMedical DescribeEntitiesDetectionV2Job responses.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Amazon Comprehend Medical extracts structured information from unstructured clinical text. Use these actions to gain
 *  insight in your documents.
 *
 * \sa ComprehendMedicalClient::describeEntitiesDetectionV2Job
 */

/*!
 * Constructs a DescribeEntitiesDetectionV2JobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeEntitiesDetectionV2JobResponse::DescribeEntitiesDetectionV2JobResponse(
        const DescribeEntitiesDetectionV2JobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendMedicalResponse(new DescribeEntitiesDetectionV2JobResponsePrivate(this), parent)
{
    setRequest(new DescribeEntitiesDetectionV2JobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeEntitiesDetectionV2JobRequest * DescribeEntitiesDetectionV2JobResponse::request() const
{
    Q_D(const DescribeEntitiesDetectionV2JobResponse);
    return static_cast<const DescribeEntitiesDetectionV2JobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ComprehendMedical DescribeEntitiesDetectionV2Job \a response.
 */
void DescribeEntitiesDetectionV2JobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeEntitiesDetectionV2JobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ComprehendMedical::DescribeEntitiesDetectionV2JobResponsePrivate
 * \brief The DescribeEntitiesDetectionV2JobResponsePrivate class provides private implementation for DescribeEntitiesDetectionV2JobResponse.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a DescribeEntitiesDetectionV2JobResponsePrivate object with public implementation \a q.
 */
DescribeEntitiesDetectionV2JobResponsePrivate::DescribeEntitiesDetectionV2JobResponsePrivate(
    DescribeEntitiesDetectionV2JobResponse * const q) : ComprehendMedicalResponsePrivate(q)
{

}

/*!
 * Parses a ComprehendMedical DescribeEntitiesDetectionV2Job response element from \a xml.
 */
void DescribeEntitiesDetectionV2JobResponsePrivate::parseDescribeEntitiesDetectionV2JobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEntitiesDetectionV2JobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ComprehendMedical
} // namespace QtAws
