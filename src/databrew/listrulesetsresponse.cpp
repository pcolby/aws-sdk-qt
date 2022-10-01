/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
