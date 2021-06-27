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

#include "markasarchivedresponse.h"
#include "markasarchivedresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace mgn {

/*!
 * \class QtAws::mgn::MarkAsArchivedResponse
 * \brief The MarkAsArchivedResponse class provides an interace for mgn MarkAsArchived responses.
 *
 * \inmodule QtAwsmgn
 *
 *  The Application Migration Service
 *
 * \sa mgnClient::markAsArchived
 */

/*!
 * Constructs a MarkAsArchivedResponse object for \a reply to \a request, with parent \a parent.
 */
MarkAsArchivedResponse::MarkAsArchivedResponse(
        const MarkAsArchivedRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : mgnResponse(new MarkAsArchivedResponsePrivate(this), parent)
{
    setRequest(new MarkAsArchivedRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const MarkAsArchivedRequest * MarkAsArchivedResponse::request() const
{
    return static_cast<const MarkAsArchivedRequest *>(mgnResponse::request());
}

/*!
 * \reimp
 * Parses a successful mgn MarkAsArchived \a response.
 */
void MarkAsArchivedResponse::parseSuccess(QIODevice &response)
{
    //Q_D(MarkAsArchivedResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::mgn::MarkAsArchivedResponsePrivate
 * \brief The MarkAsArchivedResponsePrivate class provides private implementation for MarkAsArchivedResponse.
 * \internal
 *
 * \inmodule QtAwsmgn
 */

/*!
 * Constructs a MarkAsArchivedResponsePrivate object with public implementation \a q.
 */
MarkAsArchivedResponsePrivate::MarkAsArchivedResponsePrivate(
    MarkAsArchivedResponse * const q) : mgnResponsePrivate(q)
{

}

/*!
 * Parses a mgn MarkAsArchived response element from \a xml.
 */
void MarkAsArchivedResponsePrivate::parseMarkAsArchivedResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("MarkAsArchivedResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace mgn
} // namespace QtAws
