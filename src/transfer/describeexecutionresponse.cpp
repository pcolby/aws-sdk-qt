// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeexecutionresponse.h"
#include "describeexecutionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::DescribeExecutionResponse
 * \brief The DescribeExecutionResponse class provides an interace for Transfer DescribeExecution responses.
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
 * \sa TransferClient::describeExecution
 */

/*!
 * Constructs a DescribeExecutionResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeExecutionResponse::DescribeExecutionResponse(
        const DescribeExecutionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TransferResponse(new DescribeExecutionResponsePrivate(this), parent)
{
    setRequest(new DescribeExecutionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeExecutionRequest * DescribeExecutionResponse::request() const
{
    Q_D(const DescribeExecutionResponse);
    return static_cast<const DescribeExecutionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transfer DescribeExecution \a response.
 */
void DescribeExecutionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeExecutionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transfer::DescribeExecutionResponsePrivate
 * \brief The DescribeExecutionResponsePrivate class provides private implementation for DescribeExecutionResponse.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a DescribeExecutionResponsePrivate object with public implementation \a q.
 */
DescribeExecutionResponsePrivate::DescribeExecutionResponsePrivate(
    DescribeExecutionResponse * const q) : TransferResponsePrivate(q)
{

}

/*!
 * Parses a Transfer DescribeExecution response element from \a xml.
 */
void DescribeExecutionResponsePrivate::parseDescribeExecutionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeExecutionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transfer
} // namespace QtAws
