// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listaccessesresponse.h"
#include "listaccessesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::ListAccessesResponse
 * \brief The ListAccessesResponse class provides an interace for Transfer ListAccesses responses.
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
 * \sa TransferClient::listAccesses
 */

/*!
 * Constructs a ListAccessesResponse object for \a reply to \a request, with parent \a parent.
 */
ListAccessesResponse::ListAccessesResponse(
        const ListAccessesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TransferResponse(new ListAccessesResponsePrivate(this), parent)
{
    setRequest(new ListAccessesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAccessesRequest * ListAccessesResponse::request() const
{
    Q_D(const ListAccessesResponse);
    return static_cast<const ListAccessesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transfer ListAccesses \a response.
 */
void ListAccessesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAccessesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transfer::ListAccessesResponsePrivate
 * \brief The ListAccessesResponsePrivate class provides private implementation for ListAccessesResponse.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a ListAccessesResponsePrivate object with public implementation \a q.
 */
ListAccessesResponsePrivate::ListAccessesResponsePrivate(
    ListAccessesResponse * const q) : TransferResponsePrivate(q)
{

}

/*!
 * Parses a Transfer ListAccesses response element from \a xml.
 */
void ListAccessesResponsePrivate::parseListAccessesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAccessesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transfer
} // namespace QtAws
