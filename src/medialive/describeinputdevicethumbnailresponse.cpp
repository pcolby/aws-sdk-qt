// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeinputdevicethumbnailresponse.h"
#include "describeinputdevicethumbnailresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::DescribeInputDeviceThumbnailResponse
 * \brief The DescribeInputDeviceThumbnailResponse class provides an interace for MediaLive DescribeInputDeviceThumbnail responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::describeInputDeviceThumbnail
 */

/*!
 * Constructs a DescribeInputDeviceThumbnailResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeInputDeviceThumbnailResponse::DescribeInputDeviceThumbnailResponse(
        const DescribeInputDeviceThumbnailRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new DescribeInputDeviceThumbnailResponsePrivate(this), parent)
{
    setRequest(new DescribeInputDeviceThumbnailRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeInputDeviceThumbnailRequest * DescribeInputDeviceThumbnailResponse::request() const
{
    Q_D(const DescribeInputDeviceThumbnailResponse);
    return static_cast<const DescribeInputDeviceThumbnailRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive DescribeInputDeviceThumbnail \a response.
 */
void DescribeInputDeviceThumbnailResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeInputDeviceThumbnailResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::DescribeInputDeviceThumbnailResponsePrivate
 * \brief The DescribeInputDeviceThumbnailResponsePrivate class provides private implementation for DescribeInputDeviceThumbnailResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a DescribeInputDeviceThumbnailResponsePrivate object with public implementation \a q.
 */
DescribeInputDeviceThumbnailResponsePrivate::DescribeInputDeviceThumbnailResponsePrivate(
    DescribeInputDeviceThumbnailResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive DescribeInputDeviceThumbnail response element from \a xml.
 */
void DescribeInputDeviceThumbnailResponsePrivate::parseDescribeInputDeviceThumbnailResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeInputDeviceThumbnailResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
