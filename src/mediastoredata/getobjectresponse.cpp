// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getobjectresponse.h"
#include "getobjectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaStoreData {

/*!
 * \class QtAws::MediaStoreData::GetObjectResponse
 * \brief The GetObjectResponse class provides an interace for MediaStoreData GetObject responses.
 *
 * \inmodule QtAwsMediaStoreData
 *
 *  An AWS Elemental MediaStore asset is an object, similar to an object in the Amazon S3 service. Objects are the
 *  fundamental entities that are stored in AWS Elemental
 *
 * \sa MediaStoreDataClient::getObject
 */

/*!
 * Constructs a GetObjectResponse object for \a reply to \a request, with parent \a parent.
 */
GetObjectResponse::GetObjectResponse(
        const GetObjectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaStoreDataResponse(new GetObjectResponsePrivate(this), parent)
{
    setRequest(new GetObjectRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetObjectRequest * GetObjectResponse::request() const
{
    Q_D(const GetObjectResponse);
    return static_cast<const GetObjectRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaStoreData GetObject \a response.
 */
void GetObjectResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetObjectResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaStoreData::GetObjectResponsePrivate
 * \brief The GetObjectResponsePrivate class provides private implementation for GetObjectResponse.
 * \internal
 *
 * \inmodule QtAwsMediaStoreData
 */

/*!
 * Constructs a GetObjectResponsePrivate object with public implementation \a q.
 */
GetObjectResponsePrivate::GetObjectResponsePrivate(
    GetObjectResponse * const q) : MediaStoreDataResponsePrivate(q)
{

}

/*!
 * Parses a MediaStoreData GetObject response element from \a xml.
 */
void GetObjectResponsePrivate::parseGetObjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetObjectResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaStoreData
} // namespace QtAws
