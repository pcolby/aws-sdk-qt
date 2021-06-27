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

#include "deletestudiosessionmappingresponse.h"
#include "deletestudiosessionmappingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::DeleteStudioSessionMappingResponse
 * \brief The DeleteStudioSessionMappingResponse class provides an interace for EMR DeleteStudioSessionMapping responses.
 *
 * \inmodule QtAwsEMR
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS services to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::deleteStudioSessionMapping
 */

/*!
 * Constructs a DeleteStudioSessionMappingResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteStudioSessionMappingResponse::DeleteStudioSessionMappingResponse(
        const DeleteStudioSessionMappingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new DeleteStudioSessionMappingResponsePrivate(this), parent)
{
    setRequest(new DeleteStudioSessionMappingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteStudioSessionMappingRequest * DeleteStudioSessionMappingResponse::request() const
{
    return static_cast<const DeleteStudioSessionMappingRequest *>(EmrResponse::request());
}

/*!
 * \reimp
 * Parses a successful EMR DeleteStudioSessionMapping \a response.
 */
void DeleteStudioSessionMappingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteStudioSessionMappingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EMR::DeleteStudioSessionMappingResponsePrivate
 * \brief The DeleteStudioSessionMappingResponsePrivate class provides private implementation for DeleteStudioSessionMappingResponse.
 * \internal
 *
 * \inmodule QtAwsEMR
 */

/*!
 * Constructs a DeleteStudioSessionMappingResponsePrivate object with public implementation \a q.
 */
DeleteStudioSessionMappingResponsePrivate::DeleteStudioSessionMappingResponsePrivate(
    DeleteStudioSessionMappingResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a EMR DeleteStudioSessionMapping response element from \a xml.
 */
void DeleteStudioSessionMappingResponsePrivate::parseDeleteStudioSessionMappingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteStudioSessionMappingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EMR
} // namespace QtAws
