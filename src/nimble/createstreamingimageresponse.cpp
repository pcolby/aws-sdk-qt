// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createstreamingimageresponse.h"
#include "createstreamingimageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::CreateStreamingImageResponse
 * \brief The CreateStreamingImageResponse class provides an interace for Nimble CreateStreamingImage responses.
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
 * \sa NimbleClient::createStreamingImage
 */

/*!
 * Constructs a CreateStreamingImageResponse object for \a reply to \a request, with parent \a parent.
 */
CreateStreamingImageResponse::CreateStreamingImageResponse(
        const CreateStreamingImageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleResponse(new CreateStreamingImageResponsePrivate(this), parent)
{
    setRequest(new CreateStreamingImageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateStreamingImageRequest * CreateStreamingImageResponse::request() const
{
    Q_D(const CreateStreamingImageResponse);
    return static_cast<const CreateStreamingImageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Nimble CreateStreamingImage \a response.
 */
void CreateStreamingImageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateStreamingImageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Nimble::CreateStreamingImageResponsePrivate
 * \brief The CreateStreamingImageResponsePrivate class provides private implementation for CreateStreamingImageResponse.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a CreateStreamingImageResponsePrivate object with public implementation \a q.
 */
CreateStreamingImageResponsePrivate::CreateStreamingImageResponsePrivate(
    CreateStreamingImageResponse * const q) : NimbleResponsePrivate(q)
{

}

/*!
 * Parses a Nimble CreateStreamingImage response element from \a xml.
 */
void CreateStreamingImageResponsePrivate::parseCreateStreamingImageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateStreamingImageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Nimble
} // namespace QtAws
