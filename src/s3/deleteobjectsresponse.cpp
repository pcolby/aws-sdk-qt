// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteobjectsresponse.h"
#include "deleteobjectsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::DeleteObjectsResponse
 * \brief The DeleteObjectsResponse class provides an interace for S3 DeleteObjects responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::deleteObjects
 */

/*!
 * Constructs a DeleteObjectsResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteObjectsResponse::DeleteObjectsResponse(
        const DeleteObjectsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new DeleteObjectsResponsePrivate(this), parent)
{
    setRequest(new DeleteObjectsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteObjectsRequest * DeleteObjectsResponse::request() const
{
    Q_D(const DeleteObjectsResponse);
    return static_cast<const DeleteObjectsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 DeleteObjects \a response.
 */
void DeleteObjectsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteObjectsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::DeleteObjectsResponsePrivate
 * \brief The DeleteObjectsResponsePrivate class provides private implementation for DeleteObjectsResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a DeleteObjectsResponsePrivate object with public implementation \a q.
 */
DeleteObjectsResponsePrivate::DeleteObjectsResponsePrivate(
    DeleteObjectsResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 DeleteObjects response element from \a xml.
 */
void DeleteObjectsResponsePrivate::parseDeleteObjectsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteObjectsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
