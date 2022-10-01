// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeprofileresponse.h"
#include "describeprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::DescribeProfileResponse
 * \brief The DescribeProfileResponse class provides an interace for Transfer DescribeProfile responses.
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
 * \sa TransferClient::describeProfile
 */

/*!
 * Constructs a DescribeProfileResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeProfileResponse::DescribeProfileResponse(
        const DescribeProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TransferResponse(new DescribeProfileResponsePrivate(this), parent)
{
    setRequest(new DescribeProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeProfileRequest * DescribeProfileResponse::request() const
{
    Q_D(const DescribeProfileResponse);
    return static_cast<const DescribeProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transfer DescribeProfile \a response.
 */
void DescribeProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transfer::DescribeProfileResponsePrivate
 * \brief The DescribeProfileResponsePrivate class provides private implementation for DescribeProfileResponse.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a DescribeProfileResponsePrivate object with public implementation \a q.
 */
DescribeProfileResponsePrivate::DescribeProfileResponsePrivate(
    DescribeProfileResponse * const q) : TransferResponsePrivate(q)
{

}

/*!
 * Parses a Transfer DescribeProfile response element from \a xml.
 */
void DescribeProfileResponsePrivate::parseDescribeProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transfer
} // namespace QtAws
