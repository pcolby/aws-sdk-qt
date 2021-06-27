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

#include "batchupserttablerowsresponse.h"
#include "batchupserttablerowsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Honeycode {

/*!
 * \class QtAws::Honeycode::BatchUpsertTableRowsResponse
 * \brief The BatchUpsertTableRowsResponse class provides an interace for Honeycode BatchUpsertTableRows responses.
 *
 * \inmodule QtAwsHoneycode
 *
 *  Amazon Honeycode is a fully managed service that allows you to quickly build mobile and web apps for teams—without
 *  programming. Build Honeycode apps for managing almost anything, like projects, customers, operations, approvals,
 *  resources, and even your team.
 *
 * \sa HoneycodeClient::batchUpsertTableRows
 */

/*!
 * Constructs a BatchUpsertTableRowsResponse object for \a reply to \a request, with parent \a parent.
 */
BatchUpsertTableRowsResponse::BatchUpsertTableRowsResponse(
        const BatchUpsertTableRowsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : HoneycodeResponse(new BatchUpsertTableRowsResponsePrivate(this), parent)
{
    setRequest(new BatchUpsertTableRowsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchUpsertTableRowsRequest * BatchUpsertTableRowsResponse::request() const
{
    return static_cast<const BatchUpsertTableRowsRequest *>(HoneycodeResponse::request());
}

/*!
 * \reimp
 * Parses a successful Honeycode BatchUpsertTableRows \a response.
 */
void BatchUpsertTableRowsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchUpsertTableRowsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Honeycode::BatchUpsertTableRowsResponsePrivate
 * \brief The BatchUpsertTableRowsResponsePrivate class provides private implementation for BatchUpsertTableRowsResponse.
 * \internal
 *
 * \inmodule QtAwsHoneycode
 */

/*!
 * Constructs a BatchUpsertTableRowsResponsePrivate object with public implementation \a q.
 */
BatchUpsertTableRowsResponsePrivate::BatchUpsertTableRowsResponsePrivate(
    BatchUpsertTableRowsResponse * const q) : HoneycodeResponsePrivate(q)
{

}

/*!
 * Parses a Honeycode BatchUpsertTableRows response element from \a xml.
 */
void BatchUpsertTableRowsResponsePrivate::parseBatchUpsertTableRowsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchUpsertTableRowsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Honeycode
} // namespace QtAws
