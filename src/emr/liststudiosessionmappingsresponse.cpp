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

#include "liststudiosessionmappingsresponse.h"
#include "liststudiosessionmappingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::ListStudioSessionMappingsResponse
 * \brief The ListStudioSessionMappingsResponse class provides an interace for EMR ListStudioSessionMappings responses.
 *
 * \inmodule QtAwsEMR
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS services to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::listStudioSessionMappings
 */

/*!
 * Constructs a ListStudioSessionMappingsResponse object for \a reply to \a request, with parent \a parent.
 */
ListStudioSessionMappingsResponse::ListStudioSessionMappingsResponse(
        const ListStudioSessionMappingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new ListStudioSessionMappingsResponsePrivate(this), parent)
{
    setRequest(new ListStudioSessionMappingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListStudioSessionMappingsRequest * ListStudioSessionMappingsResponse::request() const
{
    return static_cast<const ListStudioSessionMappingsRequest *>(EmrResponse::request());
}

/*!
 * \reimp
 * Parses a successful EMR ListStudioSessionMappings \a response.
 */
void ListStudioSessionMappingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListStudioSessionMappingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EMR::ListStudioSessionMappingsResponsePrivate
 * \brief The ListStudioSessionMappingsResponsePrivate class provides private implementation for ListStudioSessionMappingsResponse.
 * \internal
 *
 * \inmodule QtAwsEMR
 */

/*!
 * Constructs a ListStudioSessionMappingsResponsePrivate object with public implementation \a q.
 */
ListStudioSessionMappingsResponsePrivate::ListStudioSessionMappingsResponsePrivate(
    ListStudioSessionMappingsResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a EMR ListStudioSessionMappings response element from \a xml.
 */
void ListStudioSessionMappingsResponsePrivate::parseListStudioSessionMappingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListStudioSessionMappingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EMR
} // namespace QtAws
