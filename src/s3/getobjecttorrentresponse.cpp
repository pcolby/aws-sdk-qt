// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getobjecttorrentresponse.h"
#include "getobjecttorrentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetObjectTorrentResponse
 * \brief The GetObjectTorrentResponse class provides an interace for S3 GetObjectTorrent responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getObjectTorrent
 */

/*!
 * Constructs a GetObjectTorrentResponse object for \a reply to \a request, with parent \a parent.
 */
GetObjectTorrentResponse::GetObjectTorrentResponse(
        const GetObjectTorrentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetObjectTorrentResponsePrivate(this), parent)
{
    setRequest(new GetObjectTorrentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetObjectTorrentRequest * GetObjectTorrentResponse::request() const
{
    Q_D(const GetObjectTorrentResponse);
    return static_cast<const GetObjectTorrentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 GetObjectTorrent \a response.
 */
void GetObjectTorrentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetObjectTorrentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::GetObjectTorrentResponsePrivate
 * \brief The GetObjectTorrentResponsePrivate class provides private implementation for GetObjectTorrentResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetObjectTorrentResponsePrivate object with public implementation \a q.
 */
GetObjectTorrentResponsePrivate::GetObjectTorrentResponsePrivate(
    GetObjectTorrentResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 GetObjectTorrent response element from \a xml.
 */
void GetObjectTorrentResponsePrivate::parseGetObjectTorrentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetObjectTorrentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
