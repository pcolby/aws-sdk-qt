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

#include "describelineagegroupresponse.h"
#include "describelineagegroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeLineageGroupResponse
 * \brief The DescribeLineageGroupResponse class provides an interace for SageMaker DescribeLineageGroup responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">SageMaker Developer Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::describeLineageGroup
 */

/*!
 * Constructs a DescribeLineageGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeLineageGroupResponse::DescribeLineageGroupResponse(
        const DescribeLineageGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeLineageGroupResponsePrivate(this), parent)
{
    setRequest(new DescribeLineageGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeLineageGroupRequest * DescribeLineageGroupResponse::request() const
{
    Q_D(const DescribeLineageGroupResponse);
    return static_cast<const DescribeLineageGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeLineageGroup \a response.
 */
void DescribeLineageGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeLineageGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeLineageGroupResponsePrivate
 * \brief The DescribeLineageGroupResponsePrivate class provides private implementation for DescribeLineageGroupResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeLineageGroupResponsePrivate object with public implementation \a q.
 */
DescribeLineageGroupResponsePrivate::DescribeLineageGroupResponsePrivate(
    DescribeLineageGroupResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeLineageGroup response element from \a xml.
 */
void DescribeLineageGroupResponsePrivate::parseDescribeLineageGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLineageGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
