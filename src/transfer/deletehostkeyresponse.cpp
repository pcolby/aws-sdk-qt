// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletehostkeyresponse.h"
#include "deletehostkeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::DeleteHostKeyResponse
 * \brief The DeleteHostKeyResponse class provides an interace for Transfer DeleteHostKey responses.
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
 * \sa TransferClient::deleteHostKey
 */

/*!
 * Constructs a DeleteHostKeyResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteHostKeyResponse::DeleteHostKeyResponse(
        const DeleteHostKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TransferResponse(new DeleteHostKeyResponsePrivate(this), parent)
{
    setRequest(new DeleteHostKeyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteHostKeyRequest * DeleteHostKeyResponse::request() const
{
    Q_D(const DeleteHostKeyResponse);
    return static_cast<const DeleteHostKeyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transfer DeleteHostKey \a response.
 */
void DeleteHostKeyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteHostKeyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transfer::DeleteHostKeyResponsePrivate
 * \brief The DeleteHostKeyResponsePrivate class provides private implementation for DeleteHostKeyResponse.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a DeleteHostKeyResponsePrivate object with public implementation \a q.
 */
DeleteHostKeyResponsePrivate::DeleteHostKeyResponsePrivate(
    DeleteHostKeyResponse * const q) : TransferResponsePrivate(q)
{

}

/*!
 * Parses a Transfer DeleteHostKey response element from \a xml.
 */
void DeleteHostKeyResponsePrivate::parseDeleteHostKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteHostKeyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transfer
} // namespace QtAws
