// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmediaresponse.h"
#include "getmediaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisVideoMedia {

/*!
 * \class QtAws::KinesisVideoMedia::GetMediaResponse
 * \brief The GetMediaResponse class provides an interace for KinesisVideoMedia GetMedia responses.
 *
 * \inmodule QtAwsKinesisVideoMedia
 *
 *
 * \sa KinesisVideoMediaClient::getMedia
 */

/*!
 * Constructs a GetMediaResponse object for \a reply to \a request, with parent \a parent.
 */
GetMediaResponse::GetMediaResponse(
        const GetMediaRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisVideoMediaResponse(new GetMediaResponsePrivate(this), parent)
{
    setRequest(new GetMediaRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetMediaRequest * GetMediaResponse::request() const
{
    Q_D(const GetMediaResponse);
    return static_cast<const GetMediaRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisVideoMedia GetMedia \a response.
 */
void GetMediaResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetMediaResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisVideoMedia::GetMediaResponsePrivate
 * \brief The GetMediaResponsePrivate class provides private implementation for GetMediaResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisVideoMedia
 */

/*!
 * Constructs a GetMediaResponsePrivate object with public implementation \a q.
 */
GetMediaResponsePrivate::GetMediaResponsePrivate(
    GetMediaResponse * const q) : KinesisVideoMediaResponsePrivate(q)
{

}

/*!
 * Parses a KinesisVideoMedia GetMedia response element from \a xml.
 */
void GetMediaResponsePrivate::parseGetMediaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMediaResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisVideoMedia
} // namespace QtAws
