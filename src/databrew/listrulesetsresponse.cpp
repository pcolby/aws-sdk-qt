// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listrulesetsresponse.h"
#include "listrulesetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::ListRulesetsResponse
 * \brief The ListRulesetsResponse class provides an interace for DataBrew ListRulesets responses.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::listRulesets
 */

/*!
 * Constructs a ListRulesetsResponse object for \a reply to \a request, with parent \a parent.
 */
ListRulesetsResponse::ListRulesetsResponse(
        const ListRulesetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataBrewResponse(new ListRulesetsResponsePrivate(this), parent)
{
    setRequest(new ListRulesetsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListRulesetsRequest * ListRulesetsResponse::request() const
{
    Q_D(const ListRulesetsResponse);
    return static_cast<const ListRulesetsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataBrew ListRulesets \a response.
 */
void ListRulesetsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListRulesetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataBrew::ListRulesetsResponsePrivate
 * \brief The ListRulesetsResponsePrivate class provides private implementation for ListRulesetsResponse.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a ListRulesetsResponsePrivate object with public implementation \a q.
 */
ListRulesetsResponsePrivate::ListRulesetsResponsePrivate(
    ListRulesetsResponse * const q) : DataBrewResponsePrivate(q)
{

}

/*!
 * Parses a DataBrew ListRulesets response element from \a xml.
 */
void ListRulesetsResponsePrivate::parseListRulesetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRulesetsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataBrew
} // namespace QtAws
