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

#include "putobjecttaggingresponse.h"
#include "putobjecttaggingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutObjectTaggingResponse
 * \brief The PutObjectTaggingResponse class provides an interace for S3 PutObjectTagging responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putObjectTagging
 */

/*!
 * Constructs a PutObjectTaggingResponse object for \a reply to \a request, with parent \a parent.
 */
PutObjectTaggingResponse::PutObjectTaggingResponse(
        const PutObjectTaggingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new PutObjectTaggingResponsePrivate(this), parent)
{
    setRequest(new PutObjectTaggingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutObjectTaggingRequest * PutObjectTaggingResponse::request() const
{
    Q_D(const PutObjectTaggingResponse);
    return static_cast<const PutObjectTaggingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 PutObjectTagging \a response.
 */
void PutObjectTaggingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutObjectTaggingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::PutObjectTaggingResponsePrivate
 * \brief The PutObjectTaggingResponsePrivate class provides private implementation for PutObjectTaggingResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutObjectTaggingResponsePrivate object with public implementation \a q.
 */
PutObjectTaggingResponsePrivate::PutObjectTaggingResponsePrivate(
    PutObjectTaggingResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 PutObjectTagging response element from \a xml.
 */
void PutObjectTaggingResponsePrivate::parsePutObjectTaggingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutObjectTaggingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
