// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sendworkflowstepstateresponse.h"
#include "sendworkflowstepstateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::SendWorkflowStepStateResponse
 * \brief The SendWorkflowStepStateResponse class provides an interace for Transfer SendWorkflowStepState responses.
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
 * \sa TransferClient::sendWorkflowStepState
 */

/*!
 * Constructs a SendWorkflowStepStateResponse object for \a reply to \a request, with parent \a parent.
 */
SendWorkflowStepStateResponse::SendWorkflowStepStateResponse(
        const SendWorkflowStepStateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TransferResponse(new SendWorkflowStepStateResponsePrivate(this), parent)
{
    setRequest(new SendWorkflowStepStateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SendWorkflowStepStateRequest * SendWorkflowStepStateResponse::request() const
{
    Q_D(const SendWorkflowStepStateResponse);
    return static_cast<const SendWorkflowStepStateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transfer SendWorkflowStepState \a response.
 */
void SendWorkflowStepStateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SendWorkflowStepStateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transfer::SendWorkflowStepStateResponsePrivate
 * \brief The SendWorkflowStepStateResponsePrivate class provides private implementation for SendWorkflowStepStateResponse.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a SendWorkflowStepStateResponsePrivate object with public implementation \a q.
 */
SendWorkflowStepStateResponsePrivate::SendWorkflowStepStateResponsePrivate(
    SendWorkflowStepStateResponse * const q) : TransferResponsePrivate(q)
{

}

/*!
 * Parses a Transfer SendWorkflowStepState response element from \a xml.
 */
void SendWorkflowStepStateResponsePrivate::parseSendWorkflowStepStateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendWorkflowStepStateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transfer
} // namespace QtAws
