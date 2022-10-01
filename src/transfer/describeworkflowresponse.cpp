/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describeworkflowresponse.h"
#include "describeworkflowresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::DescribeWorkflowResponse
 * \brief The DescribeWorkflowResponse class provides an interace for Transfer DescribeWorkflow responses.
 *
 * \inmodule QtAwsTransfer
 *
 *  Transfer Family is a fully managed service that enables the transfer of files over the File Transfer Protocol (FTP),
 *  File Transfer Protocol over SSL (FTPS), or Secure Shell (SSH) File Transfer Protocol (SFTP) directly into and out of
 *  Amazon Simple Storage Service (Amazon S3) or Amazon EFS. Additionally, you can use Applicability Statement 2 (AS2) to
 *  transfer files into and out of Amazon S3. Amazon Web Services helps you seamlessly migrate your file transfer workflows
 *  to Transfer Family by integrating with existing authentication systems, and providing DNS routing with Amazon Route 53
 *  so nothing changes for your customers and partners, or their applications. With your data in Amazon S3, you can use it
 *  with Amazon Web Services for processing, analytics, machine learning, and archiving. Getting started with Transfer
 *  Family is easy since there is no infrastructure to buy and set
 *
 * \sa TransferClient::describeWorkflow
 */

/*!
 * Constructs a DescribeWorkflowResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeWorkflowResponse::DescribeWorkflowResponse(
        const DescribeWorkflowRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TransferResponse(new DescribeWorkflowResponsePrivate(this), parent)
{
    setRequest(new DescribeWorkflowRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeWorkflowRequest * DescribeWorkflowResponse::request() const
{
    Q_D(const DescribeWorkflowResponse);
    return static_cast<const DescribeWorkflowRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transfer DescribeWorkflow \a response.
 */
void DescribeWorkflowResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeWorkflowResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transfer::DescribeWorkflowResponsePrivate
 * \brief The DescribeWorkflowResponsePrivate class provides private implementation for DescribeWorkflowResponse.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a DescribeWorkflowResponsePrivate object with public implementation \a q.
 */
DescribeWorkflowResponsePrivate::DescribeWorkflowResponsePrivate(
    DescribeWorkflowResponse * const q) : TransferResponsePrivate(q)
{

}

/*!
 * Parses a Transfer DescribeWorkflow response element from \a xml.
 */
void DescribeWorkflowResponsePrivate::parseDescribeWorkflowResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeWorkflowResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transfer
} // namespace QtAws
