// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchgettriggersresponse.h"
#include "batchgettriggersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::BatchGetTriggersResponse
 * \brief The BatchGetTriggersResponse class provides an interace for Glue BatchGetTriggers responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::batchGetTriggers
 */

/*!
 * Constructs a BatchGetTriggersResponse object for \a reply to \a request, with parent \a parent.
 */
BatchGetTriggersResponse::BatchGetTriggersResponse(
        const BatchGetTriggersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new BatchGetTriggersResponsePrivate(this), parent)
{
    setRequest(new BatchGetTriggersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchGetTriggersRequest * BatchGetTriggersResponse::request() const
{
    Q_D(const BatchGetTriggersResponse);
    return static_cast<const BatchGetTriggersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue BatchGetTriggers \a response.
 */
void BatchGetTriggersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchGetTriggersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::BatchGetTriggersResponsePrivate
 * \brief The BatchGetTriggersResponsePrivate class provides private implementation for BatchGetTriggersResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a BatchGetTriggersResponsePrivate object with public implementation \a q.
 */
BatchGetTriggersResponsePrivate::BatchGetTriggersResponsePrivate(
    BatchGetTriggersResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue BatchGetTriggers response element from \a xml.
 */
void BatchGetTriggersResponsePrivate::parseBatchGetTriggersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchGetTriggersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
