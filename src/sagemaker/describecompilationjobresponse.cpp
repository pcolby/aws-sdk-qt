// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describecompilationjobresponse.h"
#include "describecompilationjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeCompilationJobResponse
 * \brief The DescribeCompilationJobResponse class provides an interace for SageMaker DescribeCompilationJob responses.
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
 * \sa SageMakerClient::describeCompilationJob
 */

/*!
 * Constructs a DescribeCompilationJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeCompilationJobResponse::DescribeCompilationJobResponse(
        const DescribeCompilationJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeCompilationJobResponsePrivate(this), parent)
{
    setRequest(new DescribeCompilationJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeCompilationJobRequest * DescribeCompilationJobResponse::request() const
{
    Q_D(const DescribeCompilationJobResponse);
    return static_cast<const DescribeCompilationJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeCompilationJob \a response.
 */
void DescribeCompilationJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeCompilationJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeCompilationJobResponsePrivate
 * \brief The DescribeCompilationJobResponsePrivate class provides private implementation for DescribeCompilationJobResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeCompilationJobResponsePrivate object with public implementation \a q.
 */
DescribeCompilationJobResponsePrivate::DescribeCompilationJobResponsePrivate(
    DescribeCompilationJobResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeCompilationJob response element from \a xml.
 */
void DescribeCompilationJobResponsePrivate::parseDescribeCompilationJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeCompilationJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
