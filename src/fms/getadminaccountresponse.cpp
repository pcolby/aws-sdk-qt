/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getadminaccountresponse.h"
#include "getadminaccountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FMS {

/*!
 * \class QtAws::FMS::GetAdminAccountResponse
 * \brief The GetAdminAccountResponse class provides an interace for FMS GetAdminAccount responses.
 *
 * \inmodule QtAwsFMS
 *
 *  <fullname>AWS Firewall Manager</fullname>
 * 
 *  This is the <i>AWS Firewall Manager API Reference</i>. This guide is for developers who need detailed information about
 *  the AWS Firewall Manager API actions, data types, and errors. For detailed information about AWS Firewall Manager
 *  features, see the <a href="http://docs.aws.amazon.com/waf/latest/developerguide/fms-chapter.html">AWS Firewall Manager
 *  Developer
 *
 * \sa FmsClient::getAdminAccount
 */

/*!
 * Constructs a GetAdminAccountResponse object for \a reply to \a request, with parent \a parent.
 */
GetAdminAccountResponse::GetAdminAccountResponse(
        const GetAdminAccountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FMSResponse(new GetAdminAccountResponsePrivate(this), parent)
{
    setRequest(new GetAdminAccountRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAdminAccountRequest * GetAdminAccountResponse::request() const
{
    Q_D(const GetAdminAccountResponse);
    return static_cast<const GetAdminAccountRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FMS GetAdminAccount \a response.
 */
void GetAdminAccountResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetAdminAccountResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FMS::GetAdminAccountResponsePrivate
 * \brief The GetAdminAccountResponsePrivate class provides private implementation for GetAdminAccountResponse.
 * \internal
 *
 * \inmodule QtAwsFMS
 */

/*!
 * Constructs a GetAdminAccountResponsePrivate object with public implementation \a q.
 */
GetAdminAccountResponsePrivate::GetAdminAccountResponsePrivate(
    GetAdminAccountResponse * const q) : FMSResponsePrivate(q)
{

}

/*!
 * Parses a FMS GetAdminAccount response element from \a xml.
 */
void GetAdminAccountResponsePrivate::parseGetAdminAccountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAdminAccountResponse"));
    /// @todo
}

} // namespace FMS
} // namespace QtAws
