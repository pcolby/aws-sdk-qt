// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchdeletetableresponse.h"
#include "batchdeletetableresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::BatchDeleteTableResponse
 * \brief The BatchDeleteTableResponse class provides an interace for Glue BatchDeleteTable responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::batchDeleteTable
 */

/*!
 * Constructs a BatchDeleteTableResponse object for \a reply to \a request, with parent \a parent.
 */
BatchDeleteTableResponse::BatchDeleteTableResponse(
        const BatchDeleteTableRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new BatchDeleteTableResponsePrivate(this), parent)
{
    setRequest(new BatchDeleteTableRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchDeleteTableRequest * BatchDeleteTableResponse::request() const
{
    Q_D(const BatchDeleteTableResponse);
    return static_cast<const BatchDeleteTableRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue BatchDeleteTable \a response.
 */
void BatchDeleteTableResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchDeleteTableResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::BatchDeleteTableResponsePrivate
 * \brief The BatchDeleteTableResponsePrivate class provides private implementation for BatchDeleteTableResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a BatchDeleteTableResponsePrivate object with public implementation \a q.
 */
BatchDeleteTableResponsePrivate::BatchDeleteTableResponsePrivate(
    BatchDeleteTableResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue BatchDeleteTable response element from \a xml.
 */
void BatchDeleteTableResponsePrivate::parseBatchDeleteTableResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchDeleteTableResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
