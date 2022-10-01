// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createaccessresponse.h"
#include "createaccessresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::CreateAccessResponse
 * \brief The CreateAccessResponse class provides an interace for Transfer CreateAccess responses.
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
 * \sa TransferClient::createAccess
 */

/*!
 * Constructs a CreateAccessResponse object for \a reply to \a request, with parent \a parent.
 */
CreateAccessResponse::CreateAccessResponse(
        const CreateAccessRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TransferResponse(new CreateAccessResponsePrivate(this), parent)
{
    setRequest(new CreateAccessRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateAccessRequest * CreateAccessResponse::request() const
{
    Q_D(const CreateAccessResponse);
    return static_cast<const CreateAccessRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transfer CreateAccess \a response.
 */
void CreateAccessResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateAccessResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transfer::CreateAccessResponsePrivate
 * \brief The CreateAccessResponsePrivate class provides private implementation for CreateAccessResponse.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a CreateAccessResponsePrivate object with public implementation \a q.
 */
CreateAccessResponsePrivate::CreateAccessResponsePrivate(
    CreateAccessResponse * const q) : TransferResponsePrivate(q)
{

}

/*!
 * Parses a Transfer CreateAccess response element from \a xml.
 */
void CreateAccessResponsePrivate::parseCreateAccessResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAccessResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transfer
} // namespace QtAws
