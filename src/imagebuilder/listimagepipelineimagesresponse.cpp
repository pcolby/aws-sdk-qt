// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listimagepipelineimagesresponse.h"
#include "listimagepipelineimagesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::ListImagePipelineImagesResponse
 * \brief The ListImagePipelineImagesResponse class provides an interace for ImageBuilder ListImagePipelineImages responses.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::listImagePipelineImages
 */

/*!
 * Constructs a ListImagePipelineImagesResponse object for \a reply to \a request, with parent \a parent.
 */
ListImagePipelineImagesResponse::ListImagePipelineImagesResponse(
        const ListImagePipelineImagesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ImageBuilderResponse(new ListImagePipelineImagesResponsePrivate(this), parent)
{
    setRequest(new ListImagePipelineImagesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListImagePipelineImagesRequest * ListImagePipelineImagesResponse::request() const
{
    Q_D(const ListImagePipelineImagesResponse);
    return static_cast<const ListImagePipelineImagesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ImageBuilder ListImagePipelineImages \a response.
 */
void ListImagePipelineImagesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListImagePipelineImagesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ImageBuilder::ListImagePipelineImagesResponsePrivate
 * \brief The ListImagePipelineImagesResponsePrivate class provides private implementation for ListImagePipelineImagesResponse.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a ListImagePipelineImagesResponsePrivate object with public implementation \a q.
 */
ListImagePipelineImagesResponsePrivate::ListImagePipelineImagesResponsePrivate(
    ListImagePipelineImagesResponse * const q) : ImageBuilderResponsePrivate(q)
{

}

/*!
 * Parses a ImageBuilder ListImagePipelineImages response element from \a xml.
 */
void ListImagePipelineImagesResponsePrivate::parseListImagePipelineImagesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListImagePipelineImagesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ImageBuilder
} // namespace QtAws
