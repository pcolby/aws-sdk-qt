/*
    Copyright 2013-2020 Paul Colby

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

#include "uploadmultipartpartresponse.h"
#include "uploadmultipartpartresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glacier {

/*!
 * \class QtAws::Glacier::UploadMultipartPartResponse
 * \brief The UploadMultipartPartResponse class provides an interace for Glacier UploadMultipartPart responses.
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
 * \sa GlacierClient::uploadMultipartPart
 */

/*!
 * Constructs a UploadMultipartPartResponse object for \a reply to \a request, with parent \a parent.
 */
UploadMultipartPartResponse::UploadMultipartPartResponse(
        const UploadMultipartPartRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlacierResponse(new UploadMultipartPartResponsePrivate(this), parent)
{
    setRequest(new UploadMultipartPartRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UploadMultipartPartRequest * UploadMultipartPartResponse::request() const
{
    Q_D(const UploadMultipartPartResponse);
    return static_cast<const UploadMultipartPartRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glacier UploadMultipartPart \a response.
 */
void UploadMultipartPartResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UploadMultipartPartResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glacier::UploadMultipartPartResponsePrivate
 * \brief The UploadMultipartPartResponsePrivate class provides private implementation for UploadMultipartPartResponse.
 * \internal
 *
 * \inmodule QtAwsGlacier
 */

/*!
 * Constructs a UploadMultipartPartResponsePrivate object with public implementation \a q.
 */
UploadMultipartPartResponsePrivate::UploadMultipartPartResponsePrivate(
    UploadMultipartPartResponse * const q) : GlacierResponsePrivate(q)
{

}

/*!
 * Parses a Glacier UploadMultipartPart response element from \a xml.
 */
void UploadMultipartPartResponsePrivate::parseUploadMultipartPartResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UploadMultipartPartResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glacier
} // namespace QtAws
