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

#include "registerresourceresponse.h"
#include "registerresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::RegisterResourceResponse
 * \brief The RegisterResourceResponse class provides an interace for LakeFormation RegisterResource responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::registerResource
 */

/*!
 * Constructs a RegisterResourceResponse object for \a reply to \a request, with parent \a parent.
 */
RegisterResourceResponse::RegisterResourceResponse(
        const RegisterResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new RegisterResourceResponsePrivate(this), parent)
{
    setRequest(new RegisterResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RegisterResourceRequest * RegisterResourceResponse::request() const
{
    Q_D(const RegisterResourceResponse);
    return static_cast<const RegisterResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LakeFormation RegisterResource \a response.
 */
void RegisterResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RegisterResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::RegisterResourceResponsePrivate
 * \brief The RegisterResourceResponsePrivate class provides private implementation for RegisterResourceResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a RegisterResourceResponsePrivate object with public implementation \a q.
 */
RegisterResourceResponsePrivate::RegisterResourceResponsePrivate(
    RegisterResourceResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation RegisterResource response element from \a xml.
 */
void RegisterResourceResponsePrivate::parseRegisterResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
