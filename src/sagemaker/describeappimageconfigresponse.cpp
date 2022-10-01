// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeappimageconfigresponse.h"
#include "describeappimageconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeAppImageConfigResponse
 * \brief The DescribeAppImageConfigResponse class provides an interace for SageMaker DescribeAppImageConfig responses.
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
 * \sa SageMakerClient::describeAppImageConfig
 */

/*!
 * Constructs a DescribeAppImageConfigResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAppImageConfigResponse::DescribeAppImageConfigResponse(
        const DescribeAppImageConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeAppImageConfigResponsePrivate(this), parent)
{
    setRequest(new DescribeAppImageConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAppImageConfigRequest * DescribeAppImageConfigResponse::request() const
{
    Q_D(const DescribeAppImageConfigResponse);
    return static_cast<const DescribeAppImageConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeAppImageConfig \a response.
 */
void DescribeAppImageConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAppImageConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeAppImageConfigResponsePrivate
 * \brief The DescribeAppImageConfigResponsePrivate class provides private implementation for DescribeAppImageConfigResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeAppImageConfigResponsePrivate object with public implementation \a q.
 */
DescribeAppImageConfigResponsePrivate::DescribeAppImageConfigResponsePrivate(
    DescribeAppImageConfigResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeAppImageConfig response element from \a xml.
 */
void DescribeAppImageConfigResponsePrivate::parseDescribeAppImageConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAppImageConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
