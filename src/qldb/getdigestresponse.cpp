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

#include "getdigestresponse.h"
#include "getdigestresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Qldb {

/*!
 * \class QtAws::Qldb::GetDigestResponse
 * \brief The GetDigestResponse class provides an interace for Qldb GetDigest responses.
 *
 * \inmodule QtAwsQldb
 *
 *  The control plane for Amazon
 *
 * \sa QldbClient::getDigest
 */

/*!
 * Constructs a GetDigestResponse object for \a reply to \a request, with parent \a parent.
 */
GetDigestResponse::GetDigestResponse(
        const GetDigestRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QldbResponse(new GetDigestResponsePrivate(this), parent)
{
    setRequest(new GetDigestRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDigestRequest * GetDigestResponse::request() const
{
    Q_D(const GetDigestResponse);
    return static_cast<const GetDigestRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Qldb GetDigest \a response.
 */
void GetDigestResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDigestResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Qldb::GetDigestResponsePrivate
 * \brief The GetDigestResponsePrivate class provides private implementation for GetDigestResponse.
 * \internal
 *
 * \inmodule QtAwsQldb
 */

/*!
 * Constructs a GetDigestResponsePrivate object with public implementation \a q.
 */
GetDigestResponsePrivate::GetDigestResponsePrivate(
    GetDigestResponse * const q) : QldbResponsePrivate(q)
{

}

/*!
 * Parses a Qldb GetDigest response element from \a xml.
 */
void GetDigestResponsePrivate::parseGetDigestResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDigestResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Qldb
} // namespace QtAws
