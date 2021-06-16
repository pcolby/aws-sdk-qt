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

#include "listimagesresponse.h"
#include "listimagesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace imagebuilder {

/*!
 * \class QtAws::imagebuilder::ListImagesResponse
 * \brief The ListImagesResponse class provides an interace for imagebuilder ListImages responses.
 *
 * \inmodule QtAwsimagebuilder
 *
 *  EC2 Image Builder is a fully managed AWS service that makes it easier to automate the creation, management, and
 *  deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and pre-configured with
 *  software and settings to meet specific IT
 *
 * \sa imagebuilderClient::listImages
 */

/*!
 * Constructs a ListImagesResponse object for \a reply to \a request, with parent \a parent.
 */
ListImagesResponse::ListImagesResponse(
        const ListImagesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : imagebuilderResponse(new ListImagesResponsePrivate(this), parent)
{
    setRequest(new ListImagesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListImagesRequest * ListImagesResponse::request() const
{
    Q_D(const ListImagesResponse);
    return static_cast<const ListImagesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful imagebuilder ListImages \a response.
 */
void ListImagesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListImagesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::imagebuilder::ListImagesResponsePrivate
 * \brief The ListImagesResponsePrivate class provides private implementation for ListImagesResponse.
 * \internal
 *
 * \inmodule QtAwsimagebuilder
 */

/*!
 * Constructs a ListImagesResponsePrivate object with public implementation \a q.
 */
ListImagesResponsePrivate::ListImagesResponsePrivate(
    ListImagesResponse * const q) : imagebuilderResponsePrivate(q)
{

}

/*!
 * Parses a imagebuilder ListImages response element from \a xml.
 */
void ListImagesResponsePrivate::parseListImagesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListImagesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace imagebuilder
} // namespace QtAws
