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
namespace imagebuilder {

/*!
 * \class QtAws::imagebuilder::ListImagePipelineImagesResponse
 * \brief The ListImagePipelineImagesResponse class provides an interace for imagebuilder ListImagePipelineImages responses.
 *
 * \inmodule QtAwsimagebuilder
 *
 *  EC2 Image Builder is a fully managed AWS service that makes it easier to automate the creation, management, and
 *  deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and pre-configured with
 *  software and settings to meet specific IT
 *
 * \sa imagebuilderClient::listImagePipelineImages
 */

/*!
 * Constructs a ListImagePipelineImagesResponse object for \a reply to \a request, with parent \a parent.
 */
ListImagePipelineImagesResponse::ListImagePipelineImagesResponse(
        const ListImagePipelineImagesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : imagebuilderResponse(new ListImagePipelineImagesResponsePrivate(this), parent)
{
    setRequest(new ListImagePipelineImagesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListImagePipelineImagesRequest * ListImagePipelineImagesResponse::request() const
{
    return static_cast<const ListImagePipelineImagesRequest *>(imagebuilderResponse::request());
}

/*!
 * \reimp
 * Parses a successful imagebuilder ListImagePipelineImages \a response.
 */
void ListImagePipelineImagesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListImagePipelineImagesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::imagebuilder::ListImagePipelineImagesResponsePrivate
 * \brief The ListImagePipelineImagesResponsePrivate class provides private implementation for ListImagePipelineImagesResponse.
 * \internal
 *
 * \inmodule QtAwsimagebuilder
 */

/*!
 * Constructs a ListImagePipelineImagesResponsePrivate object with public implementation \a q.
 */
ListImagePipelineImagesResponsePrivate::ListImagePipelineImagesResponsePrivate(
    ListImagePipelineImagesResponse * const q) : imagebuilderResponsePrivate(q)
{

}

/*!
 * Parses a imagebuilder ListImagePipelineImages response element from \a xml.
 */
void ListImagePipelineImagesResponsePrivate::parseListImagePipelineImagesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListImagePipelineImagesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace imagebuilder
} // namespace QtAws
