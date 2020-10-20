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

#include "modifyaccountresponse.h"
#include "modifyaccountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::ModifyAccountResponse
 * \brief The ModifyAccountResponse class provides an interace for WorkSpaces ModifyAccount responses.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::modifyAccount
 */

/*!
 * Constructs a ModifyAccountResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyAccountResponse::ModifyAccountResponse(
        const ModifyAccountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesResponse(new ModifyAccountResponsePrivate(this), parent)
{
    setRequest(new ModifyAccountRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyAccountRequest * ModifyAccountResponse::request() const
{
    Q_D(const ModifyAccountResponse);
    return static_cast<const ModifyAccountRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpaces ModifyAccount \a response.
 */
void ModifyAccountResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ModifyAccountResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpaces::ModifyAccountResponsePrivate
 * \brief The ModifyAccountResponsePrivate class provides private implementation for ModifyAccountResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a ModifyAccountResponsePrivate object with public implementation \a q.
 */
ModifyAccountResponsePrivate::ModifyAccountResponsePrivate(
    ModifyAccountResponse * const q) : WorkSpacesResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpaces ModifyAccount response element from \a xml.
 */
void ModifyAccountResponsePrivate::parseModifyAccountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyAccountResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpaces
} // namespace QtAws
