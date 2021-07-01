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

#include "updatehittypeofhitresponse.h"
#include "updatehittypeofhitresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::UpdateHITTypeOfHITResponse
 * \brief The UpdateHITTypeOfHITResponse class provides an interace for MTurk UpdateHITTypeOfHIT responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::updateHITTypeOfHIT
 */

/*!
 * Constructs a UpdateHITTypeOfHITResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateHITTypeOfHITResponse::UpdateHITTypeOfHITResponse(
        const UpdateHITTypeOfHITRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new UpdateHITTypeOfHITResponsePrivate(this), parent)
{
    setRequest(new UpdateHITTypeOfHITRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateHITTypeOfHITRequest * UpdateHITTypeOfHITResponse::request() const
{
    Q_D(const UpdateHITTypeOfHITResponse);
    return static_cast<const UpdateHITTypeOfHITRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MTurk UpdateHITTypeOfHIT \a response.
 */
void UpdateHITTypeOfHITResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateHITTypeOfHITResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::UpdateHITTypeOfHITResponsePrivate
 * \brief The UpdateHITTypeOfHITResponsePrivate class provides private implementation for UpdateHITTypeOfHITResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a UpdateHITTypeOfHITResponsePrivate object with public implementation \a q.
 */
UpdateHITTypeOfHITResponsePrivate::UpdateHITTypeOfHITResponsePrivate(
    UpdateHITTypeOfHITResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk UpdateHITTypeOfHIT response element from \a xml.
 */
void UpdateHITTypeOfHITResponsePrivate::parseUpdateHITTypeOfHITResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateHITTypeOfHITResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MTurk
} // namespace QtAws
