// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateconnectorresponse.h"
#include "updateconnectorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::UpdateConnectorResponse
 * \brief The UpdateConnectorResponse class provides an interace for Transfer UpdateConnector responses.
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
 * \sa TransferClient::updateConnector
 */

/*!
 * Constructs a UpdateConnectorResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateConnectorResponse::UpdateConnectorResponse(
        const UpdateConnectorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TransferResponse(new UpdateConnectorResponsePrivate(this), parent)
{
    setRequest(new UpdateConnectorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateConnectorRequest * UpdateConnectorResponse::request() const
{
    Q_D(const UpdateConnectorResponse);
    return static_cast<const UpdateConnectorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transfer UpdateConnector \a response.
 */
void UpdateConnectorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateConnectorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transfer::UpdateConnectorResponsePrivate
 * \brief The UpdateConnectorResponsePrivate class provides private implementation for UpdateConnectorResponse.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a UpdateConnectorResponsePrivate object with public implementation \a q.
 */
UpdateConnectorResponsePrivate::UpdateConnectorResponsePrivate(
    UpdateConnectorResponse * const q) : TransferResponsePrivate(q)
{

}

/*!
 * Parses a Transfer UpdateConnector response element from \a xml.
 */
void UpdateConnectorResponsePrivate::parseUpdateConnectorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateConnectorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transfer
} // namespace QtAws
