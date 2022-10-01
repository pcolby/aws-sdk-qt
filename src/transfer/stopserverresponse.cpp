// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopserverresponse.h"
#include "stopserverresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::StopServerResponse
 * \brief The StopServerResponse class provides an interace for Transfer StopServer responses.
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
 * \sa TransferClient::stopServer
 */

/*!
 * Constructs a StopServerResponse object for \a reply to \a request, with parent \a parent.
 */
StopServerResponse::StopServerResponse(
        const StopServerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TransferResponse(new StopServerResponsePrivate(this), parent)
{
    setRequest(new StopServerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopServerRequest * StopServerResponse::request() const
{
    Q_D(const StopServerResponse);
    return static_cast<const StopServerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transfer StopServer \a response.
 */
void StopServerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopServerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transfer::StopServerResponsePrivate
 * \brief The StopServerResponsePrivate class provides private implementation for StopServerResponse.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a StopServerResponsePrivate object with public implementation \a q.
 */
StopServerResponsePrivate::StopServerResponsePrivate(
    StopServerResponse * const q) : TransferResponsePrivate(q)
{

}

/*!
 * Parses a Transfer StopServer response element from \a xml.
 */
void StopServerResponsePrivate::parseStopServerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopServerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transfer
} // namespace QtAws
