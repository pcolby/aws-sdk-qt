// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteaccessresponse.h"
#include "deleteaccessresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::DeleteAccessResponse
 * \brief The DeleteAccessResponse class provides an interace for Transfer DeleteAccess responses.
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
 * \sa TransferClient::deleteAccess
 */

/*!
 * Constructs a DeleteAccessResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAccessResponse::DeleteAccessResponse(
        const DeleteAccessRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TransferResponse(new DeleteAccessResponsePrivate(this), parent)
{
    setRequest(new DeleteAccessRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAccessRequest * DeleteAccessResponse::request() const
{
    Q_D(const DeleteAccessResponse);
    return static_cast<const DeleteAccessRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transfer DeleteAccess \a response.
 */
void DeleteAccessResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAccessResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transfer::DeleteAccessResponsePrivate
 * \brief The DeleteAccessResponsePrivate class provides private implementation for DeleteAccessResponse.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a DeleteAccessResponsePrivate object with public implementation \a q.
 */
DeleteAccessResponsePrivate::DeleteAccessResponsePrivate(
    DeleteAccessResponse * const q) : TransferResponsePrivate(q)
{

}

/*!
 * Parses a Transfer DeleteAccess response element from \a xml.
 */
void DeleteAccessResponsePrivate::parseDeleteAccessResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAccessResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transfer
} // namespace QtAws
