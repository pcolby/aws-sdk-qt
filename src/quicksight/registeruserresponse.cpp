// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
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
    Q_D(const RegisterUserResponse);
    return static_cast<const RegisterUserRequest *>(d->request);
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
