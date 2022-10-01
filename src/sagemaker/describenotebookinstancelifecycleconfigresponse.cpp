// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describenotebookinstancelifecycleconfigresponse.h"
#include "describenotebookinstancelifecycleconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeNotebookInstanceLifecycleConfigResponse
 * \brief The DescribeNotebookInstanceLifecycleConfigResponse class provides an interace for SageMaker DescribeNotebookInstanceLifecycleConfig responses.
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
 * \sa SageMakerClient::describeNotebookInstanceLifecycleConfig
 */

/*!
 * Constructs a DescribeNotebookInstanceLifecycleConfigResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeNotebookInstanceLifecycleConfigResponse::DescribeNotebookInstanceLifecycleConfigResponse(
        const DescribeNotebookInstanceLifecycleConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeNotebookInstanceLifecycleConfigResponsePrivate(this), parent)
{
    setRequest(new DescribeNotebookInstanceLifecycleConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeNotebookInstanceLifecycleConfigRequest * DescribeNotebookInstanceLifecycleConfigResponse::request() const
{
    Q_D(const DescribeNotebookInstanceLifecycleConfigResponse);
    return static_cast<const DescribeNotebookInstanceLifecycleConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeNotebookInstanceLifecycleConfig \a response.
 */
void DescribeNotebookInstanceLifecycleConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeNotebookInstanceLifecycleConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeNotebookInstanceLifecycleConfigResponsePrivate
 * \brief The DescribeNotebookInstanceLifecycleConfigResponsePrivate class provides private implementation for DescribeNotebookInstanceLifecycleConfigResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeNotebookInstanceLifecycleConfigResponsePrivate object with public implementation \a q.
 */
DescribeNotebookInstanceLifecycleConfigResponsePrivate::DescribeNotebookInstanceLifecycleConfigResponsePrivate(
    DescribeNotebookInstanceLifecycleConfigResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeNotebookInstanceLifecycleConfig response element from \a xml.
 */
void DescribeNotebookInstanceLifecycleConfigResponsePrivate::parseDescribeNotebookInstanceLifecycleConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeNotebookInstanceLifecycleConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
