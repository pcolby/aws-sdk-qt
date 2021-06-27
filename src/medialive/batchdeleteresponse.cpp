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

#include "batchdeleteresponse.h"
#include "batchdeleteresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::BatchDeleteResponse
 * \brief The BatchDeleteResponse class provides an interace for MediaLive BatchDelete responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::batchDelete
 */

/*!
 * Constructs a BatchDeleteResponse object for \a reply to \a request, with parent \a parent.
 */
BatchDeleteResponse::BatchDeleteResponse(
        const BatchDeleteRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new BatchDeleteResponsePrivate(this), parent)
{
    setRequest(new BatchDeleteRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchDeleteRequest * BatchDeleteResponse::request() const
{
    return static_cast<const BatchDeleteRequest *>(MediaLiveResponse::request());
}

/*!
 * \reimp
 * Parses a successful MediaLive BatchDelete \a response.
 */
void BatchDeleteResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchDeleteResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::BatchDeleteResponsePrivate
 * \brief The BatchDeleteResponsePrivate class provides private implementation for BatchDeleteResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a BatchDeleteResponsePrivate object with public implementation \a q.
 */
BatchDeleteResponsePrivate::BatchDeleteResponsePrivate(
    BatchDeleteResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive BatchDelete response element from \a xml.
 */
void BatchDeleteResponsePrivate::parseBatchDeleteResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchDeleteResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
