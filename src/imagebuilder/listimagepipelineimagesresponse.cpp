/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
