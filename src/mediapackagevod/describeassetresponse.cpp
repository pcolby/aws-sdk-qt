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

#include "describeassetresponse.h"
#include "describeassetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaPackageVod {

/*!
 * \class QtAws::MediaPackageVod::DescribeAssetResponse
 * \brief The DescribeAssetResponse class provides an interace for MediaPackageVod DescribeAsset responses.
 *
 * \inmodule QtAwsMediaPackageVod
 *
 *
 * \sa MediaPackageVodClient::describeAsset
 */

/*!
 * Constructs a DescribeAssetResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAssetResponse::DescribeAssetResponse(
        const DescribeAssetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaPackageVodResponse(new DescribeAssetResponsePrivate(this), parent)
{
    setRequest(new DescribeAssetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAssetRequest * DescribeAssetResponse::request() const
{
    return static_cast<const DescribeAssetRequest *>(MediaPackageVodResponse::request());
}

/*!
 * \reimp
 * Parses a successful MediaPackageVod DescribeAsset \a response.
 */
void DescribeAssetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAssetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaPackageVod::DescribeAssetResponsePrivate
 * \brief The DescribeAssetResponsePrivate class provides private implementation for DescribeAssetResponse.
 * \internal
 *
 * \inmodule QtAwsMediaPackageVod
 */

/*!
 * Constructs a DescribeAssetResponsePrivate object with public implementation \a q.
 */
DescribeAssetResponsePrivate::DescribeAssetResponsePrivate(
    DescribeAssetResponse * const q) : MediaPackageVodResponsePrivate(q)
{

}

/*!
 * Parses a MediaPackageVod DescribeAsset response element from \a xml.
 */
void DescribeAssetResponsePrivate::parseDescribeAssetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAssetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaPackageVod
} // namespace QtAws
