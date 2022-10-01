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

#include "createlftagresponse.h"
#include "createlftagresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::CreateLFTagResponse
 * \brief The CreateLFTagResponse class provides an interace for LakeFormation CreateLFTag responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::createLFTag
 */

/*!
 * Constructs a CreateLFTagResponse object for \a reply to \a request, with parent \a parent.
 */
CreateLFTagResponse::CreateLFTagResponse(
        const CreateLFTagRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new CreateLFTagResponsePrivate(this), parent)
{
    setRequest(new CreateLFTagRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateLFTagRequest * CreateLFTagResponse::request() const
{
    Q_D(const CreateLFTagResponse);
    return static_cast<const CreateLFTagRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LakeFormation CreateLFTag \a response.
 */
void CreateLFTagResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateLFTagResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::CreateLFTagResponsePrivate
 * \brief The CreateLFTagResponsePrivate class provides private implementation for CreateLFTagResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a CreateLFTagResponsePrivate object with public implementation \a q.
 */
CreateLFTagResponsePrivate::CreateLFTagResponsePrivate(
    CreateLFTagResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation CreateLFTag response element from \a xml.
 */
void CreateLFTagResponsePrivate::parseCreateLFTagResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLFTagResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
