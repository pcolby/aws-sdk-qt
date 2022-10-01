// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const BatchUpsertTableRowsResponse);
    return static_cast<const BatchUpsertTableRowsRequest *>(d->request);
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
