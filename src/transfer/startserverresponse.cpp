// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startserverresponse.h"
#include "startserverresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::StartServerResponse
 * \brief The StartServerResponse class provides an interace for Transfer StartServer responses.
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
 * \sa TransferClient::startServer
 */

/*!
 * Constructs a StartServerResponse object for \a reply to \a request, with parent \a parent.
 */
StartServerResponse::StartServerResponse(
        const StartServerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TransferResponse(new StartServerResponsePrivate(this), parent)
{
    setRequest(new StartServerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartServerRequest * StartServerResponse::request() const
{
    Q_D(const StartServerResponse);
    return static_cast<const StartServerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transfer StartServer \a response.
 */
void StartServerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartServerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transfer::StartServerResponsePrivate
 * \brief The StartServerResponsePrivate class provides private implementation for StartServerResponse.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a StartServerResponsePrivate object with public implementation \a q.
 */
StartServerResponsePrivate::StartServerResponsePrivate(
    StartServerResponse * const q) : TransferResponsePrivate(q)
{

}

/*!
 * Parses a Transfer StartServer response element from \a xml.
 */
void StartServerResponsePrivate::parseStartServerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartServerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transfer
} // namespace QtAws
