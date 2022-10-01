// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listconnectorsresponse.h"
#include "listconnectorsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::ListConnectorsResponse
 * \brief The ListConnectorsResponse class provides an interace for Transfer ListConnectors responses.
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
 * \sa TransferClient::listConnectors
 */

/*!
 * Constructs a ListConnectorsResponse object for \a reply to \a request, with parent \a parent.
 */
ListConnectorsResponse::ListConnectorsResponse(
        const ListConnectorsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TransferResponse(new ListConnectorsResponsePrivate(this), parent)
{
    setRequest(new ListConnectorsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListConnectorsRequest * ListConnectorsResponse::request() const
{
    Q_D(const ListConnectorsResponse);
    return static_cast<const ListConnectorsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transfer ListConnectors \a response.
 */
void ListConnectorsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListConnectorsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transfer::ListConnectorsResponsePrivate
 * \brief The ListConnectorsResponsePrivate class provides private implementation for ListConnectorsResponse.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a ListConnectorsResponsePrivate object with public implementation \a q.
 */
ListConnectorsResponsePrivate::ListConnectorsResponsePrivate(
    ListConnectorsResponse * const q) : TransferResponsePrivate(q)
{

}

/*!
 * Parses a Transfer ListConnectors response element from \a xml.
 */
void ListConnectorsResponsePrivate::parseListConnectorsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListConnectorsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transfer
} // namespace QtAws
