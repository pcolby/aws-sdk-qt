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

#include "associatequalificationwithworkerresponse.h"
#include "associatequalificationwithworkerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::AssociateQualificationWithWorkerResponse
 * \brief The AssociateQualificationWithWorkerResponse class provides an interace for MTurk AssociateQualificationWithWorker responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::associateQualificationWithWorker
 */

/*!
 * Constructs a AssociateQualificationWithWorkerResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateQualificationWithWorkerResponse::AssociateQualificationWithWorkerResponse(
        const AssociateQualificationWithWorkerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new AssociateQualificationWithWorkerResponsePrivate(this), parent)
{
    setRequest(new AssociateQualificationWithWorkerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateQualificationWithWorkerRequest * AssociateQualificationWithWorkerResponse::request() const
{
    Q_D(const AssociateQualificationWithWorkerResponse);
    return static_cast<const AssociateQualificationWithWorkerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MTurk AssociateQualificationWithWorker \a response.
 */
void AssociateQualificationWithWorkerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateQualificationWithWorkerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::AssociateQualificationWithWorkerResponsePrivate
 * \brief The AssociateQualificationWithWorkerResponsePrivate class provides private implementation for AssociateQualificationWithWorkerResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a AssociateQualificationWithWorkerResponsePrivate object with public implementation \a q.
 */
AssociateQualificationWithWorkerResponsePrivate::AssociateQualificationWithWorkerResponsePrivate(
    AssociateQualificationWithWorkerResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk AssociateQualificationWithWorker response element from \a xml.
 */
void AssociateQualificationWithWorkerResponsePrivate::parseAssociateQualificationWithWorkerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateQualificationWithWorkerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MTurk
} // namespace QtAws
