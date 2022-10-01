// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getimageresponse.h"
#include "getimageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::GetImageResponse
 * \brief The GetImageResponse class provides an interace for ImageBuilder GetImage responses.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::getImage
 */

/*!
 * Constructs a GetImageResponse object for \a reply to \a request, with parent \a parent.
 */
GetImageResponse::GetImageResponse(
        const GetImageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ImageBuilderResponse(new GetImageResponsePrivate(this), parent)
{
    setRequest(new GetImageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetImageRequest * GetImageResponse::request() const
{
    Q_D(const GetImageResponse);
    return static_cast<const GetImageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ImageBuilder GetImage \a response.
 */
void GetImageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetImageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ImageBuilder::GetImageResponsePrivate
 * \brief The GetImageResponsePrivate class provides private implementation for GetImageResponse.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a GetImageResponsePrivate object with public implementation \a q.
 */
GetImageResponsePrivate::GetImageResponsePrivate(
    GetImageResponse * const q) : ImageBuilderResponsePrivate(q)
{

}

/*!
 * Parses a ImageBuilder GetImage response element from \a xml.
 */
void GetImageResponsePrivate::parseGetImageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetImageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ImageBuilder
} // namespace QtAws
