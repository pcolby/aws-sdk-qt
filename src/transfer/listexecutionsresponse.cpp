/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listexecutionsresponse.h"
#include "listexecutionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::ListExecutionsResponse
 * \brief The ListExecutionsResponse class provides an interace for Transfer ListExecutions responses.
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
 * \sa TransferClient::listExecutions
 */

/*!
 * Constructs a ListExecutionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListExecutionsResponse::ListExecutionsResponse(
        const ListExecutionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TransferResponse(new ListExecutionsResponsePrivate(this), parent)
{
    setRequest(new ListExecutionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListExecutionsRequest * ListExecutionsResponse::request() const
{
    Q_D(const ListExecutionsResponse);
    return static_cast<const ListExecutionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transfer ListExecutions \a response.
 */
void ListExecutionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListExecutionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transfer::ListExecutionsResponsePrivate
 * \brief The ListExecutionsResponsePrivate class provides private implementation for ListExecutionsResponse.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a ListExecutionsResponsePrivate object with public implementation \a q.
 */
ListExecutionsResponsePrivate::ListExecutionsResponsePrivate(
    ListExecutionsResponse * const q) : TransferResponsePrivate(q)
{

}

/*!
 * Parses a Transfer ListExecutions response element from \a xml.
 */
void ListExecutionsResponsePrivate::parseListExecutionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListExecutionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transfer
} // namespace QtAws
