// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describecoderepositoryresponse.h"
#include "describecoderepositoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeCodeRepositoryResponse
 * \brief The DescribeCodeRepositoryResponse class provides an interace for SageMaker DescribeCodeRepository responses.
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
 * \sa SageMakerClient::describeCodeRepository
 */

/*!
 * Constructs a DescribeCodeRepositoryResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeCodeRepositoryResponse::DescribeCodeRepositoryResponse(
        const DescribeCodeRepositoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeCodeRepositoryResponsePrivate(this), parent)
{
    setRequest(new DescribeCodeRepositoryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeCodeRepositoryRequest * DescribeCodeRepositoryResponse::request() const
{
    Q_D(const DescribeCodeRepositoryResponse);
    return static_cast<const DescribeCodeRepositoryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeCodeRepository \a response.
 */
void DescribeCodeRepositoryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeCodeRepositoryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeCodeRepositoryResponsePrivate
 * \brief The DescribeCodeRepositoryResponsePrivate class provides private implementation for DescribeCodeRepositoryResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeCodeRepositoryResponsePrivate object with public implementation \a q.
 */
DescribeCodeRepositoryResponsePrivate::DescribeCodeRepositoryResponsePrivate(
    DescribeCodeRepositoryResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeCodeRepository response element from \a xml.
 */
void DescribeCodeRepositoryResponsePrivate::parseDescribeCodeRepositoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeCodeRepositoryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
