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

#include "deletestackresponse.h"
#include "deletestackresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::DeleteStackResponse
 * \brief The DeleteStackResponse class provides an interace for AppStream DeleteStack responses.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::deleteStack
 */

/*!
 * Constructs a DeleteStackResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteStackResponse::DeleteStackResponse(
        const DeleteStackRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppStreamResponse(new DeleteStackResponsePrivate(this), parent)
{
    setRequest(new DeleteStackRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteStackRequest * DeleteStackResponse::request() const
{
    Q_D(const DeleteStackResponse);
    return static_cast<const DeleteStackRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppStream DeleteStack \a response.
 */
void DeleteStackResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteStackResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppStream::DeleteStackResponsePrivate
 * \brief The DeleteStackResponsePrivate class provides private implementation for DeleteStackResponse.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a DeleteStackResponsePrivate object with public implementation \a q.
 */
DeleteStackResponsePrivate::DeleteStackResponsePrivate(
    DeleteStackResponse * const q) : AppStreamResponsePrivate(q)
{

}

/*!
 * Parses a AppStream DeleteStack response element from \a xml.
 */
void DeleteStackResponsePrivate::parseDeleteStackResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteStackResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppStream
} // namespace QtAws
