// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "registercrossaccountaccessroleresponse.h"
#include "registercrossaccountaccessroleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::RegisterCrossAccountAccessRoleResponse
 * \brief The RegisterCrossAccountAccessRoleResponse class provides an interace for Inspector RegisterCrossAccountAccessRole responses.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::registerCrossAccountAccessRole
 */

/*!
 * Constructs a RegisterCrossAccountAccessRoleResponse object for \a reply to \a request, with parent \a parent.
 */
RegisterCrossAccountAccessRoleResponse::RegisterCrossAccountAccessRoleResponse(
        const RegisterCrossAccountAccessRoleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new RegisterCrossAccountAccessRoleResponsePrivate(this), parent)
{
    setRequest(new RegisterCrossAccountAccessRoleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RegisterCrossAccountAccessRoleRequest * RegisterCrossAccountAccessRoleResponse::request() const
{
    Q_D(const RegisterCrossAccountAccessRoleResponse);
    return static_cast<const RegisterCrossAccountAccessRoleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector RegisterCrossAccountAccessRole \a response.
 */
void RegisterCrossAccountAccessRoleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RegisterCrossAccountAccessRoleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector::RegisterCrossAccountAccessRoleResponsePrivate
 * \brief The RegisterCrossAccountAccessRoleResponsePrivate class provides private implementation for RegisterCrossAccountAccessRoleResponse.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a RegisterCrossAccountAccessRoleResponsePrivate object with public implementation \a q.
 */
RegisterCrossAccountAccessRoleResponsePrivate::RegisterCrossAccountAccessRoleResponsePrivate(
    RegisterCrossAccountAccessRoleResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * Parses a Inspector RegisterCrossAccountAccessRole response element from \a xml.
 */
void RegisterCrossAccountAccessRoleResponsePrivate::parseRegisterCrossAccountAccessRoleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterCrossAccountAccessRoleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector
} // namespace QtAws
