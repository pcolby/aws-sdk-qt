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

#include "disabledelegatedadminaccountresponse.h"
#include "disabledelegatedadminaccountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::DisableDelegatedAdminAccountResponse
 * \brief The DisableDelegatedAdminAccountResponse class provides an interace for Inspector2 DisableDelegatedAdminAccount responses.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::disableDelegatedAdminAccount
 */

/*!
 * Constructs a DisableDelegatedAdminAccountResponse object for \a reply to \a request, with parent \a parent.
 */
DisableDelegatedAdminAccountResponse::DisableDelegatedAdminAccountResponse(
        const DisableDelegatedAdminAccountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Inspector2Response(new DisableDelegatedAdminAccountResponsePrivate(this), parent)
{
    setRequest(new DisableDelegatedAdminAccountRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisableDelegatedAdminAccountRequest * DisableDelegatedAdminAccountResponse::request() const
{
    Q_D(const DisableDelegatedAdminAccountResponse);
    return static_cast<const DisableDelegatedAdminAccountRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector2 DisableDelegatedAdminAccount \a response.
 */
void DisableDelegatedAdminAccountResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisableDelegatedAdminAccountResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector2::DisableDelegatedAdminAccountResponsePrivate
 * \brief The DisableDelegatedAdminAccountResponsePrivate class provides private implementation for DisableDelegatedAdminAccountResponse.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a DisableDelegatedAdminAccountResponsePrivate object with public implementation \a q.
 */
DisableDelegatedAdminAccountResponsePrivate::DisableDelegatedAdminAccountResponsePrivate(
    DisableDelegatedAdminAccountResponse * const q) : Inspector2ResponsePrivate(q)
{

}

/*!
 * Parses a Inspector2 DisableDelegatedAdminAccount response element from \a xml.
 */
void DisableDelegatedAdminAccountResponsePrivate::parseDisableDelegatedAdminAccountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisableDelegatedAdminAccountResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector2
} // namespace QtAws
