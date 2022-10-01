// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteconnectorresponse.h"
#include "deleteconnectorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::DeleteConnectorResponse
 * \brief The DeleteConnectorResponse class provides an interace for Transfer DeleteConnector responses.
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
 * \sa TransferClient::deleteConnector
 */

/*!
 * Constructs a DeleteConnectorResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteConnectorResponse::DeleteConnectorResponse(
        const DeleteConnectorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TransferResponse(new DeleteConnectorResponsePrivate(this), parent)
{
    setRequest(new DeleteConnectorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteConnectorRequest * DeleteConnectorResponse::request() const
{
    Q_D(const DeleteConnectorResponse);
    return static_cast<const DeleteConnectorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transfer DeleteConnector \a response.
 */
void DeleteConnectorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteConnectorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transfer::DeleteConnectorResponsePrivate
 * \brief The DeleteConnectorResponsePrivate class provides private implementation for DeleteConnectorResponse.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a DeleteConnectorResponsePrivate object with public implementation \a q.
 */
DeleteConnectorResponsePrivate::DeleteConnectorResponsePrivate(
    DeleteConnectorResponse * const q) : TransferResponsePrivate(q)
{

}

/*!
 * Parses a Transfer DeleteConnector response element from \a xml.
 */
void DeleteConnectorResponsePrivate::parseDeleteConnectorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteConnectorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transfer
} // namespace QtAws
