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

#include "batchcreatetablerowsresponse.h"
#include "batchcreatetablerowsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Honeycode {

/*!
 * \class QtAws::Honeycode::BatchCreateTableRowsResponse
 * \brief The BatchCreateTableRowsResponse class provides an interace for Honeycode BatchCreateTableRows responses.
 *
 * \inmodule QtAwsHoneycode
 *
 *  Amazon Honeycode is a fully managed service that allows you to quickly build mobile and web apps for teams—without
 *  programming. Build Honeycode apps for managing almost anything, like projects, customers, operations, approvals,
 *  resources, and even your team.
 *
 * \sa HoneycodeClient::batchCreateTableRows
 */

/*!
 * Constructs a BatchCreateTableRowsResponse object for \a reply to \a request, with parent \a parent.
 */
BatchCreateTableRowsResponse::BatchCreateTableRowsResponse(
        const BatchCreateTableRowsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : HoneycodeResponse(new BatchCreateTableRowsResponsePrivate(this), parent)
{
    setRequest(new BatchCreateTableRowsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchCreateTableRowsRequest * BatchCreateTableRowsResponse::request() const
{
    return static_cast<const BatchCreateTableRowsRequest *>(HoneycodeResponse::request());
}

/*!
 * \reimp
 * Parses a successful Honeycode BatchCreateTableRows \a response.
 */
void BatchCreateTableRowsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchCreateTableRowsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Honeycode::BatchCreateTableRowsResponsePrivate
 * \brief The BatchCreateTableRowsResponsePrivate class provides private implementation for BatchCreateTableRowsResponse.
 * \internal
 *
 * \inmodule QtAwsHoneycode
 */

/*!
 * Constructs a BatchCreateTableRowsResponsePrivate object with public implementation \a q.
 */
BatchCreateTableRowsResponsePrivate::BatchCreateTableRowsResponsePrivate(
    BatchCreateTableRowsResponse * const q) : HoneycodeResponsePrivate(q)
{

}

/*!
 * Parses a Honeycode BatchCreateTableRows response element from \a xml.
 */
void BatchCreateTableRowsResponsePrivate::parseBatchCreateTableRowsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchCreateTableRowsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Honeycode
} // namespace QtAws
