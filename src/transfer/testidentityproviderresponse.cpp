// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "testidentityproviderresponse.h"
#include "testidentityproviderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::TestIdentityProviderResponse
 * \brief The TestIdentityProviderResponse class provides an interace for Transfer TestIdentityProvider responses.
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
 * \sa TransferClient::testIdentityProvider
 */

/*!
 * Constructs a TestIdentityProviderResponse object for \a reply to \a request, with parent \a parent.
 */
TestIdentityProviderResponse::TestIdentityProviderResponse(
        const TestIdentityProviderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TransferResponse(new TestIdentityProviderResponsePrivate(this), parent)
{
    setRequest(new TestIdentityProviderRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const TestIdentityProviderRequest * TestIdentityProviderResponse::request() const
{
    Q_D(const TestIdentityProviderResponse);
    return static_cast<const TestIdentityProviderRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transfer TestIdentityProvider \a response.
 */
void TestIdentityProviderResponse::parseSuccess(QIODevice &response)
{
    //Q_D(TestIdentityProviderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transfer::TestIdentityProviderResponsePrivate
 * \brief The TestIdentityProviderResponsePrivate class provides private implementation for TestIdentityProviderResponse.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a TestIdentityProviderResponsePrivate object with public implementation \a q.
 */
TestIdentityProviderResponsePrivate::TestIdentityProviderResponsePrivate(
    TestIdentityProviderResponse * const q) : TransferResponsePrivate(q)
{

}

/*!
 * Parses a Transfer TestIdentityProvider response element from \a xml.
 */
void TestIdentityProviderResponsePrivate::parseTestIdentityProviderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TestIdentityProviderResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transfer
} // namespace QtAws
