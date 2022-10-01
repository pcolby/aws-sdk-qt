// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteworkflowresponse.h"
#include "deleteworkflowresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::DeleteWorkflowResponse
 * \brief The DeleteWorkflowResponse class provides an interace for Transfer DeleteWorkflow responses.
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
 * \sa TransferClient::deleteWorkflow
 */

/*!
 * Constructs a DeleteWorkflowResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteWorkflowResponse::DeleteWorkflowResponse(
        const DeleteWorkflowRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TransferResponse(new DeleteWorkflowResponsePrivate(this), parent)
{
    setRequest(new DeleteWorkflowRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteWorkflowRequest * DeleteWorkflowResponse::request() const
{
    Q_D(const DeleteWorkflowResponse);
    return static_cast<const DeleteWorkflowRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transfer DeleteWorkflow \a response.
 */
void DeleteWorkflowResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteWorkflowResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transfer::DeleteWorkflowResponsePrivate
 * \brief The DeleteWorkflowResponsePrivate class provides private implementation for DeleteWorkflowResponse.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a DeleteWorkflowResponsePrivate object with public implementation \a q.
 */
DeleteWorkflowResponsePrivate::DeleteWorkflowResponsePrivate(
    DeleteWorkflowResponse * const q) : TransferResponsePrivate(q)
{

}

/*!
 * Parses a Transfer DeleteWorkflow response element from \a xml.
 */
void DeleteWorkflowResponsePrivate::parseDeleteWorkflowResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteWorkflowResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transfer
} // namespace QtAws
