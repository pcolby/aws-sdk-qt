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

#include "deletevaultaccesspolicyresponse.h"
#include "deletevaultaccesspolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glacier {

/*!
 * \class QtAws::Glacier::DeleteVaultAccessPolicyResponse
 * \brief The DeleteVaultAccessPolicyResponse class provides an interace for Glacier DeleteVaultAccessPolicy responses.
 *
 * \inmodule QtAwsGlacier
 *
 *  Amazon S3 Glacier (Glacier) is a storage solution for "cold
 * 
 *  data.>
 * 
 *  Glacier is an extremely low-cost storage service that provides secure, durable, and easy-to-use storage for data backup
 *  and archival. With Glacier, customers can store their data cost effectively for months, years, or decades. Glacier also
 *  enables customers to offload the administrative burdens of operating and scaling storage to AWS, so they don't have to
 *  worry about capacity planning, hardware provisioning, data replication, hardware failure and recovery, or time-consuming
 *  hardware
 * 
 *  migrations>
 * 
 *  Glacier is a great storage choice when low storage cost is paramount and your data is rarely retrieved. If your
 *  application requires fast or frequent access to your data, consider using Amazon S3. For more information, see <a
 *  href="http://aws.amazon.com/s3/">Amazon Simple Storage Service (Amazon
 * 
 *  S3)</a>>
 * 
 *  You can store any kind of data in any format. There is no maximum limit on the total amount of data you can store in
 * 
 *  Glacier>
 * 
 *  If you are a first-time user of Glacier, we recommend that you begin by reading the following sections in the <i>Amazon
 *  S3 Glacier Developer
 * 
 *  Guide</i>> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/amazonglacier/latest/dev/introduction.html">What is Amazon S3 Glacier</a> - This
 *  section of the Developer Guide describes the underlying data model, the operations it supports, and the AWS SDKs that
 *  you can use to interact with the
 * 
 *  service> </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/amazonglacier/latest/dev/amazon-glacier-getting-started.html">Getting Started with
 *  Amazon S3 Glacier</a> - The Getting Started section walks you through the process of creating a vault, uploading
 *  archives, creating jobs to download archives, retrieving the job output, and deleting
 *
 * \sa GlacierClient::deleteVaultAccessPolicy
 */

/*!
 * Constructs a DeleteVaultAccessPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteVaultAccessPolicyResponse::DeleteVaultAccessPolicyResponse(
        const DeleteVaultAccessPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlacierResponse(new DeleteVaultAccessPolicyResponsePrivate(this), parent)
{
    setRequest(new DeleteVaultAccessPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteVaultAccessPolicyRequest * DeleteVaultAccessPolicyResponse::request() const
{
    Q_D(const DeleteVaultAccessPolicyResponse);
    return static_cast<const DeleteVaultAccessPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glacier DeleteVaultAccessPolicy \a response.
 */
void DeleteVaultAccessPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteVaultAccessPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glacier::DeleteVaultAccessPolicyResponsePrivate
 * \brief The DeleteVaultAccessPolicyResponsePrivate class provides private implementation for DeleteVaultAccessPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsGlacier
 */

/*!
 * Constructs a DeleteVaultAccessPolicyResponsePrivate object with public implementation \a q.
 */
DeleteVaultAccessPolicyResponsePrivate::DeleteVaultAccessPolicyResponsePrivate(
    DeleteVaultAccessPolicyResponse * const q) : GlacierResponsePrivate(q)
{

}

/*!
 * Parses a Glacier DeleteVaultAccessPolicy response element from \a xml.
 */
void DeleteVaultAccessPolicyResponsePrivate::parseDeleteVaultAccessPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteVaultAccessPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glacier
} // namespace QtAws
