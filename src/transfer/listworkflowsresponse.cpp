// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listworkflowsresponse.h"
#include "listworkflowsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::ListWorkflowsResponse
 * \brief The ListWorkflowsResponse class provides an interace for Transfer ListWorkflows responses.
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
 * \sa TransferClient::listWorkflows
 */

/*!
 * Constructs a ListWorkflowsResponse object for \a reply to \a request, with parent \a parent.
 */
ListWorkflowsResponse::ListWorkflowsResponse(
        const ListWorkflowsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TransferResponse(new ListWorkflowsResponsePrivate(this), parent)
{
    setRequest(new ListWorkflowsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListWorkflowsRequest * ListWorkflowsResponse::request() const
{
    Q_D(const ListWorkflowsResponse);
    return static_cast<const ListWorkflowsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transfer ListWorkflows \a response.
 */
void ListWorkflowsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListWorkflowsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transfer::ListWorkflowsResponsePrivate
 * \brief The ListWorkflowsResponsePrivate class provides private implementation for ListWorkflowsResponse.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a ListWorkflowsResponsePrivate object with public implementation \a q.
 */
ListWorkflowsResponsePrivate::ListWorkflowsResponsePrivate(
    ListWorkflowsResponse * const q) : TransferResponsePrivate(q)
{

}

/*!
 * Parses a Transfer ListWorkflows response element from \a xml.
 */
void ListWorkflowsResponsePrivate::parseListWorkflowsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListWorkflowsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transfer
} // namespace QtAws
