/*
    Copyright 2013-2020 Paul Colby

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
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
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
