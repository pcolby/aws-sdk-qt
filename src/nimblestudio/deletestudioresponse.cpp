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

#include "deletestudioresponse.h"
#include "deletestudioresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::DeleteStudioResponse
 * \brief The DeleteStudioResponse class provides an interace for NimbleStudio DeleteStudio responses.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::deleteStudio
 */

/*!
 * Constructs a DeleteStudioResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteStudioResponse::DeleteStudioResponse(
        const DeleteStudioRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleStudioResponse(new DeleteStudioResponsePrivate(this), parent)
{
    setRequest(new DeleteStudioRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteStudioRequest * DeleteStudioResponse::request() const
{
    return static_cast<const DeleteStudioRequest *>(NimbleStudioResponse::request());
}

/*!
 * \reimp
 * Parses a successful NimbleStudio DeleteStudio \a response.
 */
void DeleteStudioResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteStudioResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NimbleStudio::DeleteStudioResponsePrivate
 * \brief The DeleteStudioResponsePrivate class provides private implementation for DeleteStudioResponse.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a DeleteStudioResponsePrivate object with public implementation \a q.
 */
DeleteStudioResponsePrivate::DeleteStudioResponsePrivate(
    DeleteStudioResponse * const q) : NimbleStudioResponsePrivate(q)
{

}

/*!
 * Parses a NimbleStudio DeleteStudio response element from \a xml.
 */
void DeleteStudioResponsePrivate::parseDeleteStudioResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteStudioResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NimbleStudio
} // namespace QtAws
