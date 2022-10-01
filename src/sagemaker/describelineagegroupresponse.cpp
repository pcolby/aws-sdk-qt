// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
