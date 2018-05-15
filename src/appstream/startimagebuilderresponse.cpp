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

#include "startimagebuilderresponse.h"
#include "startimagebuilderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::StartImageBuilderResponse
 * \brief The StartImageBuilderResponse class provides an interace for AppStream StartImageBuilder responses.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::startImageBuilder
 */

/*!
 * Constructs a StartImageBuilderResponse object for \a reply to \a request, with parent \a parent.
 */
StartImageBuilderResponse::StartImageBuilderResponse(
        const StartImageBuilderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppStreamResponse(new StartImageBuilderResponsePrivate(this), parent)
{
    setRequest(new StartImageBuilderRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartImageBuilderRequest * StartImageBuilderResponse::request() const
{
    Q_D(const StartImageBuilderResponse);
    return static_cast<const StartImageBuilderRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppStream StartImageBuilder \a response.
 */
void StartImageBuilderResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartImageBuilderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppStream::StartImageBuilderResponsePrivate
 * \brief The StartImageBuilderResponsePrivate class provides private implementation for StartImageBuilderResponse.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a StartImageBuilderResponsePrivate object with public implementation \a q.
 */
StartImageBuilderResponsePrivate::StartImageBuilderResponsePrivate(
    StartImageBuilderResponse * const q) : AppStreamResponsePrivate(q)
{

}

/*!
 * Parses a AppStream StartImageBuilder response element from \a xml.
 */
void StartImageBuilderResponsePrivate::parseStartImageBuilderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartImageBuilderResponse"));
    /// @todo
}

} // namespace AppStream
} // namespace QtAws
