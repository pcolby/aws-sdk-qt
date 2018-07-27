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

#include "createfilterresponse.h"
#include "createfilterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::CreateFilterResponse
 * \brief The CreateFilterResponse class provides an interace for GuardDuty CreateFilter responses.
 *
 * \inmodule QtAwsGuardDuty
 *
 *
 * \sa GuardDutyClient::createFilter
 */

/*!
 * Constructs a CreateFilterResponse object for \a reply to \a request, with parent \a parent.
 */
CreateFilterResponse::CreateFilterResponse(
        const CreateFilterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new CreateFilterResponsePrivate(this), parent)
{
    setRequest(new CreateFilterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateFilterRequest * CreateFilterResponse::request() const
{
    Q_D(const CreateFilterResponse);
    return static_cast<const CreateFilterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GuardDuty CreateFilter \a response.
 */
void CreateFilterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateFilterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GuardDuty::CreateFilterResponsePrivate
 * \brief The CreateFilterResponsePrivate class provides private implementation for CreateFilterResponse.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a CreateFilterResponsePrivate object with public implementation \a q.
 */
CreateFilterResponsePrivate::CreateFilterResponsePrivate(
    CreateFilterResponse * const q) : GuardDutyResponsePrivate(q)
{

}

/*!
 * Parses a GuardDuty CreateFilter response element from \a xml.
 */
void CreateFilterResponsePrivate::parseCreateFilterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateFilterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GuardDuty
} // namespace QtAws
