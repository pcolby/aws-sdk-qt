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

#include "updateexpirationforhitresponse.h"
#include "updateexpirationforhitresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::UpdateExpirationForHITResponse
 * \brief The UpdateExpirationForHITResponse class provides an interace for MTurk UpdateExpirationForHIT responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::updateExpirationForHIT
 */

/*!
 * Constructs a UpdateExpirationForHITResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateExpirationForHITResponse::UpdateExpirationForHITResponse(
        const UpdateExpirationForHITRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new UpdateExpirationForHITResponsePrivate(this), parent)
{
    setRequest(new UpdateExpirationForHITRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateExpirationForHITRequest * UpdateExpirationForHITResponse::request() const
{
    Q_D(const UpdateExpirationForHITResponse);
    return static_cast<const UpdateExpirationForHITRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MTurk UpdateExpirationForHIT \a response.
 */
void UpdateExpirationForHITResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateExpirationForHITResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::UpdateExpirationForHITResponsePrivate
 * \brief The UpdateExpirationForHITResponsePrivate class provides private implementation for UpdateExpirationForHITResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a UpdateExpirationForHITResponsePrivate object with public implementation \a q.
 */
UpdateExpirationForHITResponsePrivate::UpdateExpirationForHITResponsePrivate(
    UpdateExpirationForHITResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk UpdateExpirationForHIT response element from \a xml.
 */
void UpdateExpirationForHITResponsePrivate::parseUpdateExpirationForHITResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateExpirationForHITResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MTurk
} // namespace QtAws
