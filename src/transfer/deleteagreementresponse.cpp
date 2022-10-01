// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteagreementresponse.h"
#include "deleteagreementresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::DeleteAgreementResponse
 * \brief The DeleteAgreementResponse class provides an interace for Transfer DeleteAgreement responses.
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
 * \sa TransferClient::deleteAgreement
 */

/*!
 * Constructs a DeleteAgreementResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAgreementResponse::DeleteAgreementResponse(
        const DeleteAgreementRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TransferResponse(new DeleteAgreementResponsePrivate(this), parent)
{
    setRequest(new DeleteAgreementRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAgreementRequest * DeleteAgreementResponse::request() const
{
    Q_D(const DeleteAgreementResponse);
    return static_cast<const DeleteAgreementRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transfer DeleteAgreement \a response.
 */
void DeleteAgreementResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAgreementResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transfer::DeleteAgreementResponsePrivate
 * \brief The DeleteAgreementResponsePrivate class provides private implementation for DeleteAgreementResponse.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a DeleteAgreementResponsePrivate object with public implementation \a q.
 */
DeleteAgreementResponsePrivate::DeleteAgreementResponsePrivate(
    DeleteAgreementResponse * const q) : TransferResponsePrivate(q)
{

}

/*!
 * Parses a Transfer DeleteAgreement response element from \a xml.
 */
void DeleteAgreementResponsePrivate::parseDeleteAgreementResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAgreementResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transfer
} // namespace QtAws
