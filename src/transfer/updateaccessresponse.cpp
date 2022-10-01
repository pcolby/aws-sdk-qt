// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateaccessresponse.h"
#include "updateaccessresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::UpdateAccessResponse
 * \brief The UpdateAccessResponse class provides an interace for Transfer UpdateAccess responses.
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
 * \sa TransferClient::updateAccess
 */

/*!
 * Constructs a UpdateAccessResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateAccessResponse::UpdateAccessResponse(
        const UpdateAccessRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TransferResponse(new UpdateAccessResponsePrivate(this), parent)
{
    setRequest(new UpdateAccessRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateAccessRequest * UpdateAccessResponse::request() const
{
    Q_D(const UpdateAccessResponse);
    return static_cast<const UpdateAccessRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transfer UpdateAccess \a response.
 */
void UpdateAccessResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateAccessResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transfer::UpdateAccessResponsePrivate
 * \brief The UpdateAccessResponsePrivate class provides private implementation for UpdateAccessResponse.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a UpdateAccessResponsePrivate object with public implementation \a q.
 */
UpdateAccessResponsePrivate::UpdateAccessResponsePrivate(
    UpdateAccessResponse * const q) : TransferResponsePrivate(q)
{

}

/*!
 * Parses a Transfer UpdateAccess response element from \a xml.
 */
void UpdateAccessResponsePrivate::parseUpdateAccessResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAccessResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transfer
} // namespace QtAws
