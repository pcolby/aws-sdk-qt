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

#include "deletepublicaccessblockresponse.h"
#include "deletepublicaccessblockresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::DeletePublicAccessBlockResponse
 * \brief The DeletePublicAccessBlockResponse class provides an interace for S3 DeletePublicAccessBlock responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::deletePublicAccessBlock
 */

/*!
 * Constructs a DeletePublicAccessBlockResponse object for \a reply to \a request, with parent \a parent.
 */
DeletePublicAccessBlockResponse::DeletePublicAccessBlockResponse(
        const DeletePublicAccessBlockRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new DeletePublicAccessBlockResponsePrivate(this), parent)
{
    setRequest(new DeletePublicAccessBlockRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeletePublicAccessBlockRequest * DeletePublicAccessBlockResponse::request() const
{
    Q_D(const DeletePublicAccessBlockResponse);
    return static_cast<const DeletePublicAccessBlockRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 DeletePublicAccessBlock \a response.
 */
void DeletePublicAccessBlockResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeletePublicAccessBlockResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::DeletePublicAccessBlockResponsePrivate
 * \brief The DeletePublicAccessBlockResponsePrivate class provides private implementation for DeletePublicAccessBlockResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a DeletePublicAccessBlockResponsePrivate object with public implementation \a q.
 */
DeletePublicAccessBlockResponsePrivate::DeletePublicAccessBlockResponsePrivate(
    DeletePublicAccessBlockResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 DeletePublicAccessBlock response element from \a xml.
 */
void DeletePublicAccessBlockResponsePrivate::parseDeletePublicAccessBlockResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePublicAccessBlockResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
