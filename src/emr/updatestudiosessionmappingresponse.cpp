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

#include "updatestudiosessionmappingresponse.h"
#include "updatestudiosessionmappingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::UpdateStudioSessionMappingResponse
 * \brief The UpdateStudioSessionMappingResponse class provides an interace for Emr UpdateStudioSessionMapping responses.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::updateStudioSessionMapping
 */

/*!
 * Constructs a UpdateStudioSessionMappingResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateStudioSessionMappingResponse::UpdateStudioSessionMappingResponse(
        const UpdateStudioSessionMappingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new UpdateStudioSessionMappingResponsePrivate(this), parent)
{
    setRequest(new UpdateStudioSessionMappingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateStudioSessionMappingRequest * UpdateStudioSessionMappingResponse::request() const
{
    Q_D(const UpdateStudioSessionMappingResponse);
    return static_cast<const UpdateStudioSessionMappingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Emr UpdateStudioSessionMapping \a response.
 */
void UpdateStudioSessionMappingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateStudioSessionMappingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Emr::UpdateStudioSessionMappingResponsePrivate
 * \brief The UpdateStudioSessionMappingResponsePrivate class provides private implementation for UpdateStudioSessionMappingResponse.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a UpdateStudioSessionMappingResponsePrivate object with public implementation \a q.
 */
UpdateStudioSessionMappingResponsePrivate::UpdateStudioSessionMappingResponsePrivate(
    UpdateStudioSessionMappingResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a Emr UpdateStudioSessionMapping response element from \a xml.
 */
void UpdateStudioSessionMappingResponsePrivate::parseUpdateStudioSessionMappingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateStudioSessionMappingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Emr
} // namespace QtAws
