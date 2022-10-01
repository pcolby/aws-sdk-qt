// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcertificatesresponse.h"
#include "listcertificatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::ListCertificatesResponse
 * \brief The ListCertificatesResponse class provides an interace for Transfer ListCertificates responses.
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
 * \sa TransferClient::listCertificates
 */

/*!
 * Constructs a ListCertificatesResponse object for \a reply to \a request, with parent \a parent.
 */
ListCertificatesResponse::ListCertificatesResponse(
        const ListCertificatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TransferResponse(new ListCertificatesResponsePrivate(this), parent)
{
    setRequest(new ListCertificatesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListCertificatesRequest * ListCertificatesResponse::request() const
{
    Q_D(const ListCertificatesResponse);
    return static_cast<const ListCertificatesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transfer ListCertificates \a response.
 */
void ListCertificatesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListCertificatesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transfer::ListCertificatesResponsePrivate
 * \brief The ListCertificatesResponsePrivate class provides private implementation for ListCertificatesResponse.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a ListCertificatesResponsePrivate object with public implementation \a q.
 */
ListCertificatesResponsePrivate::ListCertificatesResponsePrivate(
    ListCertificatesResponse * const q) : TransferResponsePrivate(q)
{

}

/*!
 * Parses a Transfer ListCertificates response element from \a xml.
 */
void ListCertificatesResponsePrivate::parseListCertificatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCertificatesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transfer
} // namespace QtAws
