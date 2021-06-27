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

#include "cancelworldgenerationjobresponse.h"
#include "cancelworldgenerationjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::CancelWorldGenerationJobResponse
 * \brief The CancelWorldGenerationJobResponse class provides an interace for RoboMaker CancelWorldGenerationJob responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::cancelWorldGenerationJob
 */

/*!
 * Constructs a CancelWorldGenerationJobResponse object for \a reply to \a request, with parent \a parent.
 */
CancelWorldGenerationJobResponse::CancelWorldGenerationJobResponse(
        const CancelWorldGenerationJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new CancelWorldGenerationJobResponsePrivate(this), parent)
{
    setRequest(new CancelWorldGenerationJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CancelWorldGenerationJobRequest * CancelWorldGenerationJobResponse::request() const
{
    return static_cast<const CancelWorldGenerationJobRequest *>(RoboMakerResponse::request());
}

/*!
 * \reimp
 * Parses a successful RoboMaker CancelWorldGenerationJob \a response.
 */
void CancelWorldGenerationJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CancelWorldGenerationJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::CancelWorldGenerationJobResponsePrivate
 * \brief The CancelWorldGenerationJobResponsePrivate class provides private implementation for CancelWorldGenerationJobResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a CancelWorldGenerationJobResponsePrivate object with public implementation \a q.
 */
CancelWorldGenerationJobResponsePrivate::CancelWorldGenerationJobResponsePrivate(
    CancelWorldGenerationJobResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker CancelWorldGenerationJob response element from \a xml.
 */
void CancelWorldGenerationJobResponsePrivate::parseCancelWorldGenerationJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelWorldGenerationJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
