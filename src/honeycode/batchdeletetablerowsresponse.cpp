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

#include "batchdeletetablerowsresponse.h"
#include "batchdeletetablerowsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Honeycode {

/*!
 * \class QtAws::Honeycode::BatchDeleteTableRowsResponse
 * \brief The BatchDeleteTableRowsResponse class provides an interace for Honeycode BatchDeleteTableRows responses.
 *
 * \inmodule QtAwsHoneycode
 *
 *  Amazon Honeycode is a fully managed service that allows you to quickly build mobile and web apps for teams—without
 *  programming. Build Honeycode apps for managing almost anything, like projects, customers, operations, approvals,
 *  resources, and even your team.
 *
 * \sa HoneycodeClient::batchDeleteTableRows
 */

/*!
 * Constructs a BatchDeleteTableRowsResponse object for \a reply to \a request, with parent \a parent.
 */
BatchDeleteTableRowsResponse::BatchDeleteTableRowsResponse(
        const BatchDeleteTableRowsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : HoneycodeResponse(new BatchDeleteTableRowsResponsePrivate(this), parent)
{
    setRequest(new BatchDeleteTableRowsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchDeleteTableRowsRequest * BatchDeleteTableRowsResponse::request() const
{
    Q_D(const BatchDeleteTableRowsResponse);
    return static_cast<const BatchDeleteTableRowsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Honeycode BatchDeleteTableRows \a response.
 */
void BatchDeleteTableRowsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchDeleteTableRowsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Honeycode::BatchDeleteTableRowsResponsePrivate
 * \brief The BatchDeleteTableRowsResponsePrivate class provides private implementation for BatchDeleteTableRowsResponse.
 * \internal
 *
 * \inmodule QtAwsHoneycode
 */

/*!
 * Constructs a BatchDeleteTableRowsResponsePrivate object with public implementation \a q.
 */
BatchDeleteTableRowsResponsePrivate::BatchDeleteTableRowsResponsePrivate(
    BatchDeleteTableRowsResponse * const q) : HoneycodeResponsePrivate(q)
{

}

/*!
 * Parses a Honeycode BatchDeleteTableRows response element from \a xml.
 */
void BatchDeleteTableRowsResponsePrivate::parseBatchDeleteTableRowsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchDeleteTableRowsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Honeycode
} // namespace QtAws
