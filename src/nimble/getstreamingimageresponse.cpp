// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getstreamingimageresponse.h"
#include "getstreamingimageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::GetStreamingImageResponse
 * \brief The GetStreamingImageResponse class provides an interace for Nimble GetStreamingImage responses.
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
 * \sa NimbleClient::getStreamingImage
 */

/*!
 * Constructs a GetStreamingImageResponse object for \a reply to \a request, with parent \a parent.
 */
GetStreamingImageResponse::GetStreamingImageResponse(
        const GetStreamingImageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleResponse(new GetStreamingImageResponsePrivate(this), parent)
{
    setRequest(new GetStreamingImageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetStreamingImageRequest * GetStreamingImageResponse::request() const
{
    Q_D(const GetStreamingImageResponse);
    return static_cast<const GetStreamingImageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Nimble GetStreamingImage \a response.
 */
void GetStreamingImageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetStreamingImageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Nimble::GetStreamingImageResponsePrivate
 * \brief The GetStreamingImageResponsePrivate class provides private implementation for GetStreamingImageResponse.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a GetStreamingImageResponsePrivate object with public implementation \a q.
 */
GetStreamingImageResponsePrivate::GetStreamingImageResponsePrivate(
    GetStreamingImageResponse * const q) : NimbleResponsePrivate(q)
{

}

/*!
 * Parses a Nimble GetStreamingImage response element from \a xml.
 */
void GetStreamingImageResponsePrivate::parseGetStreamingImageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetStreamingImageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Nimble
} // namespace QtAws
