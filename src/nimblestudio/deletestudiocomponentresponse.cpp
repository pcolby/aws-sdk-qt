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

#include "deletestudiocomponentresponse.h"
#include "deletestudiocomponentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::DeleteStudioComponentResponse
 * \brief The DeleteStudioComponentResponse class provides an interace for NimbleStudio DeleteStudioComponent responses.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::deleteStudioComponent
 */

/*!
 * Constructs a DeleteStudioComponentResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteStudioComponentResponse::DeleteStudioComponentResponse(
        const DeleteStudioComponentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleStudioResponse(new DeleteStudioComponentResponsePrivate(this), parent)
{
    setRequest(new DeleteStudioComponentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteStudioComponentRequest * DeleteStudioComponentResponse::request() const
{
    return static_cast<const DeleteStudioComponentRequest *>(NimbleStudioResponse::request());
}

/*!
 * \reimp
 * Parses a successful NimbleStudio DeleteStudioComponent \a response.
 */
void DeleteStudioComponentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteStudioComponentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NimbleStudio::DeleteStudioComponentResponsePrivate
 * \brief The DeleteStudioComponentResponsePrivate class provides private implementation for DeleteStudioComponentResponse.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a DeleteStudioComponentResponsePrivate object with public implementation \a q.
 */
DeleteStudioComponentResponsePrivate::DeleteStudioComponentResponsePrivate(
    DeleteStudioComponentResponse * const q) : NimbleStudioResponsePrivate(q)
{

}

/*!
 * Parses a NimbleStudio DeleteStudioComponent response element from \a xml.
 */
void DeleteStudioComponentResponsePrivate::parseDeleteStudioComponentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteStudioComponentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NimbleStudio
} // namespace QtAws
