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

#include "rejectqualificationrequestresponse.h"
#include "rejectqualificationrequestresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::RejectQualificationRequestResponse
 * \brief The RejectQualificationRequestResponse class provides an interace for MTurk RejectQualificationRequest responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::rejectQualificationRequest
 */

/*!
 * Constructs a RejectQualificationRequestResponse object for \a reply to \a request, with parent \a parent.
 */
RejectQualificationRequestResponse::RejectQualificationRequestResponse(
        const RejectQualificationRequestRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new RejectQualificationRequestResponsePrivate(this), parent)
{
    setRequest(new RejectQualificationRequestRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RejectQualificationRequestRequest * RejectQualificationRequestResponse::request() const
{
    Q_D(const RejectQualificationRequestResponse);
    return static_cast<const RejectQualificationRequestRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MTurk RejectQualificationRequest \a response.
 */
void RejectQualificationRequestResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RejectQualificationRequestResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::RejectQualificationRequestResponsePrivate
 * \brief The RejectQualificationRequestResponsePrivate class provides private implementation for RejectQualificationRequestResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a RejectQualificationRequestResponsePrivate object with public implementation \a q.
 */
RejectQualificationRequestResponsePrivate::RejectQualificationRequestResponsePrivate(
    RejectQualificationRequestResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk RejectQualificationRequest response element from \a xml.
 */
void RejectQualificationRequestResponsePrivate::parseRejectQualificationRequestResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RejectQualificationRequestResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MTurk
} // namespace QtAws
