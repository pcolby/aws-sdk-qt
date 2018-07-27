/*
    Copyright 2013-2018 Paul Colby

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

#include "uploadpartresponse.h"
#include "uploadpartresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::UploadPartResponse
 * \brief The UploadPartResponse class provides an interace for S3 UploadPart responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::uploadPart
 */

/*!
 * Constructs a UploadPartResponse object for \a reply to \a request, with parent \a parent.
 */
UploadPartResponse::UploadPartResponse(
        const UploadPartRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new UploadPartResponsePrivate(this), parent)
{
    setRequest(new UploadPartRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UploadPartRequest * UploadPartResponse::request() const
{
    Q_D(const UploadPartResponse);
    return static_cast<const UploadPartRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 UploadPart \a response.
 */
void UploadPartResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UploadPartResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::UploadPartResponsePrivate
 * \brief The UploadPartResponsePrivate class provides private implementation for UploadPartResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a UploadPartResponsePrivate object with public implementation \a q.
 */
UploadPartResponsePrivate::UploadPartResponsePrivate(
    UploadPartResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 UploadPart response element from \a xml.
 */
void UploadPartResponsePrivate::parseUploadPartResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UploadPartResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
