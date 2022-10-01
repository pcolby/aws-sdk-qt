// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Comprehend Medical; extracts structured information from unstructured clinical text. Use these actions to gain insight
 *  in your documents.
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
