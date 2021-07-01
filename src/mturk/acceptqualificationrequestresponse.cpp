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

#include "acceptqualificationrequestresponse.h"
#include "acceptqualificationrequestresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::AcceptQualificationRequestResponse
 * \brief The AcceptQualificationRequestResponse class provides an interace for MTurk AcceptQualificationRequest responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::acceptQualificationRequest
 */

/*!
 * Constructs a AcceptQualificationRequestResponse object for \a reply to \a request, with parent \a parent.
 */
AcceptQualificationRequestResponse::AcceptQualificationRequestResponse(
        const AcceptQualificationRequestRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new AcceptQualificationRequestResponsePrivate(this), parent)
{
    setRequest(new AcceptQualificationRequestRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AcceptQualificationRequestRequest * AcceptQualificationRequestResponse::request() const
{
    Q_D(const AcceptQualificationRequestResponse);
    return static_cast<const AcceptQualificationRequestRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MTurk AcceptQualificationRequest \a response.
 */
void AcceptQualificationRequestResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AcceptQualificationRequestResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::AcceptQualificationRequestResponsePrivate
 * \brief The AcceptQualificationRequestResponsePrivate class provides private implementation for AcceptQualificationRequestResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a AcceptQualificationRequestResponsePrivate object with public implementation \a q.
 */
AcceptQualificationRequestResponsePrivate::AcceptQualificationRequestResponsePrivate(
    AcceptQualificationRequestResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk AcceptQualificationRequest response element from \a xml.
 */
void AcceptQualificationRequestResponsePrivate::parseAcceptQualificationRequestResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AcceptQualificationRequestResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MTurk
} // namespace QtAws
