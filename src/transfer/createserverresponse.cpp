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

#include "createserverresponse.h"
#include "createserverresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::CreateServerResponse
 * \brief The CreateServerResponse class provides an interace for Transfer CreateServer responses.
 *
 * \inmodule QtAwsTransfer
 *
 *  AWS Transfer for SFTP is a fully managed service that enables the transfer of files directly into and out of Amazon S3
 *  using the Secure File Transfer Protocol (SFTP)—also known as Secure Shell (SSH) File Transfer Protocol. AWS helps you
 *  seamlessly migrate your file transfer workflows to AWS Transfer for SFTP—by integrating with existing authentication
 *  systems, and providing DNS routing with Amazon Route 53—so nothing changes for your customers and partners, or their
 *  applications. With your data in S3, you can use it with AWS services for processing, analytics, machine learning, and
 *  archiving. Getting started with AWS Transfer for SFTP (AWS SFTP) is easy; there is no infrastructure to buy and setup.
 *
 * \sa TransferClient::createServer
 */

/*!
 * Constructs a CreateServerResponse object for \a reply to \a request, with parent \a parent.
 */
CreateServerResponse::CreateServerResponse(
        const CreateServerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TransferResponse(new CreateServerResponsePrivate(this), parent)
{
    setRequest(new CreateServerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateServerRequest * CreateServerResponse::request() const
{
    Q_D(const CreateServerResponse);
    return static_cast<const CreateServerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transfer CreateServer \a response.
 */
void CreateServerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateServerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transfer::CreateServerResponsePrivate
 * \brief The CreateServerResponsePrivate class provides private implementation for CreateServerResponse.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a CreateServerResponsePrivate object with public implementation \a q.
 */
CreateServerResponsePrivate::CreateServerResponsePrivate(
    CreateServerResponse * const q) : TransferResponsePrivate(q)
{

}

/*!
 * Parses a Transfer CreateServer response element from \a xml.
 */
void CreateServerResponsePrivate::parseCreateServerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateServerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transfer
} // namespace QtAws
