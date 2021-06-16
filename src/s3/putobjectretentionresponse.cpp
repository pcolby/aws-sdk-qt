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

#include "putobjectretentionresponse.h"
#include "putobjectretentionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutObjectRetentionResponse
 * \brief The PutObjectRetentionResponse class provides an interace for S3 PutObjectRetention responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putObjectRetention
 */

/*!
 * Constructs a PutObjectRetentionResponse object for \a reply to \a request, with parent \a parent.
 */
PutObjectRetentionResponse::PutObjectRetentionResponse(
        const PutObjectRetentionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new PutObjectRetentionResponsePrivate(this), parent)
{
    setRequest(new PutObjectRetentionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutObjectRetentionRequest * PutObjectRetentionResponse::request() const
{
    Q_D(const PutObjectRetentionResponse);
    return static_cast<const PutObjectRetentionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 PutObjectRetention \a response.
 */
void PutObjectRetentionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutObjectRetentionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::PutObjectRetentionResponsePrivate
 * \brief The PutObjectRetentionResponsePrivate class provides private implementation for PutObjectRetentionResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutObjectRetentionResponsePrivate object with public implementation \a q.
 */
PutObjectRetentionResponsePrivate::PutObjectRetentionResponsePrivate(
    PutObjectRetentionResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 PutObjectRetention response element from \a xml.
 */
void PutObjectRetentionResponsePrivate::parsePutObjectRetentionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutObjectRetentionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
