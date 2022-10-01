// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
