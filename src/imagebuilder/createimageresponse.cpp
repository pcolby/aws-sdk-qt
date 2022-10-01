// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createimageresponse.h"
#include "createimageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::CreateImageResponse
 * \brief The CreateImageResponse class provides an interace for ImageBuilder CreateImage responses.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::createImage
 */

/*!
 * Constructs a CreateImageResponse object for \a reply to \a request, with parent \a parent.
 */
CreateImageResponse::CreateImageResponse(
        const CreateImageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ImageBuilderResponse(new CreateImageResponsePrivate(this), parent)
{
    setRequest(new CreateImageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateImageRequest * CreateImageResponse::request() const
{
    Q_D(const CreateImageResponse);
    return static_cast<const CreateImageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ImageBuilder CreateImage \a response.
 */
void CreateImageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateImageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ImageBuilder::CreateImageResponsePrivate
 * \brief The CreateImageResponsePrivate class provides private implementation for CreateImageResponse.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a CreateImageResponsePrivate object with public implementation \a q.
 */
CreateImageResponsePrivate::CreateImageResponsePrivate(
    CreateImageResponse * const q) : ImageBuilderResponsePrivate(q)
{

}

/*!
 * Parses a ImageBuilder CreateImage response element from \a xml.
 */
void CreateImageResponsePrivate::parseCreateImageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateImageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ImageBuilder
} // namespace QtAws
