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

#include "cancelworldexportjobresponse.h"
#include "cancelworldexportjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::CancelWorldExportJobResponse
 * \brief The CancelWorldExportJobResponse class provides an interace for RoboMaker CancelWorldExportJob responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::cancelWorldExportJob
 */

/*!
 * Constructs a CancelWorldExportJobResponse object for \a reply to \a request, with parent \a parent.
 */
CancelWorldExportJobResponse::CancelWorldExportJobResponse(
        const CancelWorldExportJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new CancelWorldExportJobResponsePrivate(this), parent)
{
    setRequest(new CancelWorldExportJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CancelWorldExportJobRequest * CancelWorldExportJobResponse::request() const
{
    return static_cast<const CancelWorldExportJobRequest *>(RoboMakerResponse::request());
}

/*!
 * \reimp
 * Parses a successful RoboMaker CancelWorldExportJob \a response.
 */
void CancelWorldExportJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CancelWorldExportJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::CancelWorldExportJobResponsePrivate
 * \brief The CancelWorldExportJobResponsePrivate class provides private implementation for CancelWorldExportJobResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a CancelWorldExportJobResponsePrivate object with public implementation \a q.
 */
CancelWorldExportJobResponsePrivate::CancelWorldExportJobResponsePrivate(
    CancelWorldExportJobResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker CancelWorldExportJob response element from \a xml.
 */
void CancelWorldExportJobResponsePrivate::parseCancelWorldExportJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelWorldExportJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
