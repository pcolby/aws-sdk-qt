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

#include "enabledelegatedadminaccountresponse.h"
#include "enabledelegatedadminaccountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::EnableDelegatedAdminAccountResponse
 * \brief The EnableDelegatedAdminAccountResponse class provides an interace for Inspector2 EnableDelegatedAdminAccount responses.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::enableDelegatedAdminAccount
 */

/*!
 * Constructs a EnableDelegatedAdminAccountResponse object for \a reply to \a request, with parent \a parent.
 */
EnableDelegatedAdminAccountResponse::EnableDelegatedAdminAccountResponse(
        const EnableDelegatedAdminAccountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Inspector2Response(new EnableDelegatedAdminAccountResponsePrivate(this), parent)
{
    setRequest(new EnableDelegatedAdminAccountRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const EnableDelegatedAdminAccountRequest * EnableDelegatedAdminAccountResponse::request() const
{
    Q_D(const EnableDelegatedAdminAccountResponse);
    return static_cast<const EnableDelegatedAdminAccountRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector2 EnableDelegatedAdminAccount \a response.
 */
void EnableDelegatedAdminAccountResponse::parseSuccess(QIODevice &response)
{
    //Q_D(EnableDelegatedAdminAccountResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector2::EnableDelegatedAdminAccountResponsePrivate
 * \brief The EnableDelegatedAdminAccountResponsePrivate class provides private implementation for EnableDelegatedAdminAccountResponse.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a EnableDelegatedAdminAccountResponsePrivate object with public implementation \a q.
 */
EnableDelegatedAdminAccountResponsePrivate::EnableDelegatedAdminAccountResponsePrivate(
    EnableDelegatedAdminAccountResponse * const q) : Inspector2ResponsePrivate(q)
{

}

/*!
 * Parses a Inspector2 EnableDelegatedAdminAccount response element from \a xml.
 */
void EnableDelegatedAdminAccountResponsePrivate::parseEnableDelegatedAdminAccountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EnableDelegatedAdminAccountResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector2
} // namespace QtAws
