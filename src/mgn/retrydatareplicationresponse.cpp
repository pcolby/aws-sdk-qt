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

#include "retrydatareplicationresponse.h"
#include "retrydatareplicationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace mgn {

/*!
 * \class QtAws::mgn::RetryDataReplicationResponse
 * \brief The RetryDataReplicationResponse class provides an interace for mgn RetryDataReplication responses.
 *
 * \inmodule QtAwsmgn
 *
 *  The Application Migration Service
 *
 * \sa mgnClient::retryDataReplication
 */

/*!
 * Constructs a RetryDataReplicationResponse object for \a reply to \a request, with parent \a parent.
 */
RetryDataReplicationResponse::RetryDataReplicationResponse(
        const RetryDataReplicationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : mgnResponse(new RetryDataReplicationResponsePrivate(this), parent)
{
    setRequest(new RetryDataReplicationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RetryDataReplicationRequest * RetryDataReplicationResponse::request() const
{
    return static_cast<const RetryDataReplicationRequest *>(mgnResponse::request());
}

/*!
 * \reimp
 * Parses a successful mgn RetryDataReplication \a response.
 */
void RetryDataReplicationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RetryDataReplicationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::mgn::RetryDataReplicationResponsePrivate
 * \brief The RetryDataReplicationResponsePrivate class provides private implementation for RetryDataReplicationResponse.
 * \internal
 *
 * \inmodule QtAwsmgn
 */

/*!
 * Constructs a RetryDataReplicationResponsePrivate object with public implementation \a q.
 */
RetryDataReplicationResponsePrivate::RetryDataReplicationResponsePrivate(
    RetryDataReplicationResponse * const q) : mgnResponsePrivate(q)
{

}

/*!
 * Parses a mgn RetryDataReplication response element from \a xml.
 */
void RetryDataReplicationResponsePrivate::parseRetryDataReplicationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RetryDataReplicationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace mgn
} // namespace QtAws
