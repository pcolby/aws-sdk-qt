// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociatedrtroleresponse.h"
#include "disassociatedrtroleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::DisassociateDRTRoleResponse
 * \brief The DisassociateDRTRoleResponse class provides an interace for Shield DisassociateDRTRole responses.
 *
 * \inmodule QtAwsShield
 *
 *  <fullname>Shield Advanced</fullname>
 * 
 *  This is the <i>Shield Advanced API Reference</i>. This guide is for developers who need detailed information about the
 *  Shield Advanced API actions, data types, and errors. For detailed information about WAF and Shield Advanced features and
 *  an overview of how to use the WAF and Shield Advanced APIs, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/">WAF and Shield Developer
 *
 * \sa ShieldClient::disassociateDRTRole
 */

/*!
 * Constructs a DisassociateDRTRoleResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateDRTRoleResponse::DisassociateDRTRoleResponse(
        const DisassociateDRTRoleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ShieldResponse(new DisassociateDRTRoleResponsePrivate(this), parent)
{
    setRequest(new DisassociateDRTRoleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateDRTRoleRequest * DisassociateDRTRoleResponse::request() const
{
    Q_D(const DisassociateDRTRoleResponse);
    return static_cast<const DisassociateDRTRoleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Shield DisassociateDRTRole \a response.
 */
void DisassociateDRTRoleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateDRTRoleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Shield::DisassociateDRTRoleResponsePrivate
 * \brief The DisassociateDRTRoleResponsePrivate class provides private implementation for DisassociateDRTRoleResponse.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a DisassociateDRTRoleResponsePrivate object with public implementation \a q.
 */
DisassociateDRTRoleResponsePrivate::DisassociateDRTRoleResponsePrivate(
    DisassociateDRTRoleResponse * const q) : ShieldResponsePrivate(q)
{

}

/*!
 * Parses a Shield DisassociateDRTRole response element from \a xml.
 */
void DisassociateDRTRoleResponsePrivate::parseDisassociateDRTRoleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateDRTRoleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Shield
} // namespace QtAws
