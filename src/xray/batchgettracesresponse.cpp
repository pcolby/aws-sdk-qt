/*
    Copyright 2013-2018 Paul Colby

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

#include "batchgettracesresponse.h"
#include "batchgettracesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::BatchGetTracesResponse
 * \brief The BatchGetTracesResponse class provides an interace for XRay BatchGetTraces responses.
 *
 * \inmodule QtAwsXRay
 *
 *  AWS X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by processing those
 *
 * \sa XRayClient::batchGetTraces
 */

/*!
 * Constructs a BatchGetTracesResponse object for \a reply to \a request, with parent \a parent.
 */
BatchGetTracesResponse::BatchGetTracesResponse(
        const BatchGetTracesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : XRayResponse(new BatchGetTracesResponsePrivate(this), parent)
{
    setRequest(new BatchGetTracesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchGetTracesRequest * BatchGetTracesResponse::request() const
{
    Q_D(const BatchGetTracesResponse);
    return static_cast<const BatchGetTracesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful XRay BatchGetTraces \a response.
 */
void BatchGetTracesResponse::parseSuccess(QIODevice &response)
{
    Q_D(BatchGetTracesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::XRay::BatchGetTracesResponsePrivate
 * \brief The BatchGetTracesResponsePrivate class provides private implementation for BatchGetTracesResponse.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a BatchGetTracesResponsePrivate object with public implementation \a q.
 */
BatchGetTracesResponsePrivate::BatchGetTracesResponsePrivate(
    BatchGetTracesResponse * const q) : XRayResponsePrivate(q)
{

}

/*!
 * Parses a XRay BatchGetTraces response element from \a xml.
 */
void BatchGetTracesResponsePrivate::parseBatchGetTracesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchGetTracesResponse"));
    /// @todo
}

} // namespace XRay
} // namespace QtAws
