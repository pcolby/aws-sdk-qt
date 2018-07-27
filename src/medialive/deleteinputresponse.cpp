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

#include "deleteinputresponse.h"
#include "deleteinputresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::DeleteInputResponse
 * \brief The DeleteInputResponse class provides an interace for MediaLive DeleteInput responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::deleteInput
 */

/*!
 * Constructs a DeleteInputResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteInputResponse::DeleteInputResponse(
        const DeleteInputRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new DeleteInputResponsePrivate(this), parent)
{
    setRequest(new DeleteInputRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteInputRequest * DeleteInputResponse::request() const
{
    Q_D(const DeleteInputResponse);
    return static_cast<const DeleteInputRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive DeleteInput \a response.
 */
void DeleteInputResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteInputResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::DeleteInputResponsePrivate
 * \brief The DeleteInputResponsePrivate class provides private implementation for DeleteInputResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a DeleteInputResponsePrivate object with public implementation \a q.
 */
DeleteInputResponsePrivate::DeleteInputResponsePrivate(
    DeleteInputResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive DeleteInput response element from \a xml.
 */
void DeleteInputResponsePrivate::parseDeleteInputResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteInputResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
