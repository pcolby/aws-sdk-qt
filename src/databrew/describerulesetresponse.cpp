// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
