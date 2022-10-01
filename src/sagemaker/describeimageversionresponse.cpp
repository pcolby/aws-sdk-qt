// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeimageversionresponse.h"
#include "describeimageversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeImageVersionResponse
 * \brief The DescribeImageVersionResponse class provides an interace for SageMaker DescribeImageVersion responses.
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
 * \sa SageMakerClient::describeImageVersion
 */

/*!
 * Constructs a DescribeImageVersionResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeImageVersionResponse::DescribeImageVersionResponse(
        const DescribeImageVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeImageVersionResponsePrivate(this), parent)
{
    setRequest(new DescribeImageVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeImageVersionRequest * DescribeImageVersionResponse::request() const
{
    Q_D(const DescribeImageVersionResponse);
    return static_cast<const DescribeImageVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeImageVersion \a response.
 */
void DescribeImageVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeImageVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeImageVersionResponsePrivate
 * \brief The DescribeImageVersionResponsePrivate class provides private implementation for DescribeImageVersionResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeImageVersionResponsePrivate object with public implementation \a q.
 */
DescribeImageVersionResponsePrivate::DescribeImageVersionResponsePrivate(
    DescribeImageVersionResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeImageVersion response element from \a xml.
 */
void DescribeImageVersionResponsePrivate::parseDescribeImageVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeImageVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
