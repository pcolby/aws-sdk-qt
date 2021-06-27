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

#include "deregisterresourceresponse.h"
#include "deregisterresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::DeregisterResourceResponse
 * \brief The DeregisterResourceResponse class provides an interace for LakeFormation DeregisterResource responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>AWS Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the AWS Lake Formation
 *
 * \sa LakeFormationClient::deregisterResource
 */

/*!
 * Constructs a DeregisterResourceResponse object for \a reply to \a request, with parent \a parent.
 */
DeregisterResourceResponse::DeregisterResourceResponse(
        const DeregisterResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new DeregisterResourceResponsePrivate(this), parent)
{
    setRequest(new DeregisterResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeregisterResourceRequest * DeregisterResourceResponse::request() const
{
    return static_cast<const DeregisterResourceRequest *>(LakeFormationResponse::request());
}

/*!
 * \reimp
 * Parses a successful LakeFormation DeregisterResource \a response.
 */
void DeregisterResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeregisterResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::DeregisterResourceResponsePrivate
 * \brief The DeregisterResourceResponsePrivate class provides private implementation for DeregisterResourceResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a DeregisterResourceResponsePrivate object with public implementation \a q.
 */
DeregisterResourceResponsePrivate::DeregisterResourceResponsePrivate(
    DeregisterResourceResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation DeregisterResource response element from \a xml.
 */
void DeregisterResourceResponsePrivate::parseDeregisterResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeregisterResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
