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

#include "createadditionalassignmentsforhitresponse.h"
#include "createadditionalassignmentsforhitresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::CreateAdditionalAssignmentsForHITResponse
 * \brief The CreateAdditionalAssignmentsForHITResponse class provides an interace for MTurk CreateAdditionalAssignmentsForHIT responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::createAdditionalAssignmentsForHIT
 */

/*!
 * Constructs a CreateAdditionalAssignmentsForHITResponse object for \a reply to \a request, with parent \a parent.
 */
CreateAdditionalAssignmentsForHITResponse::CreateAdditionalAssignmentsForHITResponse(
        const CreateAdditionalAssignmentsForHITRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new CreateAdditionalAssignmentsForHITResponsePrivate(this), parent)
{
    setRequest(new CreateAdditionalAssignmentsForHITRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateAdditionalAssignmentsForHITRequest * CreateAdditionalAssignmentsForHITResponse::request() const
{
    Q_D(const CreateAdditionalAssignmentsForHITResponse);
    return static_cast<const CreateAdditionalAssignmentsForHITRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MTurk CreateAdditionalAssignmentsForHIT \a response.
 */
void CreateAdditionalAssignmentsForHITResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateAdditionalAssignmentsForHITResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::CreateAdditionalAssignmentsForHITResponsePrivate
 * \brief The CreateAdditionalAssignmentsForHITResponsePrivate class provides private implementation for CreateAdditionalAssignmentsForHITResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a CreateAdditionalAssignmentsForHITResponsePrivate object with public implementation \a q.
 */
CreateAdditionalAssignmentsForHITResponsePrivate::CreateAdditionalAssignmentsForHITResponsePrivate(
    CreateAdditionalAssignmentsForHITResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk CreateAdditionalAssignmentsForHIT response element from \a xml.
 */
void CreateAdditionalAssignmentsForHITResponsePrivate::parseCreateAdditionalAssignmentsForHITResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAdditionalAssignmentsForHITResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MTurk
} // namespace QtAws
