// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listprofilesresponse.h"
#include "listprofilesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::ListProfilesResponse
 * \brief The ListProfilesResponse class provides an interace for Transfer ListProfiles responses.
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
 * \sa TransferClient::listProfiles
 */

/*!
 * Constructs a ListProfilesResponse object for \a reply to \a request, with parent \a parent.
 */
ListProfilesResponse::ListProfilesResponse(
        const ListProfilesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TransferResponse(new ListProfilesResponsePrivate(this), parent)
{
    setRequest(new ListProfilesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListProfilesRequest * ListProfilesResponse::request() const
{
    Q_D(const ListProfilesResponse);
    return static_cast<const ListProfilesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transfer ListProfiles \a response.
 */
void ListProfilesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListProfilesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transfer::ListProfilesResponsePrivate
 * \brief The ListProfilesResponsePrivate class provides private implementation for ListProfilesResponse.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a ListProfilesResponsePrivate object with public implementation \a q.
 */
ListProfilesResponsePrivate::ListProfilesResponsePrivate(
    ListProfilesResponse * const q) : TransferResponsePrivate(q)
{

}

/*!
 * Parses a Transfer ListProfiles response element from \a xml.
 */
void ListProfilesResponsePrivate::parseListProfilesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListProfilesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transfer
} // namespace QtAws
