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

#include "removetagsfromvaultresponse.h"
#include "removetagsfromvaultresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glacier {

/*!
 * \class QtAws::Glacier::RemoveTagsFromVaultResponse
 * \brief The RemoveTagsFromVaultResponse class provides an interace for Glacier RemoveTagsFromVault responses.
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
 * \sa GlacierClient::removeTagsFromVault
 */

/*!
 * Constructs a RemoveTagsFromVaultResponse object for \a reply to \a request, with parent \a parent.
 */
RemoveTagsFromVaultResponse::RemoveTagsFromVaultResponse(
        const RemoveTagsFromVaultRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlacierResponse(new RemoveTagsFromVaultResponsePrivate(this), parent)
{
    setRequest(new RemoveTagsFromVaultRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RemoveTagsFromVaultRequest * RemoveTagsFromVaultResponse::request() const
{
    Q_D(const RemoveTagsFromVaultResponse);
    return static_cast<const RemoveTagsFromVaultRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glacier RemoveTagsFromVault \a response.
 */
void RemoveTagsFromVaultResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RemoveTagsFromVaultResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glacier::RemoveTagsFromVaultResponsePrivate
 * \brief The RemoveTagsFromVaultResponsePrivate class provides private implementation for RemoveTagsFromVaultResponse.
 * \internal
 *
 * \inmodule QtAwsGlacier
 */

/*!
 * Constructs a RemoveTagsFromVaultResponsePrivate object with public implementation \a q.
 */
RemoveTagsFromVaultResponsePrivate::RemoveTagsFromVaultResponsePrivate(
    RemoveTagsFromVaultResponse * const q) : GlacierResponsePrivate(q)
{

}

/*!
 * Parses a Glacier RemoveTagsFromVault response element from \a xml.
 */
void RemoveTagsFromVaultResponsePrivate::parseRemoveTagsFromVaultResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveTagsFromVaultResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glacier
} // namespace QtAws
