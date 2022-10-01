// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describehostkeyresponse.h"
#include "describehostkeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::DescribeHostKeyResponse
 * \brief The DescribeHostKeyResponse class provides an interace for Transfer DescribeHostKey responses.
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
 * \sa TransferClient::describeHostKey
 */

/*!
 * Constructs a DescribeHostKeyResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeHostKeyResponse::DescribeHostKeyResponse(
        const DescribeHostKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TransferResponse(new DescribeHostKeyResponsePrivate(this), parent)
{
    setRequest(new DescribeHostKeyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeHostKeyRequest * DescribeHostKeyResponse::request() const
{
    Q_D(const DescribeHostKeyResponse);
    return static_cast<const DescribeHostKeyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transfer DescribeHostKey \a response.
 */
void DescribeHostKeyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeHostKeyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transfer::DescribeHostKeyResponsePrivate
 * \brief The DescribeHostKeyResponsePrivate class provides private implementation for DescribeHostKeyResponse.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a DescribeHostKeyResponsePrivate object with public implementation \a q.
 */
DescribeHostKeyResponsePrivate::DescribeHostKeyResponsePrivate(
    DescribeHostKeyResponse * const q) : TransferResponsePrivate(q)
{

}

/*!
 * Parses a Transfer DescribeHostKey response element from \a xml.
 */
void DescribeHostKeyResponsePrivate::parseDescribeHostKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeHostKeyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transfer
} // namespace QtAws
