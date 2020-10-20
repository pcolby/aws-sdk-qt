/*
    Copyright 2013-2020 Paul Colby

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

#include "disassociatequalificationfromworkerresponse.h"
#include "disassociatequalificationfromworkerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::DisassociateQualificationFromWorkerResponse
 * \brief The DisassociateQualificationFromWorkerResponse class provides an interace for MTurk DisassociateQualificationFromWorker responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::disassociateQualificationFromWorker
 */

/*!
 * Constructs a DisassociateQualificationFromWorkerResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateQualificationFromWorkerResponse::DisassociateQualificationFromWorkerResponse(
        const DisassociateQualificationFromWorkerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new DisassociateQualificationFromWorkerResponsePrivate(this), parent)
{
    setRequest(new DisassociateQualificationFromWorkerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateQualificationFromWorkerRequest * DisassociateQualificationFromWorkerResponse::request() const
{
    Q_D(const DisassociateQualificationFromWorkerResponse);
    return static_cast<const DisassociateQualificationFromWorkerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MTurk DisassociateQualificationFromWorker \a response.
 */
void DisassociateQualificationFromWorkerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateQualificationFromWorkerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::DisassociateQualificationFromWorkerResponsePrivate
 * \brief The DisassociateQualificationFromWorkerResponsePrivate class provides private implementation for DisassociateQualificationFromWorkerResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a DisassociateQualificationFromWorkerResponsePrivate object with public implementation \a q.
 */
DisassociateQualificationFromWorkerResponsePrivate::DisassociateQualificationFromWorkerResponsePrivate(
    DisassociateQualificationFromWorkerResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk DisassociateQualificationFromWorker response element from \a xml.
 */
void DisassociateQualificationFromWorkerResponsePrivate::parseDisassociateQualificationFromWorkerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateQualificationFromWorkerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MTurk
} // namespace QtAws
