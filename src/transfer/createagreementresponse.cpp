// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createagreementresponse.h"
#include "createagreementresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::CreateAgreementResponse
 * \brief The CreateAgreementResponse class provides an interace for Transfer CreateAgreement responses.
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
 * \sa TransferClient::createAgreement
 */

/*!
 * Constructs a CreateAgreementResponse object for \a reply to \a request, with parent \a parent.
 */
CreateAgreementResponse::CreateAgreementResponse(
        const CreateAgreementRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TransferResponse(new CreateAgreementResponsePrivate(this), parent)
{
    setRequest(new CreateAgreementRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateAgreementRequest * CreateAgreementResponse::request() const
{
    Q_D(const CreateAgreementResponse);
    return static_cast<const CreateAgreementRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transfer CreateAgreement \a response.
 */
void CreateAgreementResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateAgreementResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transfer::CreateAgreementResponsePrivate
 * \brief The CreateAgreementResponsePrivate class provides private implementation for CreateAgreementResponse.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a CreateAgreementResponsePrivate object with public implementation \a q.
 */
CreateAgreementResponsePrivate::CreateAgreementResponsePrivate(
    CreateAgreementResponse * const q) : TransferResponsePrivate(q)
{

}

/*!
 * Parses a Transfer CreateAgreement response element from \a xml.
 */
void CreateAgreementResponsePrivate::parseCreateAgreementResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAgreementResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transfer
} // namespace QtAws
