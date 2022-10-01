// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeuserresponse.h"
#include "describeuserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::DescribeUserResponse
 * \brief The DescribeUserResponse class provides an interace for Transfer DescribeUser responses.
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
 * \sa TransferClient::describeUser
 */

/*!
 * Constructs a DescribeUserResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeUserResponse::DescribeUserResponse(
        const DescribeUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TransferResponse(new DescribeUserResponsePrivate(this), parent)
{
    setRequest(new DescribeUserRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeUserRequest * DescribeUserResponse::request() const
{
    Q_D(const DescribeUserResponse);
    return static_cast<const DescribeUserRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transfer DescribeUser \a response.
 */
void DescribeUserResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeUserResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transfer::DescribeUserResponsePrivate
 * \brief The DescribeUserResponsePrivate class provides private implementation for DescribeUserResponse.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a DescribeUserResponsePrivate object with public implementation \a q.
 */
DescribeUserResponsePrivate::DescribeUserResponsePrivate(
    DescribeUserResponse * const q) : TransferResponsePrivate(q)
{

}

/*!
 * Parses a Transfer DescribeUser response element from \a xml.
 */
void DescribeUserResponsePrivate::parseDescribeUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeUserResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transfer
} // namespace QtAws
