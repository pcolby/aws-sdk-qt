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

#include "getdelegatedadminaccountresponse.h"
#include "getdelegatedadminaccountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::GetDelegatedAdminAccountResponse
 * \brief The GetDelegatedAdminAccountResponse class provides an interace for Inspector2 GetDelegatedAdminAccount responses.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::getDelegatedAdminAccount
 */

/*!
 * Constructs a GetDelegatedAdminAccountResponse object for \a reply to \a request, with parent \a parent.
 */
GetDelegatedAdminAccountResponse::GetDelegatedAdminAccountResponse(
        const GetDelegatedAdminAccountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Inspector2Response(new GetDelegatedAdminAccountResponsePrivate(this), parent)
{
    setRequest(new GetDelegatedAdminAccountRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDelegatedAdminAccountRequest * GetDelegatedAdminAccountResponse::request() const
{
    Q_D(const GetDelegatedAdminAccountResponse);
    return static_cast<const GetDelegatedAdminAccountRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector2 GetDelegatedAdminAccount \a response.
 */
void GetDelegatedAdminAccountResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDelegatedAdminAccountResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector2::GetDelegatedAdminAccountResponsePrivate
 * \brief The GetDelegatedAdminAccountResponsePrivate class provides private implementation for GetDelegatedAdminAccountResponse.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a GetDelegatedAdminAccountResponsePrivate object with public implementation \a q.
 */
GetDelegatedAdminAccountResponsePrivate::GetDelegatedAdminAccountResponsePrivate(
    GetDelegatedAdminAccountResponse * const q) : Inspector2ResponsePrivate(q)
{

}

/*!
 * Parses a Inspector2 GetDelegatedAdminAccount response element from \a xml.
 */
void GetDelegatedAdminAccountResponsePrivate::parseGetDelegatedAdminAccountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDelegatedAdminAccountResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector2
} // namespace QtAws
