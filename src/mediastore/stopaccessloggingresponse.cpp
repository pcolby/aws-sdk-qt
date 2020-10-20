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

#include "stopaccessloggingresponse.h"
#include "stopaccessloggingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::StopAccessLoggingResponse
 * \brief The StopAccessLoggingResponse class provides an interace for MediaStore StopAccessLogging responses.
 *
 * \inmodule QtAwsMediaStore
 *
 *  An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 *  create, read, and delete objects.
 *
 * \sa MediaStoreClient::stopAccessLogging
 */

/*!
 * Constructs a StopAccessLoggingResponse object for \a reply to \a request, with parent \a parent.
 */
StopAccessLoggingResponse::StopAccessLoggingResponse(
        const StopAccessLoggingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaStoreResponse(new StopAccessLoggingResponsePrivate(this), parent)
{
    setRequest(new StopAccessLoggingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopAccessLoggingRequest * StopAccessLoggingResponse::request() const
{
    Q_D(const StopAccessLoggingResponse);
    return static_cast<const StopAccessLoggingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaStore StopAccessLogging \a response.
 */
void StopAccessLoggingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopAccessLoggingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaStore::StopAccessLoggingResponsePrivate
 * \brief The StopAccessLoggingResponsePrivate class provides private implementation for StopAccessLoggingResponse.
 * \internal
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a StopAccessLoggingResponsePrivate object with public implementation \a q.
 */
StopAccessLoggingResponsePrivate::StopAccessLoggingResponsePrivate(
    StopAccessLoggingResponse * const q) : MediaStoreResponsePrivate(q)
{

}

/*!
 * Parses a MediaStore StopAccessLogging response element from \a xml.
 */
void StopAccessLoggingResponsePrivate::parseStopAccessLoggingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopAccessLoggingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaStore
} // namespace QtAws
