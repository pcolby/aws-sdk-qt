// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatestreamingimageresponse.h"
#include "updatestreamingimageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::UpdateStreamingImageResponse
 * \brief The UpdateStreamingImageResponse class provides an interace for Nimble UpdateStreamingImage responses.
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
 * \sa NimbleClient::updateStreamingImage
 */

/*!
 * Constructs a UpdateStreamingImageResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateStreamingImageResponse::UpdateStreamingImageResponse(
        const UpdateStreamingImageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleResponse(new UpdateStreamingImageResponsePrivate(this), parent)
{
    setRequest(new UpdateStreamingImageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateStreamingImageRequest * UpdateStreamingImageResponse::request() const
{
    Q_D(const UpdateStreamingImageResponse);
    return static_cast<const UpdateStreamingImageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Nimble UpdateStreamingImage \a response.
 */
void UpdateStreamingImageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateStreamingImageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Nimble::UpdateStreamingImageResponsePrivate
 * \brief The UpdateStreamingImageResponsePrivate class provides private implementation for UpdateStreamingImageResponse.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a UpdateStreamingImageResponsePrivate object with public implementation \a q.
 */
UpdateStreamingImageResponsePrivate::UpdateStreamingImageResponsePrivate(
    UpdateStreamingImageResponse * const q) : NimbleResponsePrivate(q)
{

}

/*!
 * Parses a Nimble UpdateStreamingImage response element from \a xml.
 */
void UpdateStreamingImageResponsePrivate::parseUpdateStreamingImageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateStreamingImageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Nimble
} // namespace QtAws
