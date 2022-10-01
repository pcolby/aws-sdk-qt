// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateserverresponse.h"
#include "updateserverresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::UpdateServerResponse
 * \brief The UpdateServerResponse class provides an interace for Transfer UpdateServer responses.
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
 * \sa TransferClient::updateServer
 */

/*!
 * Constructs a UpdateServerResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateServerResponse::UpdateServerResponse(
        const UpdateServerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TransferResponse(new UpdateServerResponsePrivate(this), parent)
{
    setRequest(new UpdateServerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateServerRequest * UpdateServerResponse::request() const
{
    Q_D(const UpdateServerResponse);
    return static_cast<const UpdateServerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transfer UpdateServer \a response.
 */
void UpdateServerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateServerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transfer::UpdateServerResponsePrivate
 * \brief The UpdateServerResponsePrivate class provides private implementation for UpdateServerResponse.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a UpdateServerResponsePrivate object with public implementation \a q.
 */
UpdateServerResponsePrivate::UpdateServerResponsePrivate(
    UpdateServerResponse * const q) : TransferResponsePrivate(q)
{

}

/*!
 * Parses a Transfer UpdateServer response element from \a xml.
 */
void UpdateServerResponsePrivate::parseUpdateServerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateServerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transfer
} // namespace QtAws
