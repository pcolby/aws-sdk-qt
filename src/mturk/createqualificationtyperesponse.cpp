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

#include "createqualificationtyperesponse.h"
#include "createqualificationtyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::CreateQualificationTypeResponse
 * \brief The CreateQualificationTypeResponse class provides an interace for MTurk CreateQualificationType responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::createQualificationType
 */

/*!
 * Constructs a CreateQualificationTypeResponse object for \a reply to \a request, with parent \a parent.
 */
CreateQualificationTypeResponse::CreateQualificationTypeResponse(
        const CreateQualificationTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new CreateQualificationTypeResponsePrivate(this), parent)
{
    setRequest(new CreateQualificationTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateQualificationTypeRequest * CreateQualificationTypeResponse::request() const
{
    Q_D(const CreateQualificationTypeResponse);
    return static_cast<const CreateQualificationTypeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MTurk CreateQualificationType \a response.
 */
void CreateQualificationTypeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateQualificationTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::CreateQualificationTypeResponsePrivate
 * \brief The CreateQualificationTypeResponsePrivate class provides private implementation for CreateQualificationTypeResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a CreateQualificationTypeResponsePrivate object with public implementation \a q.
 */
CreateQualificationTypeResponsePrivate::CreateQualificationTypeResponsePrivate(
    CreateQualificationTypeResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk CreateQualificationType response element from \a xml.
 */
void CreateQualificationTypeResponsePrivate::parseCreateQualificationTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateQualificationTypeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MTurk
} // namespace QtAws
