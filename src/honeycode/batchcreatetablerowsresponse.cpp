// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const BatchCreateTableRowsResponse);
    return static_cast<const BatchCreateTableRowsRequest *>(d->request);
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
