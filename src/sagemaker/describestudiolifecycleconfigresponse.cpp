// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describestudiolifecycleconfigresponse.h"
#include "describestudiolifecycleconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeStudioLifecycleConfigResponse
 * \brief The DescribeStudioLifecycleConfigResponse class provides an interace for SageMaker DescribeStudioLifecycleConfig responses.
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
 * \sa SageMakerClient::describeStudioLifecycleConfig
 */

/*!
 * Constructs a DescribeStudioLifecycleConfigResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeStudioLifecycleConfigResponse::DescribeStudioLifecycleConfigResponse(
        const DescribeStudioLifecycleConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeStudioLifecycleConfigResponsePrivate(this), parent)
{
    setRequest(new DescribeStudioLifecycleConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeStudioLifecycleConfigRequest * DescribeStudioLifecycleConfigResponse::request() const
{
    Q_D(const DescribeStudioLifecycleConfigResponse);
    return static_cast<const DescribeStudioLifecycleConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeStudioLifecycleConfig \a response.
 */
void DescribeStudioLifecycleConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeStudioLifecycleConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeStudioLifecycleConfigResponsePrivate
 * \brief The DescribeStudioLifecycleConfigResponsePrivate class provides private implementation for DescribeStudioLifecycleConfigResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeStudioLifecycleConfigResponsePrivate object with public implementation \a q.
 */
DescribeStudioLifecycleConfigResponsePrivate::DescribeStudioLifecycleConfigResponsePrivate(
    DescribeStudioLifecycleConfigResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeStudioLifecycleConfig response element from \a xml.
 */
void DescribeStudioLifecycleConfigResponsePrivate::parseDescribeStudioLifecycleConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeStudioLifecycleConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
