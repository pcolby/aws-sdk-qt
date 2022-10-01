// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcompliancestatusresponse.h"
#include "listcompliancestatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Fms {

/*!
 * \class QtAws::Fms::ListComplianceStatusResponse
 * \brief The ListComplianceStatusResponse class provides an interace for Fms ListComplianceStatus responses.
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
 * \sa FmsClient::listComplianceStatus
 */

/*!
 * Constructs a ListComplianceStatusResponse object for \a reply to \a request, with parent \a parent.
 */
ListComplianceStatusResponse::ListComplianceStatusResponse(
        const ListComplianceStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FmsResponse(new ListComplianceStatusResponsePrivate(this), parent)
{
    setRequest(new ListComplianceStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListComplianceStatusRequest * ListComplianceStatusResponse::request() const
{
    Q_D(const ListComplianceStatusResponse);
    return static_cast<const ListComplianceStatusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Fms ListComplianceStatus \a response.
 */
void ListComplianceStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListComplianceStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Fms::ListComplianceStatusResponsePrivate
 * \brief The ListComplianceStatusResponsePrivate class provides private implementation for ListComplianceStatusResponse.
 * \internal
 *
 * \inmodule QtAwsFms
 */

/*!
 * Constructs a ListComplianceStatusResponsePrivate object with public implementation \a q.
 */
ListComplianceStatusResponsePrivate::ListComplianceStatusResponsePrivate(
    ListComplianceStatusResponse * const q) : FmsResponsePrivate(q)
{

}

/*!
 * Parses a Fms ListComplianceStatus response element from \a xml.
 */
void ListComplianceStatusResponsePrivate::parseListComplianceStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListComplianceStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Fms
} // namespace QtAws
