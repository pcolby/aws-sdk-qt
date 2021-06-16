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

#include "describemodelpackagegroupresponse.h"
#include "describemodelpackagegroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeModelPackageGroupResponse
 * \brief The DescribeModelPackageGroupResponse class provides an interace for SageMaker DescribeModelPackageGroup responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">Amazon SageMaker Developer
 *  Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::describeModelPackageGroup
 */

/*!
 * Constructs a DescribeModelPackageGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeModelPackageGroupResponse::DescribeModelPackageGroupResponse(
        const DescribeModelPackageGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeModelPackageGroupResponsePrivate(this), parent)
{
    setRequest(new DescribeModelPackageGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeModelPackageGroupRequest * DescribeModelPackageGroupResponse::request() const
{
    Q_D(const DescribeModelPackageGroupResponse);
    return static_cast<const DescribeModelPackageGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeModelPackageGroup \a response.
 */
void DescribeModelPackageGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeModelPackageGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeModelPackageGroupResponsePrivate
 * \brief The DescribeModelPackageGroupResponsePrivate class provides private implementation for DescribeModelPackageGroupResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeModelPackageGroupResponsePrivate object with public implementation \a q.
 */
DescribeModelPackageGroupResponsePrivate::DescribeModelPackageGroupResponsePrivate(
    DescribeModelPackageGroupResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeModelPackageGroup response element from \a xml.
 */
void DescribeModelPackageGroupResponsePrivate::parseDescribeModelPackageGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeModelPackageGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
