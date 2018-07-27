/*
    Copyright 2013-2018 Paul Colby

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

#include "stopimagebuilderresponse.h"
#include "stopimagebuilderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::StopImageBuilderResponse
 * \brief The StopImageBuilderResponse class provides an interace for AppStream StopImageBuilder responses.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::stopImageBuilder
 */

/*!
 * Constructs a StopImageBuilderResponse object for \a reply to \a request, with parent \a parent.
 */
StopImageBuilderResponse::StopImageBuilderResponse(
        const StopImageBuilderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppStreamResponse(new StopImageBuilderResponsePrivate(this), parent)
{
    setRequest(new StopImageBuilderRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopImageBuilderRequest * StopImageBuilderResponse::request() const
{
    Q_D(const StopImageBuilderResponse);
    return static_cast<const StopImageBuilderRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppStream StopImageBuilder \a response.
 */
void StopImageBuilderResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopImageBuilderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppStream::StopImageBuilderResponsePrivate
 * \brief The StopImageBuilderResponsePrivate class provides private implementation for StopImageBuilderResponse.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a StopImageBuilderResponsePrivate object with public implementation \a q.
 */
StopImageBuilderResponsePrivate::StopImageBuilderResponsePrivate(
    StopImageBuilderResponse * const q) : AppStreamResponsePrivate(q)
{

}

/*!
 * Parses a AppStream StopImageBuilder response element from \a xml.
 */
void StopImageBuilderResponsePrivate::parseStopImageBuilderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopImageBuilderResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppStream
} // namespace QtAws
