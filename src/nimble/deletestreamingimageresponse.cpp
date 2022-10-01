// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletestreamingimageresponse.h"
#include "deletestreamingimageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::DeleteStreamingImageResponse
 * \brief The DeleteStreamingImageResponse class provides an interace for Nimble DeleteStreamingImage responses.
 *
 * \inmodule QtAwsNimble
 *
 *  Welcome to the Amazon Nimble Studio API reference. This API reference provides methods, schema, resources, parameters,
 *  and more to help you get the most out of Nimble
 * 
 *  Studio>
 * 
 *  Nimble Studio is a virtual studio that empowers visual effects, animation, and interactive content teams to create
 *  content securely within a scalable, private cloud
 *
 * \sa NimbleClient::deleteStreamingImage
 */

/*!
 * Constructs a DeleteStreamingImageResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteStreamingImageResponse::DeleteStreamingImageResponse(
        const DeleteStreamingImageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleResponse(new DeleteStreamingImageResponsePrivate(this), parent)
{
    setRequest(new DeleteStreamingImageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteStreamingImageRequest * DeleteStreamingImageResponse::request() const
{
    Q_D(const DeleteStreamingImageResponse);
    return static_cast<const DeleteStreamingImageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Nimble DeleteStreamingImage \a response.
 */
void DeleteStreamingImageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteStreamingImageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Nimble::DeleteStreamingImageResponsePrivate
 * \brief The DeleteStreamingImageResponsePrivate class provides private implementation for DeleteStreamingImageResponse.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a DeleteStreamingImageResponsePrivate object with public implementation \a q.
 */
DeleteStreamingImageResponsePrivate::DeleteStreamingImageResponsePrivate(
    DeleteStreamingImageResponse * const q) : NimbleResponsePrivate(q)
{

}

/*!
 * Parses a Nimble DeleteStreamingImage response element from \a xml.
 */
void DeleteStreamingImageResponsePrivate::parseDeleteStreamingImageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteStreamingImageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Nimble
} // namespace QtAws
