// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateagreementresponse.h"
#include "updateagreementresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::UpdateAgreementResponse
 * \brief The UpdateAgreementResponse class provides an interace for Transfer UpdateAgreement responses.
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
 * \sa TransferClient::updateAgreement
 */

/*!
 * Constructs a UpdateAgreementResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateAgreementResponse::UpdateAgreementResponse(
        const UpdateAgreementRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TransferResponse(new UpdateAgreementResponsePrivate(this), parent)
{
    setRequest(new UpdateAgreementRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateAgreementRequest * UpdateAgreementResponse::request() const
{
    Q_D(const UpdateAgreementResponse);
    return static_cast<const UpdateAgreementRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transfer UpdateAgreement \a response.
 */
void UpdateAgreementResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateAgreementResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transfer::UpdateAgreementResponsePrivate
 * \brief The UpdateAgreementResponsePrivate class provides private implementation for UpdateAgreementResponse.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a UpdateAgreementResponsePrivate object with public implementation \a q.
 */
UpdateAgreementResponsePrivate::UpdateAgreementResponsePrivate(
    UpdateAgreementResponse * const q) : TransferResponsePrivate(q)
{

}

/*!
 * Parses a Transfer UpdateAgreement response element from \a xml.
 */
void UpdateAgreementResponsePrivate::parseUpdateAgreementResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAgreementResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transfer
} // namespace QtAws
