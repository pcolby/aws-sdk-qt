// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describenotebookinstanceresponse.h"
#include "describenotebookinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeNotebookInstanceResponse
 * \brief The DescribeNotebookInstanceResponse class provides an interace for SageMaker DescribeNotebookInstance responses.
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
 * \sa SageMakerClient::describeNotebookInstance
 */

/*!
 * Constructs a DescribeNotebookInstanceResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeNotebookInstanceResponse::DescribeNotebookInstanceResponse(
        const DescribeNotebookInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeNotebookInstanceResponsePrivate(this), parent)
{
    setRequest(new DescribeNotebookInstanceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeNotebookInstanceRequest * DescribeNotebookInstanceResponse::request() const
{
    Q_D(const DescribeNotebookInstanceResponse);
    return static_cast<const DescribeNotebookInstanceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeNotebookInstance \a response.
 */
void DescribeNotebookInstanceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeNotebookInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeNotebookInstanceResponsePrivate
 * \brief The DescribeNotebookInstanceResponsePrivate class provides private implementation for DescribeNotebookInstanceResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeNotebookInstanceResponsePrivate object with public implementation \a q.
 */
DescribeNotebookInstanceResponsePrivate::DescribeNotebookInstanceResponsePrivate(
    DescribeNotebookInstanceResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeNotebookInstance response element from \a xml.
 */
void DescribeNotebookInstanceResponsePrivate::parseDescribeNotebookInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeNotebookInstanceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
