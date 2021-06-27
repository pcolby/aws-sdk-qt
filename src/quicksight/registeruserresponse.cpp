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

#include "registeruserresponse.h"
#include "registeruserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::RegisterUserResponse
 * \brief The RegisterUserResponse class provides an interace for QuickSight RegisterUser responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::registerUser
 */

/*!
 * Constructs a RegisterUserResponse object for \a reply to \a request, with parent \a parent.
 */
RegisterUserResponse::RegisterUserResponse(
        const RegisterUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new RegisterUserResponsePrivate(this), parent)
{
    setRequest(new RegisterUserRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RegisterUserRequest * RegisterUserResponse::request() const
{
    return static_cast<const RegisterUserRequest *>(QuickSightResponse::request());
}

/*!
 * \reimp
 * Parses a successful QuickSight RegisterUser \a response.
 */
void RegisterUserResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RegisterUserResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::RegisterUserResponsePrivate
 * \brief The RegisterUserResponsePrivate class provides private implementation for RegisterUserResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a RegisterUserResponsePrivate object with public implementation \a q.
 */
RegisterUserResponsePrivate::RegisterUserResponsePrivate(
    RegisterUserResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight RegisterUser response element from \a xml.
 */
void RegisterUserResponsePrivate::parseRegisterUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterUserResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
