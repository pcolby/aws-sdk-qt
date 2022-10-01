// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsecuritypoliciesresponse.h"
#include "listsecuritypoliciesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::ListSecurityPoliciesResponse
 * \brief The ListSecurityPoliciesResponse class provides an interace for Transfer ListSecurityPolicies responses.
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
 * \sa TransferClient::listSecurityPolicies
 */

/*!
 * Constructs a ListSecurityPoliciesResponse object for \a reply to \a request, with parent \a parent.
 */
ListSecurityPoliciesResponse::ListSecurityPoliciesResponse(
        const ListSecurityPoliciesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TransferResponse(new ListSecurityPoliciesResponsePrivate(this), parent)
{
    setRequest(new ListSecurityPoliciesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSecurityPoliciesRequest * ListSecurityPoliciesResponse::request() const
{
    Q_D(const ListSecurityPoliciesResponse);
    return static_cast<const ListSecurityPoliciesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transfer ListSecurityPolicies \a response.
 */
void ListSecurityPoliciesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSecurityPoliciesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transfer::ListSecurityPoliciesResponsePrivate
 * \brief The ListSecurityPoliciesResponsePrivate class provides private implementation for ListSecurityPoliciesResponse.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a ListSecurityPoliciesResponsePrivate object with public implementation \a q.
 */
ListSecurityPoliciesResponsePrivate::ListSecurityPoliciesResponsePrivate(
    ListSecurityPoliciesResponse * const q) : TransferResponsePrivate(q)
{

}

/*!
 * Parses a Transfer ListSecurityPolicies response element from \a xml.
 */
void ListSecurityPoliciesResponsePrivate::parseListSecurityPoliciesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSecurityPoliciesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transfer
} // namespace QtAws
