/*
    Copyright 2013-2019 Paul Colby

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

#include "addtagstovaultresponse.h"
#include "addtagstovaultresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glacier {

/*!
 * \class QtAws::Glacier::AddTagsToVaultResponse
 * \brief The AddTagsToVaultResponse class provides an interace for Glacier AddTagsToVault responses.
 *
 * \inmodule QtAwsGlacier
 *
 *  Amazon Glacier is a storage solution for "cold
 * 
 *  data.>
 * 
 *  Amazon Glacier is an extremely low-cost storage service that provides secure, durable, and easy-to-use storage for data
 *  backup and archival. With Amazon Glacier, customers can store their data cost effectively for months, years, or decades.
 *  Amazon Glacier also enables customers to offload the administrative burdens of operating and scaling storage to AWS, so
 *  they don't have to worry about capacity planning, hardware provisioning, data replication, hardware failure and
 *  recovery, or time-consuming hardware
 * 
 *  migrations>
 * 
 *  Amazon Glacier is a great storage choice when low storage cost is paramount and your data is rarely retrieved. If your
 *  application requires fast or frequent access to your data, consider using Amazon S3. For more information, see <a
 *  href="http://aws.amazon.com/s3/">Amazon Simple Storage Service (Amazon
 * 
 *  S3)</a>>
 * 
 *  You can store any kind of data in any format. There is no maximum limit on the total amount of data you can store in
 *  Amazon
 * 
 *  Glacier>
 * 
 *  If you are a first-time user of Amazon Glacier, we recommend that you begin by reading the following sections in the
 *  <i>Amazon Glacier Developer
 * 
 *  Guide</i>> <ul> <li>
 * 
 *  <a href="http://docs.aws.amazon.com/amazonglacier/latest/dev/introduction.html">What is Amazon Glacier</a> - This
 *  section of the Developer Guide describes the underlying data model, the operations it supports, and the AWS SDKs that
 *  you can use to interact with the
 * 
 *  service> </li> <li>
 * 
 *  <a href="http://docs.aws.amazon.com/amazonglacier/latest/dev/amazon-glacier-getting-started.html">Getting Started with
 *  Amazon Glacier</a> - The Getting Started section walks you through the process of creating a vault, uploading archives,
 *  creating jobs to download archives, retrieving the job output, and deleting
 *
 * \sa GlacierClient::addTagsToVault
 */

/*!
 * Constructs a AddTagsToVaultResponse object for \a reply to \a request, with parent \a parent.
 */
AddTagsToVaultResponse::AddTagsToVaultResponse(
        const AddTagsToVaultRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlacierResponse(new AddTagsToVaultResponsePrivate(this), parent)
{
    setRequest(new AddTagsToVaultRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AddTagsToVaultRequest * AddTagsToVaultResponse::request() const
{
    Q_D(const AddTagsToVaultResponse);
    return static_cast<const AddTagsToVaultRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glacier AddTagsToVault \a response.
 */
void AddTagsToVaultResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AddTagsToVaultResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glacier::AddTagsToVaultResponsePrivate
 * \brief The AddTagsToVaultResponsePrivate class provides private implementation for AddTagsToVaultResponse.
 * \internal
 *
 * \inmodule QtAwsGlacier
 */

/*!
 * Constructs a AddTagsToVaultResponsePrivate object with public implementation \a q.
 */
AddTagsToVaultResponsePrivate::AddTagsToVaultResponsePrivate(
    AddTagsToVaultResponse * const q) : GlacierResponsePrivate(q)
{

}

/*!
 * Parses a Glacier AddTagsToVault response element from \a xml.
 */
void AddTagsToVaultResponsePrivate::parseAddTagsToVaultResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddTagsToVaultResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glacier
} // namespace QtAws
