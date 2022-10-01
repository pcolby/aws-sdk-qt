// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeendpointconfigresponse.h"
#include "describeendpointconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeEndpointConfigResponse
 * \brief The DescribeEndpointConfigResponse class provides an interace for SageMaker DescribeEndpointConfig responses.
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
 * \sa SageMakerClient::describeEndpointConfig
 */

/*!
 * Constructs a DescribeEndpointConfigResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeEndpointConfigResponse::DescribeEndpointConfigResponse(
        const DescribeEndpointConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeEndpointConfigResponsePrivate(this), parent)
{
    setRequest(new DescribeEndpointConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeEndpointConfigRequest * DescribeEndpointConfigResponse::request() const
{
    Q_D(const DescribeEndpointConfigResponse);
    return static_cast<const DescribeEndpointConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeEndpointConfig \a response.
 */
void DescribeEndpointConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeEndpointConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeEndpointConfigResponsePrivate
 * \brief The DescribeEndpointConfigResponsePrivate class provides private implementation for DescribeEndpointConfigResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeEndpointConfigResponsePrivate object with public implementation \a q.
 */
DescribeEndpointConfigResponsePrivate::DescribeEndpointConfigResponsePrivate(
    DescribeEndpointConfigResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeEndpointConfig response element from \a xml.
 */
void DescribeEndpointConfigResponsePrivate::parseDescribeEndpointConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEndpointConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
