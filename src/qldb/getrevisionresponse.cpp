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

#include "getrevisionresponse.h"
#include "getrevisionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QLDB {

/*!
 * \class QtAws::QLDB::GetRevisionResponse
 * \brief The GetRevisionResponse class provides an interace for QLDB GetRevision responses.
 *
 * \inmodule QtAwsQLDB
 *
 *  The control plane for Amazon
 *
 * \sa QldbClient::getRevision
 */

/*!
 * Constructs a GetRevisionResponse object for \a reply to \a request, with parent \a parent.
 */
GetRevisionResponse::GetRevisionResponse(
        const GetRevisionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QldbResponse(new GetRevisionResponsePrivate(this), parent)
{
    setRequest(new GetRevisionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRevisionRequest * GetRevisionResponse::request() const
{
    return static_cast<const GetRevisionRequest *>(QldbResponse::request());
}

/*!
 * \reimp
 * Parses a successful QLDB GetRevision \a response.
 */
void GetRevisionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRevisionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QLDB::GetRevisionResponsePrivate
 * \brief The GetRevisionResponsePrivate class provides private implementation for GetRevisionResponse.
 * \internal
 *
 * \inmodule QtAwsQLDB
 */

/*!
 * Constructs a GetRevisionResponsePrivate object with public implementation \a q.
 */
GetRevisionResponsePrivate::GetRevisionResponsePrivate(
    GetRevisionResponse * const q) : QldbResponsePrivate(q)
{

}

/*!
 * Parses a QLDB GetRevision response element from \a xml.
 */
void GetRevisionResponsePrivate::parseGetRevisionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRevisionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QLDB
} // namespace QtAws
