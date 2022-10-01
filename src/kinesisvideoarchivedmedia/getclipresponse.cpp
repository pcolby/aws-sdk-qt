// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getclipresponse.h"
#include "getclipresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisVideoArchivedMedia {

/*!
 * \class QtAws::KinesisVideoArchivedMedia::GetClipResponse
 * \brief The GetClipResponse class provides an interace for KinesisVideoArchivedMedia GetClip responses.
 *
 * \inmodule QtAwsKinesisVideoArchivedMedia
 *
 *
 * \sa KinesisVideoArchivedMediaClient::getClip
 */

/*!
 * Constructs a GetClipResponse object for \a reply to \a request, with parent \a parent.
 */
GetClipResponse::GetClipResponse(
        const GetClipRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisVideoArchivedMediaResponse(new GetClipResponsePrivate(this), parent)
{
    setRequest(new GetClipRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetClipRequest * GetClipResponse::request() const
{
    Q_D(const GetClipResponse);
    return static_cast<const GetClipRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisVideoArchivedMedia GetClip \a response.
 */
void GetClipResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetClipResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisVideoArchivedMedia::GetClipResponsePrivate
 * \brief The GetClipResponsePrivate class provides private implementation for GetClipResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisVideoArchivedMedia
 */

/*!
 * Constructs a GetClipResponsePrivate object with public implementation \a q.
 */
GetClipResponsePrivate::GetClipResponsePrivate(
    GetClipResponse * const q) : KinesisVideoArchivedMediaResponsePrivate(q)
{

}

/*!
 * Parses a KinesisVideoArchivedMedia GetClip response element from \a xml.
 */
void GetClipResponsePrivate::parseGetClipResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetClipResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisVideoArchivedMedia
} // namespace QtAws
