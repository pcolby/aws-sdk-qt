// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getadminaccountresponse.h"
#include "getadminaccountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Fms {

/*!
 * \class QtAws::Fms::GetAdminAccountResponse
 * \brief The GetAdminAccountResponse class provides an interace for Fms GetAdminAccount responses.
 *
 * \inmodule QtAwsFms
 *
 *  This is the <i>Firewall Manager API Reference</i>. This guide is for developers who need detailed information about the
 *  Firewall Manager API actions, data types, and errors. For detailed information about Firewall Manager features, see the
 *  <a href="https://docs.aws.amazon.com/waf/latest/developerguide/fms-chapter.html">Firewall Manager Developer
 * 
 *  Guide</a>>
 * 
 *  Some API actions require explicit resource permissions. For information, see the developer guide topic <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/fms-api-permissions-ref.html">Firewall Manager required
 *  permissions for API actions</a>.
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
    : FmsResponse(new GetAdminAccountResponsePrivate(this), parent)
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
 * Parses a successful Fms GetAdminAccount \a response.
 */
void GetAdminAccountResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAdminAccountResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Fms::GetAdminAccountResponsePrivate
 * \brief The GetAdminAccountResponsePrivate class provides private implementation for GetAdminAccountResponse.
 * \internal
 *
 * \inmodule QtAwsFms
 */

/*!
 * Constructs a GetAdminAccountResponsePrivate object with public implementation \a q.
 */
GetAdminAccountResponsePrivate::GetAdminAccountResponsePrivate(
    GetAdminAccountResponse * const q) : FmsResponsePrivate(q)
{

}

/*!
 * Parses a Fms GetAdminAccount response element from \a xml.
 */
void GetAdminAccountResponsePrivate::parseGetAdminAccountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAdminAccountResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Fms
} // namespace QtAws
