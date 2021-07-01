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

#include "uploadpartcopyresponse.h"
#include "uploadpartcopyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::UploadPartCopyResponse
 * \brief The UploadPartCopyResponse class provides an interace for S3 UploadPartCopy responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::uploadPartCopy
 */

/*!
 * Constructs a UploadPartCopyResponse object for \a reply to \a request, with parent \a parent.
 */
UploadPartCopyResponse::UploadPartCopyResponse(
        const UploadPartCopyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new UploadPartCopyResponsePrivate(this), parent)
{
    setRequest(new UploadPartCopyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UploadPartCopyRequest * UploadPartCopyResponse::request() const
{
    Q_D(const UploadPartCopyResponse);
    return static_cast<const UploadPartCopyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 UploadPartCopy \a response.
 */
void UploadPartCopyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UploadPartCopyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::UploadPartCopyResponsePrivate
 * \brief The UploadPartCopyResponsePrivate class provides private implementation for UploadPartCopyResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a UploadPartCopyResponsePrivate object with public implementation \a q.
 */
UploadPartCopyResponsePrivate::UploadPartCopyResponsePrivate(
    UploadPartCopyResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 UploadPartCopy response element from \a xml.
 */
void UploadPartCopyResponsePrivate::parseUploadPartCopyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UploadPartCopyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
