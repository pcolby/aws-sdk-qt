// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeserverresponse.h"
#include "describeserverresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::DescribeServerResponse
 * \brief The DescribeServerResponse class provides an interace for Transfer DescribeServer responses.
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
 * \sa TransferClient::describeServer
 */

/*!
 * Constructs a DescribeServerResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeServerResponse::DescribeServerResponse(
        const DescribeServerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TransferResponse(new DescribeServerResponsePrivate(this), parent)
{
    setRequest(new DescribeServerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeServerRequest * DescribeServerResponse::request() const
{
    Q_D(const DescribeServerResponse);
    return static_cast<const DescribeServerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transfer DescribeServer \a response.
 */
void DescribeServerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeServerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transfer::DescribeServerResponsePrivate
 * \brief The DescribeServerResponsePrivate class provides private implementation for DescribeServerResponse.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a DescribeServerResponsePrivate object with public implementation \a q.
 */
DescribeServerResponsePrivate::DescribeServerResponsePrivate(
    DescribeServerResponse * const q) : TransferResponsePrivate(q)
{

}

/*!
 * Parses a Transfer DescribeServer response element from \a xml.
 */
void DescribeServerResponsePrivate::parseDescribeServerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeServerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transfer
} // namespace QtAws
