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
