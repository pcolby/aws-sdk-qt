// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const DescribeAssetResponse);
    return static_cast<const DescribeAssetRequest *>(d->request);
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
