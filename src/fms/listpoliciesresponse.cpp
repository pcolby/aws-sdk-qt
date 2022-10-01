// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listpoliciesresponse.h"
#include "listpoliciesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Fms {

/*!
 * \class QtAws::Fms::ListPoliciesResponse
 * \brief The ListPoliciesResponse class provides an interace for Fms ListPolicies responses.
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
 * \sa FmsClient::listPolicies
 */

/*!
 * Constructs a ListPoliciesResponse object for \a reply to \a request, with parent \a parent.
 */
ListPoliciesResponse::ListPoliciesResponse(
        const ListPoliciesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FmsResponse(new ListPoliciesResponsePrivate(this), parent)
{
    setRequest(new ListPoliciesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPoliciesRequest * ListPoliciesResponse::request() const
{
    Q_D(const ListPoliciesResponse);
    return static_cast<const ListPoliciesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Fms ListPolicies \a response.
 */
void ListPoliciesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPoliciesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Fms::ListPoliciesResponsePrivate
 * \brief The ListPoliciesResponsePrivate class provides private implementation for ListPoliciesResponse.
 * \internal
 *
 * \inmodule QtAwsFms
 */

/*!
 * Constructs a ListPoliciesResponsePrivate object with public implementation \a q.
 */
ListPoliciesResponsePrivate::ListPoliciesResponsePrivate(
    ListPoliciesResponse * const q) : FmsResponsePrivate(q)
{

}

/*!
 * Parses a Fms ListPolicies response element from \a xml.
 */
void ListPoliciesResponsePrivate::parseListPoliciesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPoliciesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Fms
} // namespace QtAws
