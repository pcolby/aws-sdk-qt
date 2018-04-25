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

#include "getqualificationtyperesponse.h"
#include "getqualificationtyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::GetQualificationTypeResponse
 * \brief The GetQualificationTypeResponse class provides an interace for MTurk GetQualificationType responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::getQualificationType
 */

/*!
 * Constructs a GetQualificationTypeResponse object for \a reply to \a request, with parent \a parent.
 */
GetQualificationTypeResponse::GetQualificationTypeResponse(
        const GetQualificationTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new GetQualificationTypeResponsePrivate(this), parent)
{
    setRequest(new GetQualificationTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetQualificationTypeRequest * GetQualificationTypeResponse::request() const
{
    Q_D(const GetQualificationTypeResponse);
    return static_cast<const GetQualificationTypeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MTurk GetQualificationType \a response.
 */
void GetQualificationTypeResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetQualificationTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::GetQualificationTypeResponsePrivate
 * \brief The GetQualificationTypeResponsePrivate class provides private implementation for GetQualificationTypeResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a GetQualificationTypeResponsePrivate object with public implementation \a q.
 */
GetQualificationTypeResponsePrivate::GetQualificationTypeResponsePrivate(
    GetQualificationTypeResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk GetQualificationType response element from \a xml.
 */
void GetQualificationTypeResponsePrivate::parseGetQualificationTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetQualificationTypeResponse"));
    /// @todo
}

} // namespace MTurk
} // namespace QtAws
