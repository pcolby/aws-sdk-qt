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

#include "modifyclientpropertiesresponse.h"
#include "modifyclientpropertiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::ModifyClientPropertiesResponse
 * \brief The ModifyClientPropertiesResponse class provides an interace for WorkSpaces ModifyClientProperties responses.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::modifyClientProperties
 */

/*!
 * Constructs a ModifyClientPropertiesResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyClientPropertiesResponse::ModifyClientPropertiesResponse(
        const ModifyClientPropertiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesResponse(new ModifyClientPropertiesResponsePrivate(this), parent)
{
    setRequest(new ModifyClientPropertiesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyClientPropertiesRequest * ModifyClientPropertiesResponse::request() const
{
    Q_D(const ModifyClientPropertiesResponse);
    return static_cast<const ModifyClientPropertiesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpaces ModifyClientProperties \a response.
 */
void ModifyClientPropertiesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ModifyClientPropertiesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpaces::ModifyClientPropertiesResponsePrivate
 * \brief The ModifyClientPropertiesResponsePrivate class provides private implementation for ModifyClientPropertiesResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a ModifyClientPropertiesResponsePrivate object with public implementation \a q.
 */
ModifyClientPropertiesResponsePrivate::ModifyClientPropertiesResponsePrivate(
    ModifyClientPropertiesResponse * const q) : WorkSpacesResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpaces ModifyClientProperties response element from \a xml.
 */
void ModifyClientPropertiesResponsePrivate::parseModifyClientPropertiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyClientPropertiesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpaces
} // namespace QtAws
