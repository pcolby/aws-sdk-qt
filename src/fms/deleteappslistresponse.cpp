// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteappslistresponse.h"
#include "deleteappslistresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Fms {

/*!
 * \class QtAws::Fms::DeleteAppsListResponse
 * \brief The DeleteAppsListResponse class provides an interace for Fms DeleteAppsList responses.
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
 * \sa FmsClient::deleteAppsList
 */

/*!
 * Constructs a DeleteAppsListResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAppsListResponse::DeleteAppsListResponse(
        const DeleteAppsListRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FmsResponse(new DeleteAppsListResponsePrivate(this), parent)
{
    setRequest(new DeleteAppsListRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAppsListRequest * DeleteAppsListResponse::request() const
{
    Q_D(const DeleteAppsListResponse);
    return static_cast<const DeleteAppsListRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Fms DeleteAppsList \a response.
 */
void DeleteAppsListResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAppsListResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Fms::DeleteAppsListResponsePrivate
 * \brief The DeleteAppsListResponsePrivate class provides private implementation for DeleteAppsListResponse.
 * \internal
 *
 * \inmodule QtAwsFms
 */

/*!
 * Constructs a DeleteAppsListResponsePrivate object with public implementation \a q.
 */
DeleteAppsListResponsePrivate::DeleteAppsListResponsePrivate(
    DeleteAppsListResponse * const q) : FmsResponsePrivate(q)
{

}

/*!
 * Parses a Fms DeleteAppsList response element from \a xml.
 */
void DeleteAppsListResponsePrivate::parseDeleteAppsListResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAppsListResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Fms
} // namespace QtAws
