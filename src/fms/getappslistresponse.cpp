// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getappslistresponse.h"
#include "getappslistresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Fms {

/*!
 * \class QtAws::Fms::GetAppsListResponse
 * \brief The GetAppsListResponse class provides an interace for Fms GetAppsList responses.
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
 * \sa FmsClient::getAppsList
 */

/*!
 * Constructs a GetAppsListResponse object for \a reply to \a request, with parent \a parent.
 */
GetAppsListResponse::GetAppsListResponse(
        const GetAppsListRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FmsResponse(new GetAppsListResponsePrivate(this), parent)
{
    setRequest(new GetAppsListRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAppsListRequest * GetAppsListResponse::request() const
{
    Q_D(const GetAppsListResponse);
    return static_cast<const GetAppsListRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Fms GetAppsList \a response.
 */
void GetAppsListResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAppsListResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Fms::GetAppsListResponsePrivate
 * \brief The GetAppsListResponsePrivate class provides private implementation for GetAppsListResponse.
 * \internal
 *
 * \inmodule QtAwsFms
 */

/*!
 * Constructs a GetAppsListResponsePrivate object with public implementation \a q.
 */
GetAppsListResponsePrivate::GetAppsListResponsePrivate(
    GetAppsListResponse * const q) : FmsResponsePrivate(q)
{

}

/*!
 * Parses a Fms GetAppsList response element from \a xml.
 */
void GetAppsListResponsePrivate::parseGetAppsListResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAppsListResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Fms
} // namespace QtAws
