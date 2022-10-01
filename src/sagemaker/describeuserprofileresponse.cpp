// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeuserprofileresponse.h"
#include "describeuserprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeUserProfileResponse
 * \brief The DescribeUserProfileResponse class provides an interace for SageMaker DescribeUserProfile responses.
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
 * \sa SageMakerClient::describeUserProfile
 */

/*!
 * Constructs a DescribeUserProfileResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeUserProfileResponse::DescribeUserProfileResponse(
        const DescribeUserProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeUserProfileResponsePrivate(this), parent)
{
    setRequest(new DescribeUserProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeUserProfileRequest * DescribeUserProfileResponse::request() const
{
    Q_D(const DescribeUserProfileResponse);
    return static_cast<const DescribeUserProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeUserProfile \a response.
 */
void DescribeUserProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeUserProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeUserProfileResponsePrivate
 * \brief The DescribeUserProfileResponsePrivate class provides private implementation for DescribeUserProfileResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeUserProfileResponsePrivate object with public implementation \a q.
 */
DescribeUserProfileResponsePrivate::DescribeUserProfileResponsePrivate(
    DescribeUserProfileResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeUserProfile response element from \a xml.
 */
void DescribeUserProfileResponsePrivate::parseDescribeUserProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeUserProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
