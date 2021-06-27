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

#include "stopsolutionversioncreationresponse.h"
#include "stopsolutionversioncreationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::StopSolutionVersionCreationResponse
 * \brief The StopSolutionVersionCreationResponse class provides an interace for Personalize StopSolutionVersionCreation responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::stopSolutionVersionCreation
 */

/*!
 * Constructs a StopSolutionVersionCreationResponse object for \a reply to \a request, with parent \a parent.
 */
StopSolutionVersionCreationResponse::StopSolutionVersionCreationResponse(
        const StopSolutionVersionCreationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new StopSolutionVersionCreationResponsePrivate(this), parent)
{
    setRequest(new StopSolutionVersionCreationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopSolutionVersionCreationRequest * StopSolutionVersionCreationResponse::request() const
{
    return static_cast<const StopSolutionVersionCreationRequest *>(PersonalizeResponse::request());
}

/*!
 * \reimp
 * Parses a successful Personalize StopSolutionVersionCreation \a response.
 */
void StopSolutionVersionCreationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopSolutionVersionCreationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::StopSolutionVersionCreationResponsePrivate
 * \brief The StopSolutionVersionCreationResponsePrivate class provides private implementation for StopSolutionVersionCreationResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a StopSolutionVersionCreationResponsePrivate object with public implementation \a q.
 */
StopSolutionVersionCreationResponsePrivate::StopSolutionVersionCreationResponsePrivate(
    StopSolutionVersionCreationResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize StopSolutionVersionCreation response element from \a xml.
 */
void StopSolutionVersionCreationResponsePrivate::parseStopSolutionVersionCreationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopSolutionVersionCreationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws
