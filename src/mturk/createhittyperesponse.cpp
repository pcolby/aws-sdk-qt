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

#include "createhittyperesponse.h"
#include "createhittyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::CreateHITTypeResponse
 * \brief The CreateHITTypeResponse class provides an interace for MTurk CreateHITType responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::createHITType
 */

/*!
 * Constructs a CreateHITTypeResponse object for \a reply to \a request, with parent \a parent.
 */
CreateHITTypeResponse::CreateHITTypeResponse(
        const CreateHITTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new CreateHITTypeResponsePrivate(this), parent)
{
    setRequest(new CreateHITTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateHITTypeRequest * CreateHITTypeResponse::request() const
{
    return static_cast<const CreateHITTypeRequest *>(MTurkResponse::request());
}

/*!
 * \reimp
 * Parses a successful MTurk CreateHITType \a response.
 */
void CreateHITTypeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateHITTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::CreateHITTypeResponsePrivate
 * \brief The CreateHITTypeResponsePrivate class provides private implementation for CreateHITTypeResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a CreateHITTypeResponsePrivate object with public implementation \a q.
 */
CreateHITTypeResponsePrivate::CreateHITTypeResponsePrivate(
    CreateHITTypeResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk CreateHITType response element from \a xml.
 */
void CreateHITTypeResponsePrivate::parseCreateHITTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateHITTypeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MTurk
} // namespace QtAws
