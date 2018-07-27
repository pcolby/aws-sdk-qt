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

#include "createipsetresponse.h"
#include "createipsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::CreateIPSetResponse
 * \brief The CreateIPSetResponse class provides an interace for GuardDuty CreateIPSet responses.
 *
 * \inmodule QtAwsGuardDuty
 *
 *
 * \sa GuardDutyClient::createIPSet
 */

/*!
 * Constructs a CreateIPSetResponse object for \a reply to \a request, with parent \a parent.
 */
CreateIPSetResponse::CreateIPSetResponse(
        const CreateIPSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new CreateIPSetResponsePrivate(this), parent)
{
    setRequest(new CreateIPSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateIPSetRequest * CreateIPSetResponse::request() const
{
    Q_D(const CreateIPSetResponse);
    return static_cast<const CreateIPSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GuardDuty CreateIPSet \a response.
 */
void CreateIPSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateIPSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GuardDuty::CreateIPSetResponsePrivate
 * \brief The CreateIPSetResponsePrivate class provides private implementation for CreateIPSetResponse.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a CreateIPSetResponsePrivate object with public implementation \a q.
 */
CreateIPSetResponsePrivate::CreateIPSetResponsePrivate(
    CreateIPSetResponse * const q) : GuardDutyResponsePrivate(q)
{

}

/*!
 * Parses a GuardDuty CreateIPSet response element from \a xml.
 */
void CreateIPSetResponsePrivate::parseCreateIPSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateIPSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GuardDuty
} // namespace QtAws
