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

#include "updatelftagresponse.h"
#include "updatelftagresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::UpdateLFTagResponse
 * \brief The UpdateLFTagResponse class provides an interace for LakeFormation UpdateLFTag responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>AWS Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the AWS Lake Formation
 *
 * \sa LakeFormationClient::updateLFTag
 */

/*!
 * Constructs a UpdateLFTagResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateLFTagResponse::UpdateLFTagResponse(
        const UpdateLFTagRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new UpdateLFTagResponsePrivate(this), parent)
{
    setRequest(new UpdateLFTagRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateLFTagRequest * UpdateLFTagResponse::request() const
{
    return static_cast<const UpdateLFTagRequest *>(LakeFormationResponse::request());
}

/*!
 * \reimp
 * Parses a successful LakeFormation UpdateLFTag \a response.
 */
void UpdateLFTagResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateLFTagResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::UpdateLFTagResponsePrivate
 * \brief The UpdateLFTagResponsePrivate class provides private implementation for UpdateLFTagResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a UpdateLFTagResponsePrivate object with public implementation \a q.
 */
UpdateLFTagResponsePrivate::UpdateLFTagResponsePrivate(
    UpdateLFTagResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation UpdateLFTag response element from \a xml.
 */
void UpdateLFTagResponsePrivate::parseUpdateLFTagResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateLFTagResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
