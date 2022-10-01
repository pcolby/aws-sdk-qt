// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteobjectresponse.h"
#include "deleteobjectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaStoreData {

/*!
 * \class QtAws::MediaStoreData::DeleteObjectResponse
 * \brief The DeleteObjectResponse class provides an interace for MediaStoreData DeleteObject responses.
 *
 * \inmodule QtAwsMediaStoreData
 *
 *  An AWS Elemental MediaStore asset is an object, similar to an object in the Amazon S3 service. Objects are the
 *  fundamental entities that are stored in AWS Elemental
 *
 * \sa MediaStoreDataClient::deleteObject
 */

/*!
 * Constructs a DeleteObjectResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteObjectResponse::DeleteObjectResponse(
        const DeleteObjectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaStoreDataResponse(new DeleteObjectResponsePrivate(this), parent)
{
    setRequest(new DeleteObjectRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteObjectRequest * DeleteObjectResponse::request() const
{
    Q_D(const DeleteObjectResponse);
    return static_cast<const DeleteObjectRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaStoreData DeleteObject \a response.
 */
void DeleteObjectResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteObjectResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaStoreData::DeleteObjectResponsePrivate
 * \brief The DeleteObjectResponsePrivate class provides private implementation for DeleteObjectResponse.
 * \internal
 *
 * \inmodule QtAwsMediaStoreData
 */

/*!
 * Constructs a DeleteObjectResponsePrivate object with public implementation \a q.
 */
DeleteObjectResponsePrivate::DeleteObjectResponsePrivate(
    DeleteObjectResponse * const q) : MediaStoreDataResponsePrivate(q)
{

}

/*!
 * Parses a MediaStoreData DeleteObject response element from \a xml.
 */
void DeleteObjectResponsePrivate::parseDeleteObjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteObjectResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaStoreData
} // namespace QtAws
