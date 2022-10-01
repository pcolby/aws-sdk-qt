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

#include "assumedecoratedrolewithsamlresponse.h"
#include "assumedecoratedrolewithsamlresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::AssumeDecoratedRoleWithSAMLResponse
 * \brief The AssumeDecoratedRoleWithSAMLResponse class provides an interace for LakeFormation AssumeDecoratedRoleWithSAML responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::assumeDecoratedRoleWithSAML
 */

/*!
 * Constructs a AssumeDecoratedRoleWithSAMLResponse object for \a reply to \a request, with parent \a parent.
 */
AssumeDecoratedRoleWithSAMLResponse::AssumeDecoratedRoleWithSAMLResponse(
        const AssumeDecoratedRoleWithSAMLRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new AssumeDecoratedRoleWithSAMLResponsePrivate(this), parent)
{
    setRequest(new AssumeDecoratedRoleWithSAMLRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssumeDecoratedRoleWithSAMLRequest * AssumeDecoratedRoleWithSAMLResponse::request() const
{
    Q_D(const AssumeDecoratedRoleWithSAMLResponse);
    return static_cast<const AssumeDecoratedRoleWithSAMLRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LakeFormation AssumeDecoratedRoleWithSAML \a response.
 */
void AssumeDecoratedRoleWithSAMLResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssumeDecoratedRoleWithSAMLResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::AssumeDecoratedRoleWithSAMLResponsePrivate
 * \brief The AssumeDecoratedRoleWithSAMLResponsePrivate class provides private implementation for AssumeDecoratedRoleWithSAMLResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a AssumeDecoratedRoleWithSAMLResponsePrivate object with public implementation \a q.
 */
AssumeDecoratedRoleWithSAMLResponsePrivate::AssumeDecoratedRoleWithSAMLResponsePrivate(
    AssumeDecoratedRoleWithSAMLResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation AssumeDecoratedRoleWithSAML response element from \a xml.
 */
void AssumeDecoratedRoleWithSAMLResponsePrivate::parseAssumeDecoratedRoleWithSAMLResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssumeDecoratedRoleWithSAMLResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
