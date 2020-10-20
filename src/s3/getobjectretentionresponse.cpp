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

#include "getobjectretentionresponse.h"
#include "getobjectretentionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetObjectRetentionResponse
 * \brief The GetObjectRetentionResponse class provides an interace for S3 GetObjectRetention responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getObjectRetention
 */

/*!
 * Constructs a GetObjectRetentionResponse object for \a reply to \a request, with parent \a parent.
 */
GetObjectRetentionResponse::GetObjectRetentionResponse(
        const GetObjectRetentionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetObjectRetentionResponsePrivate(this), parent)
{
    setRequest(new GetObjectRetentionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetObjectRetentionRequest * GetObjectRetentionResponse::request() const
{
    Q_D(const GetObjectRetentionResponse);
    return static_cast<const GetObjectRetentionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 GetObjectRetention \a response.
 */
void GetObjectRetentionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetObjectRetentionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::GetObjectRetentionResponsePrivate
 * \brief The GetObjectRetentionResponsePrivate class provides private implementation for GetObjectRetentionResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetObjectRetentionResponsePrivate object with public implementation \a q.
 */
GetObjectRetentionResponsePrivate::GetObjectRetentionResponsePrivate(
    GetObjectRetentionResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 GetObjectRetention response element from \a xml.
 */
void GetObjectRetentionResponsePrivate::parseGetObjectRetentionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetObjectRetentionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
