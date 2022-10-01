// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describepiientitiesdetectionjobresponse.h"
#include "describepiientitiesdetectionjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::DescribePiiEntitiesDetectionJobResponse
 * \brief The DescribePiiEntitiesDetectionJobResponse class provides an interace for Comprehend DescribePiiEntitiesDetectionJob responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::describePiiEntitiesDetectionJob
 */

/*!
 * Constructs a DescribePiiEntitiesDetectionJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribePiiEntitiesDetectionJobResponse::DescribePiiEntitiesDetectionJobResponse(
        const DescribePiiEntitiesDetectionJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new DescribePiiEntitiesDetectionJobResponsePrivate(this), parent)
{
    setRequest(new DescribePiiEntitiesDetectionJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribePiiEntitiesDetectionJobRequest * DescribePiiEntitiesDetectionJobResponse::request() const
{
    Q_D(const DescribePiiEntitiesDetectionJobResponse);
    return static_cast<const DescribePiiEntitiesDetectionJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend DescribePiiEntitiesDetectionJob \a response.
 */
void DescribePiiEntitiesDetectionJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribePiiEntitiesDetectionJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::DescribePiiEntitiesDetectionJobResponsePrivate
 * \brief The DescribePiiEntitiesDetectionJobResponsePrivate class provides private implementation for DescribePiiEntitiesDetectionJobResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a DescribePiiEntitiesDetectionJobResponsePrivate object with public implementation \a q.
 */
DescribePiiEntitiesDetectionJobResponsePrivate::DescribePiiEntitiesDetectionJobResponsePrivate(
    DescribePiiEntitiesDetectionJobResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend DescribePiiEntitiesDetectionJob response element from \a xml.
 */
void DescribePiiEntitiesDetectionJobResponsePrivate::parseDescribePiiEntitiesDetectionJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribePiiEntitiesDetectionJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
