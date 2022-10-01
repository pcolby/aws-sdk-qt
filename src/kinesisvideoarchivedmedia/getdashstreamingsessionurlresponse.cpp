// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdashstreamingsessionurlresponse.h"
#include "getdashstreamingsessionurlresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisVideoArchivedMedia {

/*!
 * \class QtAws::KinesisVideoArchivedMedia::GetDASHStreamingSessionURLResponse
 * \brief The GetDASHStreamingSessionURLResponse class provides an interace for KinesisVideoArchivedMedia GetDASHStreamingSessionURL responses.
 *
 * \inmodule QtAwsKinesisVideoArchivedMedia
 *
 *
 * \sa KinesisVideoArchivedMediaClient::getDASHStreamingSessionURL
 */

/*!
 * Constructs a GetDASHStreamingSessionURLResponse object for \a reply to \a request, with parent \a parent.
 */
GetDASHStreamingSessionURLResponse::GetDASHStreamingSessionURLResponse(
        const GetDASHStreamingSessionURLRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisVideoArchivedMediaResponse(new GetDASHStreamingSessionURLResponsePrivate(this), parent)
{
    setRequest(new GetDASHStreamingSessionURLRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDASHStreamingSessionURLRequest * GetDASHStreamingSessionURLResponse::request() const
{
    Q_D(const GetDASHStreamingSessionURLResponse);
    return static_cast<const GetDASHStreamingSessionURLRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisVideoArchivedMedia GetDASHStreamingSessionURL \a response.
 */
void GetDASHStreamingSessionURLResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDASHStreamingSessionURLResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisVideoArchivedMedia::GetDASHStreamingSessionURLResponsePrivate
 * \brief The GetDASHStreamingSessionURLResponsePrivate class provides private implementation for GetDASHStreamingSessionURLResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisVideoArchivedMedia
 */

/*!
 * Constructs a GetDASHStreamingSessionURLResponsePrivate object with public implementation \a q.
 */
GetDASHStreamingSessionURLResponsePrivate::GetDASHStreamingSessionURLResponsePrivate(
    GetDASHStreamingSessionURLResponse * const q) : KinesisVideoArchivedMediaResponsePrivate(q)
{

}

/*!
 * Parses a KinesisVideoArchivedMedia GetDASHStreamingSessionURL response element from \a xml.
 */
void GetDASHStreamingSessionURLResponsePrivate::parseGetDASHStreamingSessionURLResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDASHStreamingSessionURLResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisVideoArchivedMedia
} // namespace QtAws
