// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listserversresponse.h"
#include "listserversresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::ListServersResponse
 * \brief The ListServersResponse class provides an interace for Transfer ListServers responses.
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
 * \sa TransferClient::listServers
 */

/*!
 * Constructs a ListServersResponse object for \a reply to \a request, with parent \a parent.
 */
ListServersResponse::ListServersResponse(
        const ListServersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TransferResponse(new ListServersResponsePrivate(this), parent)
{
    setRequest(new ListServersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListServersRequest * ListServersResponse::request() const
{
    Q_D(const ListServersResponse);
    return static_cast<const ListServersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transfer ListServers \a response.
 */
void ListServersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListServersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transfer::ListServersResponsePrivate
 * \brief The ListServersResponsePrivate class provides private implementation for ListServersResponse.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a ListServersResponsePrivate object with public implementation \a q.
 */
ListServersResponsePrivate::ListServersResponsePrivate(
    ListServersResponse * const q) : TransferResponsePrivate(q)
{

}

/*!
 * Parses a Transfer ListServers response element from \a xml.
 */
void ListServersResponsePrivate::parseListServersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListServersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transfer
} // namespace QtAws
