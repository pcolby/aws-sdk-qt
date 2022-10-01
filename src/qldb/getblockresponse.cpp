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

#include "getblockresponse.h"
#include "getblockresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Qldb {

/*!
 * \class QtAws::Qldb::GetBlockResponse
 * \brief The GetBlockResponse class provides an interace for Qldb GetBlock responses.
 *
 * \inmodule QtAwsQldb
 *
 *  The control plane for Amazon
 *
 * \sa QldbClient::getBlock
 */

/*!
 * Constructs a GetBlockResponse object for \a reply to \a request, with parent \a parent.
 */
GetBlockResponse::GetBlockResponse(
        const GetBlockRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QldbResponse(new GetBlockResponsePrivate(this), parent)
{
    setRequest(new GetBlockRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBlockRequest * GetBlockResponse::request() const
{
    Q_D(const GetBlockResponse);
    return static_cast<const GetBlockRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Qldb GetBlock \a response.
 */
void GetBlockResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBlockResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Qldb::GetBlockResponsePrivate
 * \brief The GetBlockResponsePrivate class provides private implementation for GetBlockResponse.
 * \internal
 *
 * \inmodule QtAwsQldb
 */

/*!
 * Constructs a GetBlockResponsePrivate object with public implementation \a q.
 */
GetBlockResponsePrivate::GetBlockResponsePrivate(
    GetBlockResponse * const q) : QldbResponsePrivate(q)
{

}

/*!
 * Parses a Qldb GetBlock response element from \a xml.
 */
void GetBlockResponsePrivate::parseGetBlockResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBlockResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Qldb
} // namespace QtAws
