// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listusersresponse.h"
#include "listusersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::ListUsersResponse
 * \brief The ListUsersResponse class provides an interace for Transfer ListUsers responses.
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
 * \sa TransferClient::listUsers
 */

/*!
 * Constructs a ListUsersResponse object for \a reply to \a request, with parent \a parent.
 */
ListUsersResponse::ListUsersResponse(
        const ListUsersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TransferResponse(new ListUsersResponsePrivate(this), parent)
{
    setRequest(new ListUsersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListUsersRequest * ListUsersResponse::request() const
{
    Q_D(const ListUsersResponse);
    return static_cast<const ListUsersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transfer ListUsers \a response.
 */
void ListUsersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListUsersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transfer::ListUsersResponsePrivate
 * \brief The ListUsersResponsePrivate class provides private implementation for ListUsersResponse.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a ListUsersResponsePrivate object with public implementation \a q.
 */
ListUsersResponsePrivate::ListUsersResponsePrivate(
    ListUsersResponse * const q) : TransferResponsePrivate(q)
{

}

/*!
 * Parses a Transfer ListUsers response element from \a xml.
 */
void ListUsersResponsePrivate::parseListUsersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListUsersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transfer
} // namespace QtAws
