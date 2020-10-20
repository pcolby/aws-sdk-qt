/*
    Copyright 2013-2020 Paul Colby

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

#include "rebootdbinstanceresponse.h"
#include "rebootdbinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::RebootDBInstanceResponse
 * \brief The RebootDBInstanceResponse class provides an interace for DocDB RebootDBInstance responses.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::rebootDBInstance
 */

/*!
 * Constructs a RebootDBInstanceResponse object for \a reply to \a request, with parent \a parent.
 */
RebootDBInstanceResponse::RebootDBInstanceResponse(
        const RebootDBInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDBResponse(new RebootDBInstanceResponsePrivate(this), parent)
{
    setRequest(new RebootDBInstanceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RebootDBInstanceRequest * RebootDBInstanceResponse::request() const
{
    Q_D(const RebootDBInstanceResponse);
    return static_cast<const RebootDBInstanceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDB RebootDBInstance \a response.
 */
void RebootDBInstanceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RebootDBInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDB::RebootDBInstanceResponsePrivate
 * \brief The RebootDBInstanceResponsePrivate class provides private implementation for RebootDBInstanceResponse.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a RebootDBInstanceResponsePrivate object with public implementation \a q.
 */
RebootDBInstanceResponsePrivate::RebootDBInstanceResponsePrivate(
    RebootDBInstanceResponse * const q) : DocDBResponsePrivate(q)
{

}

/*!
 * Parses a DocDB RebootDBInstance response element from \a xml.
 */
void RebootDBInstanceResponsePrivate::parseRebootDBInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RebootDBInstanceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDB
} // namespace QtAws
