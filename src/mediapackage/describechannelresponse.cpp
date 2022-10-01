// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describechannelresponse.h"
#include "describechannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaPackage {

/*!
 * \class QtAws::MediaPackage::DescribeChannelResponse
 * \brief The DescribeChannelResponse class provides an interace for MediaPackage DescribeChannel responses.
 *
 * \inmodule QtAwsMediaPackage
 *
 *
 * \sa MediaPackageClient::describeChannel
 */

/*!
 * Constructs a DescribeChannelResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeChannelResponse::DescribeChannelResponse(
        const DescribeChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaPackageResponse(new DescribeChannelResponsePrivate(this), parent)
{
    setRequest(new DescribeChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeChannelRequest * DescribeChannelResponse::request() const
{
    Q_D(const DescribeChannelResponse);
    return static_cast<const DescribeChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaPackage DescribeChannel \a response.
 */
void DescribeChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaPackage::DescribeChannelResponsePrivate
 * \brief The DescribeChannelResponsePrivate class provides private implementation for DescribeChannelResponse.
 * \internal
 *
 * \inmodule QtAwsMediaPackage
 */

/*!
 * Constructs a DescribeChannelResponsePrivate object with public implementation \a q.
 */
DescribeChannelResponsePrivate::DescribeChannelResponsePrivate(
    DescribeChannelResponse * const q) : MediaPackageResponsePrivate(q)
{

}

/*!
 * Parses a MediaPackage DescribeChannel response element from \a xml.
 */
void DescribeChannelResponsePrivate::parseDescribeChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaPackage
} // namespace QtAws
