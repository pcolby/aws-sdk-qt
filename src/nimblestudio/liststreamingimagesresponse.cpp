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

#include "liststreamingimagesresponse.h"
#include "liststreamingimagesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::ListStreamingImagesResponse
 * \brief The ListStreamingImagesResponse class provides an interace for NimbleStudio ListStreamingImages responses.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::listStreamingImages
 */

/*!
 * Constructs a ListStreamingImagesResponse object for \a reply to \a request, with parent \a parent.
 */
ListStreamingImagesResponse::ListStreamingImagesResponse(
        const ListStreamingImagesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleStudioResponse(new ListStreamingImagesResponsePrivate(this), parent)
{
    setRequest(new ListStreamingImagesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListStreamingImagesRequest * ListStreamingImagesResponse::request() const
{
    return static_cast<const ListStreamingImagesRequest *>(NimbleStudioResponse::request());
}

/*!
 * \reimp
 * Parses a successful NimbleStudio ListStreamingImages \a response.
 */
void ListStreamingImagesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListStreamingImagesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NimbleStudio::ListStreamingImagesResponsePrivate
 * \brief The ListStreamingImagesResponsePrivate class provides private implementation for ListStreamingImagesResponse.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a ListStreamingImagesResponsePrivate object with public implementation \a q.
 */
ListStreamingImagesResponsePrivate::ListStreamingImagesResponsePrivate(
    ListStreamingImagesResponse * const q) : NimbleStudioResponsePrivate(q)
{

}

/*!
 * Parses a NimbleStudio ListStreamingImages response element from \a xml.
 */
void ListStreamingImagesResponsePrivate::parseListStreamingImagesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListStreamingImagesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NimbleStudio
} // namespace QtAws
