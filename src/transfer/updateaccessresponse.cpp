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

#include "updateaccessresponse.h"
#include "updateaccessresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::UpdateAccessResponse
 * \brief The UpdateAccessResponse class provides an interace for Transfer UpdateAccess responses.
 *
 * \inmodule QtAwsTransfer
 *
 *  AWS Transfer Family is a fully managed service that enables the transfer of files over the File Transfer Protocol (FTP),
 *  File Transfer Protocol over SSL (FTPS), or Secure Shell (SSH) File Transfer Protocol (SFTP) directly into and out of
 *  Amazon Simple Storage Service (Amazon S3). AWS helps you seamlessly migrate your file transfer workflows to AWS Transfer
 *  Family by integrating with existing authentication systems, and providing DNS routing with Amazon Route 53 so nothing
 *  changes for your customers and partners, or their applications. With your data in Amazon S3, you can use it with AWS
 *  services for processing, analytics, machine learning, and archiving. Getting started with AWS Transfer Family is easy
 *  since there is no infrastructure to buy and set
 *
 * \sa TransferClient::updateAccess
 */

/*!
 * Constructs a UpdateAccessResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateAccessResponse::UpdateAccessResponse(
        const UpdateAccessRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TransferResponse(new UpdateAccessResponsePrivate(this), parent)
{
    setRequest(new UpdateAccessRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateAccessRequest * UpdateAccessResponse::request() const
{
    return static_cast<const UpdateAccessRequest *>(TransferResponse::request());
}

/*!
 * \reimp
 * Parses a successful Transfer UpdateAccess \a response.
 */
void UpdateAccessResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateAccessResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transfer::UpdateAccessResponsePrivate
 * \brief The UpdateAccessResponsePrivate class provides private implementation for UpdateAccessResponse.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a UpdateAccessResponsePrivate object with public implementation \a q.
 */
UpdateAccessResponsePrivate::UpdateAccessResponsePrivate(
    UpdateAccessResponse * const q) : TransferResponsePrivate(q)
{

}

/*!
 * Parses a Transfer UpdateAccess response element from \a xml.
 */
void UpdateAccessResponsePrivate::parseUpdateAccessResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAccessResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transfer
} // namespace QtAws
