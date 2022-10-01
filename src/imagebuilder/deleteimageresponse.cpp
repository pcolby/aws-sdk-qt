// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteimageresponse.h"
#include "deleteimageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::DeleteImageResponse
 * \brief The DeleteImageResponse class provides an interace for ImageBuilder DeleteImage responses.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::deleteImage
 */

/*!
 * Constructs a DeleteImageResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteImageResponse::DeleteImageResponse(
        const DeleteImageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ImageBuilderResponse(new DeleteImageResponsePrivate(this), parent)
{
    setRequest(new DeleteImageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteImageRequest * DeleteImageResponse::request() const
{
    Q_D(const DeleteImageResponse);
    return static_cast<const DeleteImageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ImageBuilder DeleteImage \a response.
 */
void DeleteImageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteImageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ImageBuilder::DeleteImageResponsePrivate
 * \brief The DeleteImageResponsePrivate class provides private implementation for DeleteImageResponse.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a DeleteImageResponsePrivate object with public implementation \a q.
 */
DeleteImageResponsePrivate::DeleteImageResponsePrivate(
    DeleteImageResponse * const q) : ImageBuilderResponsePrivate(q)
{

}

/*!
 * Parses a ImageBuilder DeleteImage response element from \a xml.
 */
void DeleteImageResponsePrivate::parseDeleteImageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteImageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ImageBuilder
} // namespace QtAws
