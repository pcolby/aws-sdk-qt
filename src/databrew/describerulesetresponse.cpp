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

#include "describerulesetresponse.h"
#include "describerulesetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::DescribeRulesetResponse
 * \brief The DescribeRulesetResponse class provides an interace for DataBrew DescribeRuleset responses.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::describeRuleset
 */

/*!
 * Constructs a DescribeRulesetResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeRulesetResponse::DescribeRulesetResponse(
        const DescribeRulesetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataBrewResponse(new DescribeRulesetResponsePrivate(this), parent)
{
    setRequest(new DescribeRulesetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeRulesetRequest * DescribeRulesetResponse::request() const
{
    Q_D(const DescribeRulesetResponse);
    return static_cast<const DescribeRulesetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataBrew DescribeRuleset \a response.
 */
void DescribeRulesetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeRulesetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataBrew::DescribeRulesetResponsePrivate
 * \brief The DescribeRulesetResponsePrivate class provides private implementation for DescribeRulesetResponse.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a DescribeRulesetResponsePrivate object with public implementation \a q.
 */
DescribeRulesetResponsePrivate::DescribeRulesetResponsePrivate(
    DescribeRulesetResponse * const q) : DataBrewResponsePrivate(q)
{

}

/*!
 * Parses a DataBrew DescribeRuleset response element from \a xml.
 */
void DescribeRulesetResponsePrivate::parseDescribeRulesetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeRulesetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataBrew
} // namespace QtAws
