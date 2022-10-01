// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listrulegroupsnamespacesresponse.h"
#include "listrulegroupsnamespacesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amp {

/*!
 * \class QtAws::Amp::ListRuleGroupsNamespacesResponse
 * \brief The ListRuleGroupsNamespacesResponse class provides an interace for Amp ListRuleGroupsNamespaces responses.
 *
 * \inmodule QtAwsAmp
 *
 *
 * \sa AmpClient::listRuleGroupsNamespaces
 */

/*!
 * Constructs a ListRuleGroupsNamespacesResponse object for \a reply to \a request, with parent \a parent.
 */
ListRuleGroupsNamespacesResponse::ListRuleGroupsNamespacesResponse(
        const ListRuleGroupsNamespacesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmpResponse(new ListRuleGroupsNamespacesResponsePrivate(this), parent)
{
    setRequest(new ListRuleGroupsNamespacesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListRuleGroupsNamespacesRequest * ListRuleGroupsNamespacesResponse::request() const
{
    Q_D(const ListRuleGroupsNamespacesResponse);
    return static_cast<const ListRuleGroupsNamespacesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Amp ListRuleGroupsNamespaces \a response.
 */
void ListRuleGroupsNamespacesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListRuleGroupsNamespacesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amp::ListRuleGroupsNamespacesResponsePrivate
 * \brief The ListRuleGroupsNamespacesResponsePrivate class provides private implementation for ListRuleGroupsNamespacesResponse.
 * \internal
 *
 * \inmodule QtAwsAmp
 */

/*!
 * Constructs a ListRuleGroupsNamespacesResponsePrivate object with public implementation \a q.
 */
ListRuleGroupsNamespacesResponsePrivate::ListRuleGroupsNamespacesResponsePrivate(
    ListRuleGroupsNamespacesResponse * const q) : AmpResponsePrivate(q)
{

}

/*!
 * Parses a Amp ListRuleGroupsNamespaces response element from \a xml.
 */
void ListRuleGroupsNamespacesResponsePrivate::parseListRuleGroupsNamespacesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRuleGroupsNamespacesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amp
} // namespace QtAws
