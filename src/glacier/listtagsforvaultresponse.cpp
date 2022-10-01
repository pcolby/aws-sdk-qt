// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtagsforvaultresponse.h"
#include "listtagsforvaultresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glacier {

/*!
 * \class QtAws::Glacier::ListTagsForVaultResponse
 * \brief The ListTagsForVaultResponse class provides an interace for Glacier ListTagsForVault responses.
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
 * \sa GlacierClient::listTagsForVault
 */

/*!
 * Constructs a ListTagsForVaultResponse object for \a reply to \a request, with parent \a parent.
 */
ListTagsForVaultResponse::ListTagsForVaultResponse(
        const ListTagsForVaultRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlacierResponse(new ListTagsForVaultResponsePrivate(this), parent)
{
    setRequest(new ListTagsForVaultRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTagsForVaultRequest * ListTagsForVaultResponse::request() const
{
    Q_D(const ListTagsForVaultResponse);
    return static_cast<const ListTagsForVaultRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glacier ListTagsForVault \a response.
 */
void ListTagsForVaultResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTagsForVaultResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glacier::ListTagsForVaultResponsePrivate
 * \brief The ListTagsForVaultResponsePrivate class provides private implementation for ListTagsForVaultResponse.
 * \internal
 *
 * \inmodule QtAwsGlacier
 */

/*!
 * Constructs a ListTagsForVaultResponsePrivate object with public implementation \a q.
 */
ListTagsForVaultResponsePrivate::ListTagsForVaultResponsePrivate(
    ListTagsForVaultResponse * const q) : GlacierResponsePrivate(q)
{

}

/*!
 * Parses a Glacier ListTagsForVault response element from \a xml.
 */
void ListTagsForVaultResponsePrivate::parseListTagsForVaultResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTagsForVaultResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glacier
} // namespace QtAws
