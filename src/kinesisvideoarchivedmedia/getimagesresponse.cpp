// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getimagesresponse.h"
#include "getimagesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisVideoArchivedMedia {

/*!
 * \class QtAws::KinesisVideoArchivedMedia::GetImagesResponse
 * \brief The GetImagesResponse class provides an interace for KinesisVideoArchivedMedia GetImages responses.
 *
 * \inmodule QtAwsKinesisVideoArchivedMedia
 *
 *
 * \sa KinesisVideoArchivedMediaClient::getImages
 */

/*!
 * Constructs a GetImagesResponse object for \a reply to \a request, with parent \a parent.
 */
GetImagesResponse::GetImagesResponse(
        const GetImagesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisVideoArchivedMediaResponse(new GetImagesResponsePrivate(this), parent)
{
    setRequest(new GetImagesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetImagesRequest * GetImagesResponse::request() const
{
    Q_D(const GetImagesResponse);
    return static_cast<const GetImagesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisVideoArchivedMedia GetImages \a response.
 */
void GetImagesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetImagesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisVideoArchivedMedia::GetImagesResponsePrivate
 * \brief The GetImagesResponsePrivate class provides private implementation for GetImagesResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisVideoArchivedMedia
 */

/*!
 * Constructs a GetImagesResponsePrivate object with public implementation \a q.
 */
GetImagesResponsePrivate::GetImagesResponsePrivate(
    GetImagesResponse * const q) : KinesisVideoArchivedMediaResponsePrivate(q)
{

}

/*!
 * Parses a KinesisVideoArchivedMedia GetImages response element from \a xml.
 */
void GetImagesResponsePrivate::parseGetImagesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetImagesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisVideoArchivedMedia
} // namespace QtAws
