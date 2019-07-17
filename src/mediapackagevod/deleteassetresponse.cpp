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

#include "deleteassetresponse.h"
#include "deleteassetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaPackageVod {

/*!
 * \class QtAws::MediaPackageVod::DeleteAssetResponse
 * \brief The DeleteAssetResponse class provides an interace for MediaPackageVod DeleteAsset responses.
 *
 * \inmodule QtAwsMediaPackageVod
 *
 *
 * \sa MediaPackageVodClient::deleteAsset
 */

/*!
 * Constructs a DeleteAssetResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAssetResponse::DeleteAssetResponse(
        const DeleteAssetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaPackageVodResponse(new DeleteAssetResponsePrivate(this), parent)
{
    setRequest(new DeleteAssetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAssetRequest * DeleteAssetResponse::request() const
{
    Q_D(const DeleteAssetResponse);
    return static_cast<const DeleteAssetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaPackageVod DeleteAsset \a response.
 */
void DeleteAssetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAssetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaPackageVod::DeleteAssetResponsePrivate
 * \brief The DeleteAssetResponsePrivate class provides private implementation for DeleteAssetResponse.
 * \internal
 *
 * \inmodule QtAwsMediaPackageVod
 */

/*!
 * Constructs a DeleteAssetResponsePrivate object with public implementation \a q.
 */
DeleteAssetResponsePrivate::DeleteAssetResponsePrivate(
    DeleteAssetResponse * const q) : MediaPackageVodResponsePrivate(q)
{

}

/*!
 * Parses a MediaPackageVod DeleteAsset response element from \a xml.
 */
void DeleteAssetResponsePrivate::parseDeleteAssetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAssetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaPackageVod
} // namespace QtAws
