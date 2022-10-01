// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gethlsstreamingsessionurlresponse.h"
#include "gethlsstreamingsessionurlresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisVideoArchivedMedia {

/*!
 * \class QtAws::KinesisVideoArchivedMedia::GetHLSStreamingSessionURLResponse
 * \brief The GetHLSStreamingSessionURLResponse class provides an interace for KinesisVideoArchivedMedia GetHLSStreamingSessionURL responses.
 *
 * \inmodule QtAwsKinesisVideoArchivedMedia
 *
 *
 * \sa KinesisVideoArchivedMediaClient::getHLSStreamingSessionURL
 */

/*!
 * Constructs a GetHLSStreamingSessionURLResponse object for \a reply to \a request, with parent \a parent.
 */
GetHLSStreamingSessionURLResponse::GetHLSStreamingSessionURLResponse(
        const GetHLSStreamingSessionURLRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisVideoArchivedMediaResponse(new GetHLSStreamingSessionURLResponsePrivate(this), parent)
{
    setRequest(new GetHLSStreamingSessionURLRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetHLSStreamingSessionURLRequest * GetHLSStreamingSessionURLResponse::request() const
{
    Q_D(const GetHLSStreamingSessionURLResponse);
    return static_cast<const GetHLSStreamingSessionURLRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisVideoArchivedMedia GetHLSStreamingSessionURL \a response.
 */
void GetHLSStreamingSessionURLResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetHLSStreamingSessionURLResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisVideoArchivedMedia::GetHLSStreamingSessionURLResponsePrivate
 * \brief The GetHLSStreamingSessionURLResponsePrivate class provides private implementation for GetHLSStreamingSessionURLResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisVideoArchivedMedia
 */

/*!
 * Constructs a GetHLSStreamingSessionURLResponsePrivate object with public implementation \a q.
 */
GetHLSStreamingSessionURLResponsePrivate::GetHLSStreamingSessionURLResponsePrivate(
    GetHLSStreamingSessionURLResponse * const q) : KinesisVideoArchivedMediaResponsePrivate(q)
{

}

/*!
 * Parses a KinesisVideoArchivedMedia GetHLSStreamingSessionURL response element from \a xml.
 */
void GetHLSStreamingSessionURLResponsePrivate::parseGetHLSStreamingSessionURLResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetHLSStreamingSessionURLResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisVideoArchivedMedia
} // namespace QtAws
