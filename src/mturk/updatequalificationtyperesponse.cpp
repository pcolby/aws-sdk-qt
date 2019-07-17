/*
    Copyright 2013-2019 Paul Colby

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

#include "updatequalificationtyperesponse.h"
#include "updatequalificationtyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::UpdateQualificationTypeResponse
 * \brief The UpdateQualificationTypeResponse class provides an interace for MTurk UpdateQualificationType responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::updateQualificationType
 */

/*!
 * Constructs a UpdateQualificationTypeResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateQualificationTypeResponse::UpdateQualificationTypeResponse(
        const UpdateQualificationTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new UpdateQualificationTypeResponsePrivate(this), parent)
{
    setRequest(new UpdateQualificationTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateQualificationTypeRequest * UpdateQualificationTypeResponse::request() const
{
    Q_D(const UpdateQualificationTypeResponse);
    return static_cast<const UpdateQualificationTypeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MTurk UpdateQualificationType \a response.
 */
void UpdateQualificationTypeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateQualificationTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::UpdateQualificationTypeResponsePrivate
 * \brief The UpdateQualificationTypeResponsePrivate class provides private implementation for UpdateQualificationTypeResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a UpdateQualificationTypeResponsePrivate object with public implementation \a q.
 */
UpdateQualificationTypeResponsePrivate::UpdateQualificationTypeResponsePrivate(
    UpdateQualificationTypeResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk UpdateQualificationType response element from \a xml.
 */
void UpdateQualificationTypeResponsePrivate::parseUpdateQualificationTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateQualificationTypeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MTurk
} // namespace QtAws
