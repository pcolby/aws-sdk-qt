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

#include "createhitwithhittyperesponse.h"
#include "createhitwithhittyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::CreateHITWithHITTypeResponse
 * \brief The CreateHITWithHITTypeResponse class provides an interace for MTurk CreateHITWithHITType responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::createHITWithHITType
 */

/*!
 * Constructs a CreateHITWithHITTypeResponse object for \a reply to \a request, with parent \a parent.
 */
CreateHITWithHITTypeResponse::CreateHITWithHITTypeResponse(
        const CreateHITWithHITTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new CreateHITWithHITTypeResponsePrivate(this), parent)
{
    setRequest(new CreateHITWithHITTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateHITWithHITTypeRequest * CreateHITWithHITTypeResponse::request() const
{
    Q_D(const CreateHITWithHITTypeResponse);
    return static_cast<const CreateHITWithHITTypeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MTurk CreateHITWithHITType \a response.
 */
void CreateHITWithHITTypeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateHITWithHITTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::CreateHITWithHITTypeResponsePrivate
 * \brief The CreateHITWithHITTypeResponsePrivate class provides private implementation for CreateHITWithHITTypeResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a CreateHITWithHITTypeResponsePrivate object with public implementation \a q.
 */
CreateHITWithHITTypeResponsePrivate::CreateHITWithHITTypeResponsePrivate(
    CreateHITWithHITTypeResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk CreateHITWithHITType response element from \a xml.
 */
void CreateHITWithHITTypeResponsePrivate::parseCreateHITWithHITTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateHITWithHITTypeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MTurk
} // namespace QtAws
