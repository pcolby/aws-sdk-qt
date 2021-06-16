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

#include "writegetobjectresponseresponse.h"
#include "writegetobjectresponseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::WriteGetObjectResponseResponse
 * \brief The WriteGetObjectResponseResponse class provides an interace for S3 WriteGetObjectResponse responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::writeGetObjectResponse
 */

/*!
 * Constructs a WriteGetObjectResponseResponse object for \a reply to \a request, with parent \a parent.
 */
WriteGetObjectResponseResponse::WriteGetObjectResponseResponse(
        const WriteGetObjectResponseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new WriteGetObjectResponseResponsePrivate(this), parent)
{
    setRequest(new WriteGetObjectResponseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const WriteGetObjectResponseRequest * WriteGetObjectResponseResponse::request() const
{
    Q_D(const WriteGetObjectResponseResponse);
    return static_cast<const WriteGetObjectResponseRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 WriteGetObjectResponse \a response.
 */
void WriteGetObjectResponseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(WriteGetObjectResponseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::WriteGetObjectResponseResponsePrivate
 * \brief The WriteGetObjectResponseResponsePrivate class provides private implementation for WriteGetObjectResponseResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a WriteGetObjectResponseResponsePrivate object with public implementation \a q.
 */
WriteGetObjectResponseResponsePrivate::WriteGetObjectResponseResponsePrivate(
    WriteGetObjectResponseResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 WriteGetObjectResponse response element from \a xml.
 */
void WriteGetObjectResponseResponsePrivate::parseWriteGetObjectResponseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("WriteGetObjectResponseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
