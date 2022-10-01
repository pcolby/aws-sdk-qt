// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describefeaturegroupresponse.h"
#include "describefeaturegroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeFeatureGroupResponse
 * \brief The DescribeFeatureGroupResponse class provides an interace for SageMaker DescribeFeatureGroup responses.
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
 * \sa SageMakerClient::describeFeatureGroup
 */

/*!
 * Constructs a DescribeFeatureGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeFeatureGroupResponse::DescribeFeatureGroupResponse(
        const DescribeFeatureGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeFeatureGroupResponsePrivate(this), parent)
{
    setRequest(new DescribeFeatureGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeFeatureGroupRequest * DescribeFeatureGroupResponse::request() const
{
    Q_D(const DescribeFeatureGroupResponse);
    return static_cast<const DescribeFeatureGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeFeatureGroup \a response.
 */
void DescribeFeatureGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeFeatureGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeFeatureGroupResponsePrivate
 * \brief The DescribeFeatureGroupResponsePrivate class provides private implementation for DescribeFeatureGroupResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeFeatureGroupResponsePrivate object with public implementation \a q.
 */
DescribeFeatureGroupResponsePrivate::DescribeFeatureGroupResponsePrivate(
    DescribeFeatureGroupResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeFeatureGroup response element from \a xml.
 */
void DescribeFeatureGroupResponsePrivate::parseDescribeFeatureGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeFeatureGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
