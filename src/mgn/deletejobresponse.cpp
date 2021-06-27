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

#include "deletejobresponse.h"
#include "deletejobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace mgn {

/*!
 * \class QtAws::mgn::DeleteJobResponse
 * \brief The DeleteJobResponse class provides an interace for mgn DeleteJob responses.
 *
 * \inmodule QtAwsmgn
 *
 *  The Application Migration Service
 *
 * \sa mgnClient::deleteJob
 */

/*!
 * Constructs a DeleteJobResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteJobResponse::DeleteJobResponse(
        const DeleteJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : mgnResponse(new DeleteJobResponsePrivate(this), parent)
{
    setRequest(new DeleteJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteJobRequest * DeleteJobResponse::request() const
{
    return static_cast<const DeleteJobRequest *>(mgnResponse::request());
}

/*!
 * \reimp
 * Parses a successful mgn DeleteJob \a response.
 */
void DeleteJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::mgn::DeleteJobResponsePrivate
 * \brief The DeleteJobResponsePrivate class provides private implementation for DeleteJobResponse.
 * \internal
 *
 * \inmodule QtAwsmgn
 */

/*!
 * Constructs a DeleteJobResponsePrivate object with public implementation \a q.
 */
DeleteJobResponsePrivate::DeleteJobResponsePrivate(
    DeleteJobResponse * const q) : mgnResponsePrivate(q)
{

}

/*!
 * Parses a mgn DeleteJob response element from \a xml.
 */
void DeleteJobResponsePrivate::parseDeleteJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace mgn
} // namespace QtAws
