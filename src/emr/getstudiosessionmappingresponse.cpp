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

#include "getstudiosessionmappingresponse.h"
#include "getstudiosessionmappingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::GetStudioSessionMappingResponse
 * \brief The GetStudioSessionMappingResponse class provides an interace for EMR GetStudioSessionMapping responses.
 *
 * \inmodule QtAwsEMR
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS services to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::getStudioSessionMapping
 */

/*!
 * Constructs a GetStudioSessionMappingResponse object for \a reply to \a request, with parent \a parent.
 */
GetStudioSessionMappingResponse::GetStudioSessionMappingResponse(
        const GetStudioSessionMappingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new GetStudioSessionMappingResponsePrivate(this), parent)
{
    setRequest(new GetStudioSessionMappingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetStudioSessionMappingRequest * GetStudioSessionMappingResponse::request() const
{
    return static_cast<const GetStudioSessionMappingRequest *>(EmrResponse::request());
}

/*!
 * \reimp
 * Parses a successful EMR GetStudioSessionMapping \a response.
 */
void GetStudioSessionMappingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetStudioSessionMappingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EMR::GetStudioSessionMappingResponsePrivate
 * \brief The GetStudioSessionMappingResponsePrivate class provides private implementation for GetStudioSessionMappingResponse.
 * \internal
 *
 * \inmodule QtAwsEMR
 */

/*!
 * Constructs a GetStudioSessionMappingResponsePrivate object with public implementation \a q.
 */
GetStudioSessionMappingResponsePrivate::GetStudioSessionMappingResponsePrivate(
    GetStudioSessionMappingResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a EMR GetStudioSessionMapping response element from \a xml.
 */
void GetStudioSessionMappingResponsePrivate::parseGetStudioSessionMappingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetStudioSessionMappingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EMR
} // namespace QtAws
