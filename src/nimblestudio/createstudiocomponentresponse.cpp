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

#include "createstudiocomponentresponse.h"
#include "createstudiocomponentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::CreateStudioComponentResponse
 * \brief The CreateStudioComponentResponse class provides an interace for NimbleStudio CreateStudioComponent responses.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::createStudioComponent
 */

/*!
 * Constructs a CreateStudioComponentResponse object for \a reply to \a request, with parent \a parent.
 */
CreateStudioComponentResponse::CreateStudioComponentResponse(
        const CreateStudioComponentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleStudioResponse(new CreateStudioComponentResponsePrivate(this), parent)
{
    setRequest(new CreateStudioComponentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateStudioComponentRequest * CreateStudioComponentResponse::request() const
{
    Q_D(const CreateStudioComponentResponse);
    return static_cast<const CreateStudioComponentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NimbleStudio CreateStudioComponent \a response.
 */
void CreateStudioComponentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateStudioComponentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NimbleStudio::CreateStudioComponentResponsePrivate
 * \brief The CreateStudioComponentResponsePrivate class provides private implementation for CreateStudioComponentResponse.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a CreateStudioComponentResponsePrivate object with public implementation \a q.
 */
CreateStudioComponentResponsePrivate::CreateStudioComponentResponsePrivate(
    CreateStudioComponentResponse * const q) : NimbleStudioResponsePrivate(q)
{

}

/*!
 * Parses a NimbleStudio CreateStudioComponent response element from \a xml.
 */
void CreateStudioComponentResponsePrivate::parseCreateStudioComponentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateStudioComponentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NimbleStudio
} // namespace QtAws
