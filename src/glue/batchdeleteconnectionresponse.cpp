// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchdeleteconnectionresponse.h"
#include "batchdeleteconnectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::BatchDeleteConnectionResponse
 * \brief The BatchDeleteConnectionResponse class provides an interace for Glue BatchDeleteConnection responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::batchDeleteConnection
 */

/*!
 * Constructs a BatchDeleteConnectionResponse object for \a reply to \a request, with parent \a parent.
 */
BatchDeleteConnectionResponse::BatchDeleteConnectionResponse(
        const BatchDeleteConnectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new BatchDeleteConnectionResponsePrivate(this), parent)
{
    setRequest(new BatchDeleteConnectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchDeleteConnectionRequest * BatchDeleteConnectionResponse::request() const
{
    Q_D(const BatchDeleteConnectionResponse);
    return static_cast<const BatchDeleteConnectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue BatchDeleteConnection \a response.
 */
void BatchDeleteConnectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchDeleteConnectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::BatchDeleteConnectionResponsePrivate
 * \brief The BatchDeleteConnectionResponsePrivate class provides private implementation for BatchDeleteConnectionResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a BatchDeleteConnectionResponsePrivate object with public implementation \a q.
 */
BatchDeleteConnectionResponsePrivate::BatchDeleteConnectionResponsePrivate(
    BatchDeleteConnectionResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue BatchDeleteConnection response element from \a xml.
 */
void BatchDeleteConnectionResponsePrivate::parseBatchDeleteConnectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchDeleteConnectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
